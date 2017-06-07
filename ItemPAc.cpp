/****************************/
/* 		FILE ItemPac.cpp	*/
/* 		Dibuat oleh :		*/
/* 		Gerry Agustian		*/
/* 		161511010			*/
/* 		Faiz Abdussalam 	*/
/* 		161511009			*/
/****************************/

#include <graphics.h>
#include "ItemPac.h"
#include "menuawal.h"
#include "sktime.h"

void *kanan, *hitam, *kanan2, *kiri1, *kiri2, *atas1, *atas2, *bawah1, *bawah2, *musuhna, *pacling, *pkanan, *pkiri1, *patas1, *pbawah1,*pkanan2, *pkiri2, *patas2, *pbawah2;
int sudut;

void alokgambar(int x, int y){
	int ukuran ,c=pengali()-2;
	pos P;
	P.x = x;
	P.y = y;
//pacman kanan 1
	readimagefile("pacman2 - Right.bmp", posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	ukuran = imagesize(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	kanan = malloc(ukuran);
	getimage(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y),kanan);
///pacman kanan 2
	readimagefile("pacman - Right.bmp", posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	ukuran = imagesize(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	kanan2 = malloc(ukuran);
	getimage(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y),kanan2);
//pacman kiri 1
	readimagefile("pacman2 - Left.bmp", posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	ukuran = imagesize(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	kiri1 = malloc(ukuran);
	getimage(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y),kiri1);
//pacman kiri 2
	readimagefile("pacman - Left.bmp", posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	ukuran = imagesize(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	kiri2 = malloc(ukuran);
	getimage(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y),kiri2);
//pacman atas 1
	readimagefile("pacman2 - Up.bmp", posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	ukuran = imagesize(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	atas1 = malloc(ukuran);
	getimage(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y),atas1);
//pacman atas 2
	readimagefile("pacman - Up.bmp", posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	ukuran = imagesize(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	atas2 = malloc(ukuran);
	getimage(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y),atas2);
//pacman bawah 1
	readimagefile("pacman2 - Down.bmp", posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	ukuran = imagesize(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	bawah1 = malloc(ukuran);
	getimage(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y),bawah1);
//pacman bawah 2
	readimagefile("pacman - Down.bmp", posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	ukuran = imagesize(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	bawah2 = malloc(ukuran);
	getimage(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y),bawah2);
//musuh
	readimagefile("musuh.bmp", posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	ukuran=imagesize(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	musuhna=malloc(ukuran);
	getimage(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y),musuhna);
//pacman POWER UP
	//powerUP kanan 1
	readimagefile("drunkedpacman.bmp", posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	ukuran = imagesize(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	pkanan = malloc(ukuran);
	getimage(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y),pkanan);
///powerUP kanan 2
	readimagefile("drunkedpacman1.bmp", posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	ukuran = imagesize(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	pkanan2 = malloc(ukuran);
	getimage(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y),pkanan2);
//powerUP kiri 1
	readimagefile("drunkedpacman - Kiri.bmp", posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	ukuran = imagesize(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	pkiri1 = malloc(ukuran);
	getimage(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y),pkiri1);
//powerUP kiri 2
	readimagefile("drunkedpacman1 - Kiri.bmp", posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	ukuran = imagesize(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	pkiri2 = malloc(ukuran);
	getimage(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y),pkiri2);
//powerUP atas 1
	readimagefile("drunkedpacman - Atas.bmp", posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	ukuran = imagesize(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	patas1 = malloc(ukuran);
	getimage(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y),patas1);
//powerUP atas 2
	readimagefile("drunkedpacman1 - Atas.bmp", posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	ukuran = imagesize(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	patas2 = malloc(ukuran);
	getimage(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y),patas2);
//powerUP bawah 1
	readimagefile("drunkedpacman - Bawah.bmp", posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	ukuran = imagesize(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	pbawah1 = malloc(ukuran);
	getimage(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y),pbawah1);
//powerUP bawah 2
	readimagefile("drunkedpacman1 - Bawah.bmp", posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	ukuran = imagesize(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	pbawah2 = malloc(ukuran);
	getimage(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y),pbawah2);
//hapus
	readimagefile("hitam.bmp", posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	ukuran = imagesize(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	hitam = malloc(ukuran);
	getimage(posisikiri(P.x)+getUkur(),posisikiri(P.y), posisikanan(P.x)+getUkur(), posisikanan(P.y),hitam);
}

void MulaiAlokGambar(int x, int y){
	alokgambar(x,y);
	sudut = 45;
}

void SetSudut(int x){
	sudut = x;
}

void musuh(pos M){
	int c;
	c = pengali()-2;

	putimage(posisi(M.x)-c,posisi(M.y)-c,musuhna,COPY_PUT);
}

void pacman(int in, pos *P){
	int c;
	c=pengali()-2;
	switch(in){
		case 77: //kanan
			if(sudut==45){
				sudut=15;
				if((*P).powerUp>0){
					pacling=pkanan2;
					(*P).powerUp--;
				}
				else {
				pacling=kanan2;}
			}
			else if(sudut==15){
				sudut=45;
				if((*P).powerUp>0){
					pacling=pkanan;
					(*P).powerUp--;
				}
				else {
				pacling=kanan;}
			}
			break;
		case 75://kiri
			if(sudut==45){
				sudut=15;
				if((*P).powerUp>0){
				pacling=pkiri2;
				(*P).powerUp--; }
				else { pacling=kiri2;	}
			}
			else if(sudut==15){
				sudut=45;
				if((*P).powerUp>0){
					pacling=pkiri1;
					(*P).powerUp--;
				}
				else {pacling=kiri1;}
			}
			break;
		case 80://bawah
			if(sudut==45){
				sudut=15;
				if((*P).powerUp>0){
					pacling=pbawah2;
					(*P).powerUp--;
				}
				else {
				pacling=bawah2;}
			}
			else if(sudut==15){
				sudut=45;
				if((*P).powerUp>0){
					pacling=pbawah1;
					(*P).powerUp--;
				}
				else{
					pacling=bawah1;
				}
			}
			break;
		case 72://atas
			if(sudut==45){
			sudut=15;
				if((*P).powerUp>0){
					pacling=patas2;
					(*P).powerUp--;
				}else {
				pacling=atas2;}
			}
			else if(sudut==15){
				sudut=45;
				if((*P).powerUp>0){
					pacling=patas1;
					(*P).powerUp--;
				}else{
					pacling=atas1;
				}
			}
		break;
	}
	putimage(posisi((*P).x)-c,posisi((*P).y)-c,pacling,COPY_PUT);	//pacling memuat gambar yg akan di print
	//if(powerUp(*P).powerUp==0)
}

void coin(int b, int a){
	int  kons;
	if(getUkur()!=9) kons=(getUkur()/2)-1;
	else kons=4;
	
	readimagefile("coin.bmp",b-kons,a-kons,b+kons,a+kons);
}

void moneybag(int b, int a){
	int  kons;
	if(getUkur()!=9) kons=(getUkur()/2)-1;
	else kons=4;
	readimagefile("money_bag.bmp",b-kons,a-kons,b+kons,a+kons);			
}

void beer(int b, int a){
	int  kons;
	if(getUkur()!=9) kons=(getUkur()/2)-1;
	else kons=4;
	readimagefile("beer.bmp",b-kons,a-kons,b+kons,a+kons);
}

void hapus(pos P){
	int c=pengali()-2;
	putimage(posisi(P.x)-c,posisi(P.y)-c,hitam,COPY_PUT);
}

void hapusran(){//hapus random item
	int c;
	c = pengali();

	putimage(posisi(11)-c,posisi(6)-c,hitam,COPY_PUT);
}

void tembok(short int level){
	int c = pengali();
	if(level==1) readimagefile("arena.bmp",posisi(0)-c,posisi(0)-c,posisi(23-1)+c,posisi(17-1)+c);
	else if(level==2) readimagefile("arena2.bmp",posisi(0)-c,posisi(0)-c,posisi(23-1)+c,posisi(17-1)+c);
	else if(level==3) readimagefile("arena3.bmp",posisi(0)-c,posisi(0)-c,posisi(23-1)+c,posisi(17-1)+c);
}


int MenuLVL(int LastLevel){
	int mouseX,mouseY;
	if(LastLevel == 1) readimagefile("menulvl.bmp",posisi(9),1,posisi(20),getLebar()-1);
	else if(LastLevel == 2) readimagefile("menulvl2.bmp",posisi(9),1,posisi(20),getLebar()-1);
	else if(LastLevel == 3) readimagefile("menulvl3.bmp",posisi(9),1,posisi(20),getLebar()-1);
	
	while(!ismouseclick(WM_LBUTTONDOWN)){
		Sleep(10);
	}
	getmouseclick(WM_LBUTTONDOWN,mouseX,mouseY);
	if(posisi(9)<mouseX && mouseX<posisi(25)){
		if(posisi(3)<mouseY && mouseY<posisi(5)) return 1;
		else if(posisi(6)<mouseY && mouseY<posisi(8)) return 2;
		else if(posisi(9)<mouseY && mouseY<posisi(11)) return 3;
		else return 0;
	}
}

/* REZA DWI KURNIAWAN */

void MenuUtama(bool &isKlik){
	int mouseX,mouseY;
	readimagefile("menu.bmp",posisi(9),1,posisi(20),getLebar()-1);

	while(!ismouseclick(WM_LBUTTONDOWN)){
		Sleep(10);
	}
	getmouseclick(WM_LBUTTONDOWN,mouseX,mouseY);
	if(posisi(9)<mouseX && mouseX<posisi(20)){
		if(posisi(14)<mouseY && mouseY<posisi(16)) { 
			closegraph(); 
			penutupan(); 
			exit(0);
			}
		else if(posisi(3)<mouseY && mouseY<posisi(5)) isKlik = true;
		else if(posisi(5)<mouseY && mouseY<posisi(8)) outtextxy(posisi(9),posisi(20),"CARA MAIN");
		else if(posisi(8)<mouseY && mouseY<posisi(11)) about();
		else if(posisi(11)<mouseY && mouseY<posisi(14)){
			bacaSkor();
			TungguKlik(); 
		} 
//	printf("\nX : %f, Y : %f",(mouseX/pengali())/1.5,(mouseY/pengali())/1.5); 
	}
}

void TungguKlik(){
	while(!ismouseclick(WM_LBUTTONDOWN)){
		Sleep(100);
	}
}

void garisNyawa(short int nyawa){
	int on = pengali()/2;
	int c = pengali();
	switch(nyawa){
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

void TampilSkor(short int Skor){
	char array[12];
	sprintf(array,"%d", Skor);
	outtextxy(posisi(26),posisi(7),array);
}

void MenangKalah(bool menang){
	cleardevice();
	if(menang) readimagefile("wine.jpg",0,0,getPanjang(),getLebar());
	else readimagefile("lose.jpg",0,0,getPanjang(),getLebar());
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
	TungguKlik();
}
