/****************************/
/* 		FILE ItemPac.cpp	*/
/* 		Dibuat oleh :		*/
/* 		Gerry Agustian		*/
/* 		161511010			*/
/* 		Faiz Abdussalam 	*/
/* 		161511009			*/
/****************************/

#include "ItemPac.h"

void *image, *hitam, *kanan2, *kiri1, *kiri2, *atas1, *atas2, *bawah1, *bawah2, *musuhna;
int sudut;

void alokgambar(int x, int y){
	int ukuran ,c=pengali()-2;
	pos P;
	P.x = x;
	P.y = y;
//pacman kanan 1
	readimagefile("pacman2 - Right.bmp", posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	ukuran = imagesize(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	image = malloc(ukuran);
	getimage(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y),image);
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
//hapus
	readimagefile("hitam.bmp", posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	ukuran = imagesize(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	hitam = malloc(ukuran);
	getimage(posisikiri(P.x)+getUkur(),posisikiri(P.y), posisikanan(P.x)+getUkur(), posisikanan(P.y),hitam);
//musuh
	readimagefile("musuh.bmp", posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	ukuran=imagesize(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y));
	musuhna=malloc(ukuran);
	getimage(posisikiri(P.x),posisikiri(P.y), posisikanan(P.x), posisikanan(P.y),musuhna);
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

void pacman(int in, pos P){
	int c;
	c=pengali()-2;
	
	if(in==77){//kanan
		if(sudut==45){
			sudut=15;
			putimage(posisi(P.x)-c,posisi(P.y)-c,kanan2,COPY_PUT);		}
		else if(sudut==15){
			sudut=45;
			putimage(posisi(P.x)-c,posisi(P.y)-c,image,COPY_PUT);
			}
	} 
	else if(in==75){//kiri
		if(sudut==45){
			sudut=15;
			putimage(posisi(P.x)-c,posisi(P.y)-c,kiri2,OR_PUT);
		}
		else if(sudut==15){
			sudut=45;
			putimage(posisi(P.x)-c,posisi(P.y)-c,kiri1,COPY_PUT);
		}
	} 
	else if(in==80){//bawah
		if(sudut==45){
			sudut=15;
			putimage(posisi(P.x)-c,posisi(P.y)-c,bawah2,COPY_PUT);
			}
			else if(sudut==15){
			sudut=45;
			putimage(posisi(P.x)-c,posisi(P.y)-c,bawah1,COPY_PUT);
			}
	} 
	else if(in==72){//atas
		if(sudut==15){
			sudut=45;
			putimage(posisi(P.x)-c,posisi(P.y)-c,atas2,COPY_PUT);
			}
			else if(sudut==45){
			sudut=15;
			putimage(posisi(P.x)-c,posisi(P.y)-c,atas1,COPY_PUT);
			}
	} 
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
