#include "ADTPac.h"
#include "LayarPac.h"
#include "PetaPac.h"
#include "ItemPac.h"
#include "musik.h"
#include "menuawal.h"
#include "LevelUp.h"

void time(int *m, int *s,int *ms);
int random=0;
void leftBoard(char *player);
void click2start(bool &isKlik);
void input(char *player, int *win);
void tembok();
bool cekNyawa(pos G, pos H, pos I);
logika makanMus();
void proNyawa(int n);
void musuhmikir();
void musuhmikirdua();
void boolmusuh();
void laWani(logika O);
void majuPacman(int in);
void hapusmus();
void randomitem();
void levelup2();
void levelup3();

pos P,M,N;
logika Log;
logika LogD;

void data_score();

bool cekNyawa(pos G, pos H, pos I){
	if((G.x==H.x)&&(G.y==H.y)) return (true);
	else if((G.x==I.x)&&(G.y==I.y)) return(true);
	else return (false);
}

void laWani(logika O){
	if(O.atas == true){
			M.x = 11; M.y = 9;
	}
	if(O.kiri == true){
			N.x = 11; N.y = 9;
	}
}
	
int main()	
{   
	SetConsoleTitle("PAC-MALING");
	pembukaan();
	system("CLS");
	system("Color 70");
	int uk,win=0;
	bool isKlik;
//	logika Ameung;
	char player[10];
//	Ameung.atas = false;
//	Ameung.kiri = false;
	printf("\n\tPilih ukuran layar :\n\t1. Besar (1280 x 700) Recomended\n\t2. Sedang (800 x 600)\n\t3. Kecil (600 x 480)\n\tPilih (1/2/3) : ");
	scanf("%d",&uk);
	switch(uk){
		case 2:
			setPanjang(1024);
			setLebar(600);
			setUkur(12);
			break;
		case 3:
			setPanjang(854);
			setLebar(480);
			setUkur(9);
			break;
		default:
			setPanjang(1280);
			setLebar(700);
			setUkur(14);
			break;	
	};
	system("CLS");
	system("Color 60");
	printf("\n\tNama Pemain : ");
	scanf("%s", &player);
	initwindow(getPanjang(),getLebar(),"PAC-MALING");
	MulaiAlokGambar(1,1);
	while(1){
		P.x=11; P.y=14;
		isKlik = false;
		if(win==0) do{	click2start(isKlik); } while(!isKlik);
		musikklik();
		delay(10);
	
		cleardevice();
		if(win==0){
			tembok();
			M.x=9;M.y=8;N.x=11;N.y=11;
			outtextxy(posisi(8),posisi(10),"LEVEL 1, Press any button ...!");
			musuh(M);musuh(N);pacman(72,P);
			getch();hapus(P);hapusmus();
			tembok();
		}
		else if(win==1){
			outtextxy(posisi(8),posisi(10),"LEVEL 2");
			/*while(!ismouseclick(WM_LBUTTONDOWN)){
				Sleep(10);
			}*/
			delay(5000);
			cleardevice();
			levelup2();
			M.x=9;M.y=3;N.x=13;N.y=5;
			musuh(M);musuh(N);pacman(72,P);
			outtextxy(posisi(8),posisi(10),"LEVEL 2, Press any button ...!");
			getch();hapusmus();hapus(P);			
			levelup2();
		}
		else if(win==2){
			outtextxy(posisi(8),posisi(10),"LEVEL 3");
			/*while(!ismouseclick(WM_LBUTTONDOWN)){
				Sleep(10);
			}*/
			delay(5000);
			cleardevice();
			levelup3();
			M.x=11;M.y=4;N.x=11;N.y=2;
			musuh(M);musuh(N);pacman(72,P);
			outtextxy(posisi(8),posisi(10),"LEVEL 2, Press any button ...!");
			getch();hapusmus();hapus(P);
			levelup3();
		}
		else{
			cleardevice();
			outtextxy(posisi(10),posisi(10),"CONGRATSS!");
			while(!ismouseclick(WM_LBUTTONDOWN)){
				Sleep(10);
			}
			win++;
			break;
		}
		if(win<=2) input(player,&win);
		else win=0;
	};
		
	getchar();
	penutupan();
	closegraph();
	return 0;
}

