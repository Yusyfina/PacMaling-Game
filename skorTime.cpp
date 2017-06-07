#include <graphics.h>
#include <conio.h>
#include <string.h>
#include "sktime.h"
#include "LayarPac.h"
#include "PetaPac.h"

char player[12];
int m,s,ms,score;

int getSkor(){
	return score;
}

void tambahSkor(int poin){
	score = score + poin;
}

void leftBoard(){
	int c = pengali();
	readimagefile("pacmanlogo1.bmp",posisi(23)+c,posisi(1),posisi(29)+c,posisi(2));
	readimagefile("papan.bmp",posisi(23)+c,posisi(3),posisi(29)+c,posisi(14));
	settextstyle(6,0,2);
	
	outtextxy(posisi(25),posisi(4)+c,player);
}

void inputNama(){
	printf("\n\n\t\t\t\t\tSELAMAT BERMAIN, JANGAN BERLEBIHAN\n\n\t\t\t\t\tMasukkan Nama Pemain : ");
	scanf("%s", &player);
	score=0;
}

void initWaktu(){
	m=0;s=59;ms=10;
}

int WaktuMain(){
	ms=ms-1;
	if(ms<=0&&s>0){
		s=s-1;
		ms=7;
	} else if (ms<=0&&s<=0&&m>=1){
		s=59;
		m=m-1;
	} else if (ms<=0&&s<=0&&m<=0){
		return 2;
	}

	char arr[20];
	sprintf(arr,"%d : %d  ", m,s);
	outtextxy(posisi(25)+getUkur(),posisi(12),arr);
	return 10;
}


void tulisSkor(){

/*	typedef struct{
		int skor;
		char nama[20];
	} dataSkor;
	dataSkor dskor;
*/	
	FILE *out=fopen("skortertinggi.txt","a");

	fprintf(out,"%s#%d\n",player, score);
	fclose(out);
}


void bacaSkor(){
	int i=1;
	char player[10];
	int score;
	outtextxy(posisi(7),posisi(7),"NAMA PLAYER");
	outtextxy(posisi(13),posisi(7),"SKOR");
	
	FILE *in=fopen("skortertinggi.txt","r");
    	
	    while(!feof(in)){
           fscanf(in,"%[^#]#\t%d\n", &player, &score);
           /* 	%[^#] artinya kita menyimpan bagian dari string dalam file sampai tanda #. 
            	Kita tidak menggunnakan %s karena nama mengandung spasi */
           outtextxy(posisi(7),posisi(8+i),player);
        	char array[5];
        	sprintf(array,"%d",score);
		   outtextxy(posisi(13),posisi(8+i),array);
           i++;
        }
	fclose(in);
}

void urutSkor(){
	
	typedef struct{
		char pemain[20];
		int skor;
	}dataSkor;
		
	int i=0;
	dataSkor dskor[10],dtemp;	
	FILE *in=fopen("skortertinggi.txt","r");
	while(!feof(in)){
		strcpy(player,dskor[i].pemain);
		dskor[i].skor=score;
		i++;
	} 
	for(int j=0;j<10;j++){
		if (dskor[j+1].skor>dskor[j].skor){
			dtemp=dskor[j];
			dskor[j]=dskor[j+1];
			dskor[j+1]=dtemp;
		}
	}
	fclose(in);
	FILE *out=fopen("skortertinggi.txt","w");
	for (int x=0;x<10;x++){
	fprintf(out,"%s#%d\n",dskor[x].pemain,dskor[x].skor);
	}
	fclose(out);
}

