#include <math.h>
#include "posPemain.h"
#include "PetaPac.h"
#include "ItemPac.h"
#include "sktime.h"
#include "musik.h"

pos P,M,N;
logika Log;
logika LogD;
short int nyawaP, random;

short int getNyawa(){
	return nyawaP;
}

pos getPacman(){
	return P;
}

pos getMusuh(short int MusuhKe){
	if(MusuhKe==1) return M;
	else return N;
}

void setPacman(short int X, short int Y){
	P.x = X;
	P.y = Y;
	nyawaP = 10;
	random = 0;
}

void setMusuh(short int MusuhKe, short int X, short int Y){
	if(MusuhKe==1){
		M.x = X;
		M.y = Y;
	}
	else{
		N.x = X;
		N.y = Y;
	}
}

void majuPacman(int input){ 
	hapus(P);
	
	switch(input){
		case 75: //kanan
			if(!cekPeta(P.x-1,P.y,1)) P.x=P.x-1; 
			break;
		case 77: //kiri
			if(!cekPeta(P.x+1,P.y,1)) P.x=P.x+1;
			break;
		case 80: //bawah
			if(!cekPeta(P.x,P.y+1,1)) P.y=P.y+1;
			break;
		case 72: //atas
			if(!cekPeta(P.x,P.y-1,1)) P.y=P.y-1;
			break;
	};
	
	if(P.y<0) P.y=16;
	if(P.y>16) P.y=0;
	
	pacman(input,&P);
}

bool cekNyawa(pos G, pos H, pos I){
	if((G.x==H.x)&&(G.y==H.y)) return (true);
	else if((G.x==I.x)&&(G.y==I.y)) return(true);
	else return (false);
}

void makanMusuh(int totItem){
	
	if(cekPeta(P.x,P.y,0)){
		setPeta(P,9);
		tambahSkor(5);			//nilai koin=5, money bag = 10, 10, 10;
		musikmakan();
		totItem--;
	}
	else if (cekPeta(P.x,P.y,2)){
		setPeta(P,9);
		tambahSkor(10);
		musikmakan();
		totItem--;
	}
	else if(cekPeta(P.x,P.y,3)){//pacman makan beer
		setPeta(P,9);
		P.powerUp=30;//pacman power up, sehingga bisa makan musuh
		tambahSkor(10);
		musikmakan();
		totItem--;
	}
	else{
		musikpac();
	}
		
	if(cekNyawa(P,M,N)){
		if(P.powerUp<1) nyawaP--;
		else {
			if(P.x==M.x&&P.y==M.y){
				M.x=12;M.y=10;
			}	
			if(P.x==N.x&&P.y==N.y){
				
				N.x=11;N.y=10;
			}
			tambahSkor(10);
			hapusmus();
		}
	}
}

void boolmusuh(){
	if(P.x<=M.x) Log.kiri = true;
	else Log.kiri = false;	
	
	if(P.y<=M.y) Log.atas = true;
	else Log.atas = false;
	
	if(P.y>=N.y) LogD.atas = false;
	else LogD.atas = true;
	
	if(P.x>=N.x) LogD.kiri = false;
	else LogD.kiri = true;
}

void musuhmikir(){

	if((Log.kiri == true)&&(!cekPeta(M.x-1,M.y,1))) M.x = M.x - 1;
	else if((Log.kiri == false)&&(!cekPeta(M.x+1,M.y,1))) M.x = M.x + 1;
	if((Log.atas == false)&&(!cekPeta(M.x,M.y+1,1))) M.y = M.y + 1;
	else if((Log.atas == true)&&(!cekPeta(M.x,M.y-1,1))) M.y = M.y - 1;
	
	if(M.y>15) M.y = 0;
	if(M.y<1) M.y = 16;
}

void musuhmikirdua(){
	if(((LogD.kiri == false)&&(!cekPeta(N.x+1,N.y,1)))&&(abs(M.x-N.x)!=5)) N.x = N.x + 1;
	else if(((LogD.kiri == true)&&(!cekPeta(N.x-1,N.y,1)))&&(abs(N.x-M.x)!=5)) N.x = N.x - 1;
	if(((LogD.atas == true)&&(!cekPeta(N.x,N.y-1,1)))&&(abs(N.y-M.y)!=5)) N.y = N.y - 1;
	else if(((LogD.atas == false)&&(!cekPeta(N.x,N.y+1,1)))&&(abs(N.y-M.y)!=5)) N.y = N.y + 1;
	
	if(N.y>15) N.y = 0;
	if(N.y<1) N.y = 16;
}

void hapusmus(){//hapus musuh
	int on,a,b,c;
	
	a=posisi(M.y);
	b=posisi(M.x);
	c=pengali()-5;
	
	hapus(M);
	
	if(cekPeta(M.x,M.y,0)){
		coin(b,a);
	}
	else if(cekPeta(M.x,M.y,2)){
		moneybag(b,a);
	}
	else if(cekPeta(M.x,M.y,3)){
		beer(b,a);
	}
	
	a=posisi(N.y);
	b=posisi(N.x);
	c=pengali()-5;
	
	hapus(N);
	
	if(cekPeta(N.x,N.y,0)){
		coin(b,a);
	}
	else if(cekPeta(N.x,N.y,2)){
		moneybag(b,a);
	}
	else if(cekPeta(N.x,N.y,3)){
		beer(b,a);
	}
}

void randomitem(){
	pos RandItem;
	RandItem.x = 11;
	RandItem.y = 6;
	switch(random){
		case 7:
			setPeta(RandItem,0);
			coin(posisi(11),posisi(6));
			break;
		case 16:
			setPeta(RandItem,1);
			hapusran();
			break;
		case 19:
			setPeta(RandItem,3);
			beer(posisi(11),posisi(6));
			break;
		case 23:
			setPeta(RandItem,1);
			hapusran();
			break;
		case 27:
			setPeta(RandItem,2);
			moneybag(posisi(11),posisi(6));
			break;
		case 31:
			setPeta(RandItem,1);
			hapusran();
			break;
		case 32:
			setPeta(RandItem,3);
			beer(posisi(11),posisi(6));
			break;
		case 35:
			setPeta(RandItem,1);
			hapusran();
			random = 0;
			break;
	}
	random = random + 1;
}

void cetakMusuh(){
	musuh(M);
	musuh(N);
}

void cetakPacman(){
	pacman(72,&P);
}