void majuPacman(int input){ 
	
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
}


void proNyawa(int n){
	int on = pengali()/2;
	int c = pengali();
	switch(n){
			case 2: 
				readimagefile("hitam.bmp",posisi(24)+c,posisi(9)+on,posisi(28)+on,posisi(9)-on+5+120);
				readimagefile("blood.bmp",posisi(24)+c,posisi(9)+on,posisi(24)+on,posisi(9)-on);
				break;
			case 4:
				readimagefile("hitam.bmp",posisi(24)+c,posisi(9)+on,posisi(28)+c,posisi(9)-on);
				readimagefile("blood.bmp",posisi(24)+c,posisi(9)+on,posisi(25)+c,posisi(9)-on);
				break;
			case 6:
				readimagefile("hitam.bmp",posisi(24)+c,posisi(9)+on,posisi(28)+c,posisi(9)-on);
				readimagefile("blood.bmp",posisi(24)+c,posisi(9)+on,posisi(26)+17,posisi(9)-on);
				break;
			case 8:
				readimagefile("hitam.bmp",posisi(24)+c,posisi(9)+on,posisi(28)+17,posisi(9)-on);
				readimagefile("blood.bmp",posisi(24)+c,posisi(9)+on,posisi(27)+17,posisi(9)-on);		
				break;
			case 10:
				readimagefile("hitam.bmp",posisi(24)+c,posisi(9)+on,posisi(28)+17,posisi(9)-on);
				readimagefile("blood.bmp",posisi(24)+c,posisi(9)+on,posisi(28)+17,posisi(9)-on);
				break;			 
		};
}

logika makanMus(){
	logika O;
	if(P.x == M.x && P.y == M.y) O.atas = true;
	if(P.x == N.x && P.y == N.y) O.kiri = true;
	return (O);
}

