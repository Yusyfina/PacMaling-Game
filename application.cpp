#include <conio.h>
#include <graphics.h>
#include "LayarPac.h"
#include "PetaPac.h"
#include "ItemPac.h"
#include "musik.h"
#include "menuawal.h"
#include "LevelUp.h"
#include "posPemain.h"
#include "sktime.h"

int totItem=0;//jumlah total item yang tersisa, tiap level berbeda

void arenaMain(int *curLevel){
	int in, oh, skorA;
	initWaktu();

	while(1){
		if(kbhit()){
			in=getch();
		}
		if(in==27) break; 
		
		hapusmus();
		majuPacman(in);
	//	randomitem();
	
		if(oh<12) boolmusuh();
	
		if(oh>23) oh = 0;
		
		musuhmikir();
		if(oh%2==0) musuhmikirdua();
		
		cetakMusuh();
		
		makanMusuh(totItem);
		
		TampilSkor(getSkor());

		garisNyawa(getNyawa());
	
		delay(120);	
		
		if(totItem<1||getNyawa()<1){
			break;
		}

	};
	if(totItem<1){
		*curLevel = *curLevel + 1;
		MenangKalah(true);
		musikTTangan();
		tulisSkor();
	}
	else {
	 	MenangKalah(false);
		musikoot();
		getch();
	}
}


int main()	
{   
	SetConsoleTitle("PAC-MALING");
	pembukaan();
	
	int uk, curLevel=1, lastLevel=1;
	bool isKlik, tbhLevel;

	KotakMenuA();
	printf("\n\t\t\tPilih ukuran layar :\n\t\t\t1. Besar (1280 x 700) Recomended\n\t\t\t2. Sedang (800 x 600)\n\t\t\t3. Kecil (600 x 480)\n\t\t\t\tPilih (1/2/3) : ");
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

	KotakMenuA();
	inputNama();
	initwindow(getPanjang(),getLebar(),"PAC-MALING");
	MulaiAlokGambar(1,1);
	
	while(1){
		tbhLevel = true;
		cleardevice();
		setPacman(11,14);
		isKlik = false; 
		do{	MenuUtama(isKlik); } while(!isKlik);
		musikklik();
		delay(10);

		curLevel = MenuLVL(lastLevel);
		cleardevice();
		if(curLevel != lastLevel) tbhLevel = false;
		
		if(curLevel <= lastLevel){
			if(curLevel==1 && lastLevel !=3 && lastLevel !=2){
				tembok(1);
				setMusuh(1,11,10);
				setMusuh(2,12,10);
				totItem=185;
				outtextxy(posisi(8),posisi(10),"LEVEL 1, Press any button ...!");
				cetakMusuh();
				cetakPacman();
				getch();
				hapus(getPacman());
				hapusmus();
				tembok(1);
			}
			else if(curLevel==2){
				outtextxy(posisi(8),posisi(10),"Loading LEVEL 2...");
				levelup2();
				setMusuh(1,9,3);
				setMusuh(2,13,5);
				totItem=183;
				cetakMusuh();
				cetakPacman();
				outtextxy(posisi(8),posisi(10),"LEVEL 2, Press any button ...!");
				getch();
				hapusmus();
				hapus(getPacman()); 		
				tembok(2);
		
			}
			else if(curLevel==3){
				outtextxy(posisi(8),posisi(10),"Loading LEVEL 3...");
				levelup3();
				setMusuh(1,11,4);setMusuh(2,11,2);
				totItem=183;
				cetakMusuh();
				cetakPacman();
				outtextxy(posisi(8),posisi(10),"LEVEL 3, Press any button ...!");
				getch();
				hapusmus();
				hapus(getPacman());
				tembok(3);
			}
			else if(curLevel==4){
				cleardevice();
				outtextxy(posisi(10),posisi(10),"CONGRATSS!");
				TungguKlik();
				curLevel=3;
				tbhLevel = true;
				break;
			}
			if(curLevel != 0){
				leftBoard();
				arenaMain(&curLevel);
			}	
		}
		else{
			outtextxy(posisi(10),posisi(10),"LEVEL MASIH DIKUNCI!!!");
			TungguKlik();
		} 
		
		if(tbhLevel) lastLevel = curLevel;
	};
		
	getchar();
	closegraph();
	penutupan();
	return 0;
}