void input(char *player, int *win){
	int in, oh, n=10, score=0,m=3,s=59,ms=10, lawanMusuh=0, skorA=0;
	logika eatMusuh;
	bool skol;
	leftBoard(player);
	while(1){
		if(kbhit()){
			in=getch();
		}
		time(&m,&s,&ms);
		skol=false;
		if(cekPeta(P.x,P.y,0)){
			setPeta(P,9);
			score=score+5;			//nilai koin=5, money bag = 10, 10, 10;
			musikmakan();
		}
		else if (cekPeta(P.x,P.y,2)||cekPeta(P.x,P.y,3)){
			setPeta(P,9);
			score=score+10;
			musikmakan();
		}
		else{
			musikpac();
		}
		//PlaySound("pac.wav",NULL,SND_LOOP );
		if(cekPeta(P.x,P.y,3)) lawanMusuh=lawanMusuh+2;
		hapus(P);
		oh++;
		hapusmus();
		majuPacman(in);
		randomitem();
		pacman(in,P);
	
		if(oh<12) boolmusuh();
		else{
			if(P.x == M.x){
				if(Log.kiri == false) Log.kiri =  true;
				if(Log.kiri == true) Log.kiri = false;
			} 
			if(P.y == M.x){
				if(Log.atas == true ) Log.atas = false;
				if(Log.atas == false) Log.atas =  true;
			}
		}
		if(oh>23) oh = 0;
		musuhmikir();
		if(oh%2==0) musuhmikirdua();
		musuh(M);
		musuh(N);
		
		eatMusuh = makanMus();
		
		char array[12];
		sprintf(array,"%d", score);
		outtextxy(posisi(26),posisi(7),array);

		proNyawa(n);
		
		skol = cekNyawa(P,M,N);
		
		switch(skol){
			case true:
				if(lawanMusuh<1) n=n-1;
				else if(lawanMusuh>=1){
					laWani(eatMusuh);
					lawanMusuh=lawanMusuh-1;
					eatMusuh.atas = false;
					eatMusuh.kiri = false;
				}
				//musikpac();
				break;
		}
	
		delay(120);	
		if(n<=0){
			break;
		}
		if(score>=975){
			skorA=score;
			break;
		}
//		dataScore(&skorA);

	};
	if(score>=975){
	cleardevice();
		*win=*win+1;
		readimagefile("wine.jpg",0,0,getPanjang(),getLebar());
		musikTTangan();
	}
	else {cleardevice();
	 readimagefile("lose.jpg",0,0,getPanjang(),getLebar());
	getch();
	musikoot();
	delay(6000);
	}
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

void tembok(){
	int c = pengali();
	readimagefile("arena.bmp",posisi(0)-c,posisi(0)-c,posisi(23-1)+c,posisi(17-1)+c);
}

/*void buat(int a, int b, int in){
	putimage(posisi(P.x),posisi(P.y),image,COPY_PUT);
}*/

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

void time(int *m, int *s,int *ms){
*ms=*ms-1;
	if(*ms<=0&&*s>0){
		*s=*s-1;
		*ms=7;
	} else if (*ms<=0&&*s<=0&&*m>=1){
		*s=59;
		*m=*m-1;
	} else if (*ms<=0&&*s<=0&&*m<=0){
		cleardevice();
		outtextxy(posisi(9),posisi(11),"TIMEOUT");
	}

	char arr[20];
	sprintf(arr,"%d : %d  ", *m,*s);
	outtextxy(posisi(25)+getUkur(),posisi(12),arr);
}

void musuhmikirdua(){
	if(((LogD.kiri == false)&&(!cekPeta(N.x+1,N.y,1)))&&(abs(M.x-N.x)!=5)) N.x = N.x + 1;
	else if(((LogD.kiri == true)&&(!cekPeta(N.x-1,N.y,1)))&&(abs(N.x-M.x)!=5)) N.x = N.x - 1;
	if(((LogD.atas == true)&&(!cekPeta(N.x,N.y-1,1)))&&(abs(N.y-M.y)!=5)) N.y = N.y - 1;
	else if(((LogD.atas == false)&&(!cekPeta(N.x,N.y+1,1)))&&(abs(N.y-M.y)!=5)) N.y = N.y + 1;
	
	if(N.y>15) N.y = 0;
	if(N.y<1) N.y = 16;
}

void data_score(){
	delay(10);
	cleardevice();
	outtextxy(posisi(8),posisi(8),"tidak ada data skor ");
	while(!ismouseclick(WM_LBUTTONDOWN)){
		Sleep(100);
	}
}

void about(){
	delay(10);
	cleardevice();
	outtextxy(posisi(8),posisi(3),"LEVEL 1 CREATED BY : ");
	outtextxy(posisi(8),posisi(5),"MUFID JAMALUDDIN");
	outtextxy(posisi(8),posisi(7),"REZA DWI KURNIAWAN ");
	outtextxy(posisi(8),posisi(9),"FAIZ ABDUSSALAM ");
	outtextxy(posisi(8),posisi(11),"GERRY AGUSTIAN ");
	outtextxy(posisi(8),posisi(13),"JEREMIA GERALDI");
	while(!ismouseclick(WM_LBUTTONDOWN)){
		Sleep(100);
	}
}

void click2start(bool &isKlik){
	int mouseX,mouseY;
	readimagefile("menu1.bmp",posisi(9),1,posisi(20),getLebar()-1);
	while(!ismouseclick(WM_LBUTTONDOWN)){
		Sleep(10);
	}
	getmouseclick(WM_LBUTTONDOWN,mouseX,mouseY);
	if(posisi(9)<mouseX && mouseX<posisi(20)){
		if(posisi(14)<mouseY && mouseY<posisi(17)) { closegraph(); penutupan(); exit(0);}
		else if(posisi(5)<mouseY && mouseY<posisi(7)) isKlik = true;
		else if(posisi(8)<mouseY && mouseY<posisi(11)) about();
		else if(posisi(12)<mouseY && mouseY<posisi(14)) data_score(); 
	} 
/*	printf("\nX : %f, Y : %f",(mouseX/pengali())/1.5,(mouseY/pengali())/1.5); */
}

void leftBoard(char *player){
	int c = pengali();
	readimagefile("pacmanlogo1.bmp",posisi(23)+c,posisi(1),posisi(29)+c,posisi(2));
	readimagefile("papan.bmp",posisi(23)+c,posisi(3),posisi(29)+c,posisi(14));
	settextstyle(6,0,2);

	outtextxy(posisi(25),posisi(4)+c,player);
}


