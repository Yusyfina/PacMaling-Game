#include <stdio.h>
#include <graphics.h>
//#include <iostream>
#include <conio.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
//#define panjang 1366
//#define lebar 700
//#define tunggu 190
typedef struct pos{
	int x;
	int y;
};

typedef struct logika{
	bool kiri;
	bool atas;
};

int panjang, lebar,ukur=14;
int sudut =45;
void time(int *m, int *s,int *ms);
int random=0;
void buat(int a, int b, int in);
void pacman(int in); //untuk membuat bentuk pacman
void input();
void tembok();
bool cekNyawa(pos G, pos H, pos I);
logika makanMus();
void proNyawa(int n);
//void langkah();
//void otakmusuh(bool jalan);
//void musuh();
//void musuhmikir();
//void musuhmikirdua();
//void boolmusuh();
void laWani(logika O);
//void musuhoon();
//void langkahmusuh();
int pengali();
void pilih(int in);
void hapus();
void hapusran();
void hapusmus();
int posisikiri(int x);
int posisikanan(int x);
int posisi(int x);
void coin(int b, int a);
void moneybag(int b, int a);
void beer(int b, int a);
void randomitem();
//bool kiri, atas;
void alokgambar();
pos P,M,N;
logika Log;

//int x, y,ax,bx,yki,aki;

/*bool arena[17][23]{
	{1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1},
	{1,0,1,1,1,1,0,1,0,1,1,0,1,1,0,1,0,1,1,1,1,0,1},
	{1,0,1,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,1,0,1},
	{1,0,0,0,1,1,1,0,1,1,0,1,0,1,1,0,1,1,1,0,0,0,1},
	{1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1},
	{1,0,1,1,1,1,0,1,1,1,0,0,0,1,1,1,0,1,1,1,1,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,1,0,1,1,0,1,1,0,0,0,0,0,1,1,0,1,1,0,1,0,1},
	{1,0,1,0,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,0,1,0,1},
	{1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1},
	{1,0,0,0,1,1,1,0,1,0,0,0,0,0,1,0,1,1,1,0,0,0,1},
	{1,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1},
	{1,0,1,0,0,0,1,0,1,1,1,0,1,1,1,0,1,0,0,0,1,0,1},
	{1,0,1,1,1,0,1,0,0,0,0,0,0,0,0,0,1,0,1,1,1,0,1},
	{1,0,0,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1}
};*/

int item[17][23]{
{1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1},
{1,2,0,0,0,0,3,1,0,0,0,0,0,0,0,1,3,0,0,0,0,2,1},
{1,0,1,1,1,1,0,1,0,1,1,0,1,1,0,1,0,1,1,1,1,0,1},
{1,0,1,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,1,0,1},
{1,0,0,0,1,1,1,0,1,1,0,1,0,1,1,0,1,1,1,0,0,0,1},
{1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1},
{1,0,1,1,1,1,0,1,1,1,9,4,9,1,1,1,0,1,1,1,1,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,1,9,1,1,0,1,1,9,9,9,9,9,1,1,0,1,1,9,1,0,1},
{1,0,1,3,0,1,0,1,9,9,9,1,9,9,9,1,0,1,0,3,1,0,1},
{1,0,1,0,0,0,0,0,9,9,9,9,9,9,9,0,0,0,0,0,1,0,1},
{1,0,0,0,1,1,1,0,1,9,9,9,9,9,1,0,1,1,1,0,0,0,1},
{1,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1},
{1,0,1,0,9,0,1,9,1,1,1,0,1,1,1,9,1,0,9,0,1,0,1},
{1,0,1,1,1,0,1,0,0,0,0,0,0,0,0,0,1,0,1,1,1,0,1},
{1,2,0,0,0,0,1,0,3,1,0,0,0,1,3,0,1,0,0,0,0,2,1},
{1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1}
};
void *image, *hitam, *kanan2, *kiri1, *kiri2, *atas1, *atas2, *bawah1, *bawah2, *musuh1, *musuh2;
//using namespace std;

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
//	int gd=DETECT,gm;
//	initgraph(&gd,&gm,"C:\\TC\\BGI");
	int uk;
	printf("\nPilih ukuran layar :\n1. Besar (1366 x 700) Recomended\n2. Sedang (800 x 600)\n3. Kecil (600 x 480)\nPilih (1/2/3) : ");
	scanf("%d",&uk);
	switch(uk){
		case 2:
			panjang = 1024;
			lebar = 600;
			ukur=12;
			break;
		case 3:
			panjang = 854;
			lebar = 480;
			ukur = 9;
			break;
		default:
			panjang = 1366;
			lebar = 700;
			ukur=14; 
			break;	
	};
	initwindow(panjang,lebar,"PACMAN");
	
//	settextstyle(TRIPLEX_FONT, HORIZ_DIR, 1);
  //  outtextxy(60, 60, "Text with different fonts");
	/*P.x=11;P.y=15;
	pieslice(posisi(P.x),posisi(P.y), 45,-45,pengali()-4); //pacman yang awal
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(posisi(P.x)-1,posisi(P.y),WHITE);*/
//	setactivepage(1);
	P.x=11; P.y=14;
	
	alokgambar();
	tembok();
//getch();
	input();
	tembok();
//	time();
	getchar();

	closegraph();
	return 0;
}
	/*if(dx == ax) jalan = false;
		else if(dy == bx) jalan = true;
		if(jalan == false){
			oh = oh +1;
		}
		if(oh>6){
			oh = 0;
			jalan = true;
		} */	/*dx = ax;
		dy = bx;
		ox = dx;
		oy = dy;*/
		
		/*if((dx == x)and(dy == y)){
		jalan = false;
		}
		if((arena[y+1][x]==0)or(arena[y-1][x]==0)) jalan = false;
		if((arena[y][x+1]==0)or(arena[y][x-1]==0)) jalan = false;
		if(((arena[y+1][x+1]==0)and(arena[y-1][x-1]==0))and((arena[y-1][x+1]==0)and(arena[y+1][x-1]==0))) jalan = true;*/
void proNyawa(int n){
	int on = pengali()/2;
	switch(n){
			case 2: 
				readimagefile("hitam.bmp",posisi(24),posisi(5)+on,posisi(28),posisi(6)-on);
		//		putimage(posisi(24),posisi(5)+on,hitam,COPY_PUT);
				readimagefile("blood.bmp",posisi(24),posisi(5)+on,posisi(24),posisi(6)-on);
				break;
			case 4:
				readimagefile("hitam.bmp",posisi(24),posisi(5)+on,posisi(28),posisi(6)-on);
				readimagefile("blood.bmp",posisi(24),posisi(5)+on,posisi(25),posisi(6)-on);
				break;
			case 6:
				readimagefile("hitam.bmp",posisi(24),posisi(5)+on,posisi(28),posisi(6)-on);
				readimagefile("blood.bmp",posisi(24),posisi(5)+on,posisi(26),posisi(6)-on);
				break;
			case 8:
				readimagefile("hitam.bmp",posisi(24),posisi(5)+on,posisi(28),posisi(6)-on);
				readimagefile("blood.bmp",posisi(24),posisi(5)+on,posisi(27),posisi(6)-on);		
				break;
			case 10:
				readimagefile("hitam.bmp",posisi(24),posisi(5)+on,posisi(28),posisi(5)-on);
				readimagefile("blood.bmp",posisi(24),posisi(5)+on,posisi(28),posisi(5)-on);
				break;			 
		};
}

logika makanMus(){
	logika O;
	if(P.x == M.x && P.y == M.y) O.atas = true;
	if(P.x == N.x && P.y == N.y) O.kiri = true;
	return (O);
}

void input(){
	int in, oh, n=1000, score=0,m=3,s=59,ms=7, lawanMusuh=0;
	logika eatMusuh;
	bool skol;
	M.x=9;M.y=8;N.x=11;N.y=11;
//	setactivepage(0);
	tembok();
	while(1){
		if(kbhit()){
			in=getch();
		}
		time(&m,&s,&ms);
		skol=false;
		if(item[P.y][P.x]==0){
			item[P.y][P.x]=9;
			score=score+5;			//nilai koin=5, money bag = 10, 10, 10;
		}
		else if (item[P.y][P.x]==2||item[P.y][P.x]==3){
			item[P.y][P.x]=9;
			score=score+10;
		}
		//PlaySound("pac.wav",NULL,SND_LOOP );
		if(item[P.y][P.x]==3) lawanMusuh=lawanMusuh+2;
		
		hapus();
		oh++;

		//hapusmus();
		pilih(in);

		randomitem();
		pacman(in);
	
		/*if(oh<12) boolmusuh();
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
		musuh();
		
		eatMusuh = makanMus();
		*/
		char array[12];
		sprintf(array,"%d", score);
		outtextxy(posisi(25),posisi(3)+8,array);

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
				break;
		}
	
		delay(120);	
		if(n<=0){
			break;
		}
		if(score>=975){
			break;
		}
	};
	if(score>=975){
		cleardevice();
		//outtextxy(posisi(7),posisi(11),"YOU WIN MOTHAFUCKER !!!!!!!!!!!!!!!!!!!!!");	
		readimagefile("win.jpg",0,0,panjang,lebar);
		delay(1000);
	}
	else {cleardevice();
	 outtextxy(posisi(7),posisi(11),"GAME OVER");}
/*	outtextxy(posisi(11),posisi(11),"YOUR SCORE");
	char array[12];
	sprintf(array,"Score : %d", score);
	outtextxy(posisi(13),posisi(11),array);*/
	getch();
	closegraph();
	main();
}

void hapus(){
int c=pengali()-2;
//	if(item[x][y]==1){
//	}
//	pieslice(posisi(P.x),posisi(P.y),0,0,pengali()-5); //hapus pacman
//	setfillstyle(SOLID_FILL,BLACK);
//	floodfill(posisi(P.x),posisi(P.y),BLACK);
//	item[x][y] = 1;
putimage(posisi(P.x)-c,posisi(P.y)-c,hitam,COPY_PUT);
}

/*void hapusmus(){//hapus musuh
	int on,a,b,c;
/*	setcolor(BLACK);
	//pieslice(posisi(ax),posisi(bx),0,0,on); 
	pieslice(posisi(M.x),posisi(M.y),0,0,on);
	setfillstyle(SOLID_FILL,BLACK);
	floodfill(posisi(M.x),posisi(M.y),BLACK); */
	
/*	a=posisi(M.y);
	b=posisi(M.x);
	c=pengali()-5;
	
//	readimagefile("hitam.bmp",b-c,a-c,b+c,a+c);
	putimage(posisi(M.x)-c,posisi(M.y)-c,hitam,COPY_PUT);
	if(item[M.y][M.x] == 0){
		coin(b,a);
	}
	else if(item[M.y][M.x] == 2){
		moneybag(b,a);
	}
	else if(item[M.y][M.x] == 3){
		beer(b,a);
	}
*/	
/*	circle(posisi(M.x),posisi(M.y),on);
	setfillstyle(SOLID_FILL,BLACK);
	floodfill(posisi(M.x),posisi(M.y),BLACK); */
	
/*	a=posisi(N.y);
	b=posisi(N.x);
	c=pengali()-5;
	
	putimage(posisi(N.x)-c,posisi(N.y)-c,hitam,COPY_PUT);
	
	if(item[N.y][N.x] == 0){
		coin(b,a);
	}
	else if(item[N.y][N.x] == 2){
		moneybag(b,a);
	}
	else if(item[N.y][N.x] == 3){
		beer(b,a);
	}
}*/

void hapusran(){//hapus random item
	int c;
	c = pengali();

	putimage(posisi(11)-c,posisi(6)-c,hitam,COPY_PUT);
}

void tembok(){
/*	int a,b,c, jmlItem=0;//d;
	c=pengali();

	for(int i=0;i<23;i++){
		for(int j=0;j<17;j++){
			a=posisi(j);
			b=posisi(i);
	//		d=posisi(22-i);
			if(arena[j][i] == 1){
			//	setfillstyle(INTERLEAVE_FILL,BLUE);
				readimagefile("a.bmp",b-c,a-c,b+c,a+c);
			//	setfillstyle(INTERLEAVE_FILL,BLUE);
			//	rectangle(d-c,a-c,d+c,a+c);
			}
			else if(item[j][i] == 0){
				coin(b,a);
		//		jmlItem=jmlItem+1;
			}
			else if(item[j][i] == 2){
				moneybag(b,a);
			}
			else if(item[j][i] == 3){
				rectangle(b-c+7,a-c+7,b+c-7,a+c-7);
			}
			else if(item[j][i] == 4){
				randomitem(a,b);
			}
		}	*/
		int c = pengali();
		readimagefile("arena.bmp",posisi(0)-c,posisi(0)-c,posisi(23-1)+c,posisi(17-1)+c);
//	printf("%d", jmlItem);
	//item[y][x]=1;
	rectangle(posisi(23)+c,posisi(1)+c,posisi(29)-c,posisi(9)-c);		//kotak keseluruhan
	rectangle(posisi(24),posisi(3),posisi(28),posisi(4));		//kolom pertama
	rectangle(posisi(24),posisi(5),posisi(28),posisi(6));	//kolom kedua
	rectangle(posisi(24),posisi(7),posisi(28),posisi(8));	//kolom ketiga
//	rectangle(1220,40,1320,100);	//kolom ke empat
	outtextxy(posisi(25),posisi(2),"SCORE");
	outtextxy(posisi(25),posisi(4),"LIFE");
	settextstyle(3,0,1);
	outtextxy(posisi(25),posisi(6),"TIME");
//	outtextxy(1228,50,"HIGH SCORE");
}

void pilih(int in){ //buat pacman tidak menembus tembok
/*	
	int xc,yc;
	if(pil == true){
		xc = x;
		yc = y;	}
	else if(pil == false){
		xc = ax;
		yc = bx;	}
*/	
	switch(in){
		case 77: //kanan
			if(item[P.y][P.x+1]!=1) P.x=P.x+1; //pemeriksaan tembok...kalo array di samping pacman tidak sama dengan satu, maka pacman bisa terus jalan
//			else jalan = false;
			break;
		case 75: //kiri
			if(item[P.y][P.x-1]!=1) P.x=P.x-1;
//			else jalan = false;
			break;
		case 80: //bawah
			if(item[P.y+1][P.x]!=1) P.y=P.y+1;
//			else jalan = false;
			break;
		case 72: //atas
			if(item[P.y-1][P.x]!=1) P.y=P.y-1;
//			else jalan = false;
			break;
	};
	
	if(P.y<0) P.y=16;
	if(P.y>16) P.y=0;
/*	
	if(pil == true){
		x = xc;
		y = yc;
	}
	else if(pil == false){
		ax = x;
		bx = y;
	}	*/
}

void pacman(int in){
	int c;
	c=pengali()-2;
//	c=(c*9)/10;
//	setcolor(RED);
//	setfillstyle(SOLID_FILL,YELLOW);
	
	if(in==77){//kanan
		if(sudut==45){
			sudut=15;
			putimage(posisi(P.x)-c,posisi(P.y)-c,kanan2,COPY_PUT);		}
		else if(sudut==15){
			sudut=45;
			putimage(posisi(P.x)-c,posisi(P.y)-c,image,COPY_PUT);
			}
	} 
	else if(in==75){
		if(sudut==45){
			sudut=15;
			putimage(posisi(P.x)-c,posisi(P.y)-c,kiri2,OR_PUT);
		}
		else if(sudut==15){
			sudut=45;
			putimage(posisi(P.x)-c,posisi(P.y)-c,kiri1,COPY_PUT);
		}
	} 
	else if(in==80){
		if(sudut==45){
			sudut=15;
			putimage(posisi(P.x)-c,posisi(P.y)-c,bawah2,COPY_PUT);
			}
			else if(sudut==15){
			sudut=45;
			putimage(posisi(P.x)-c,posisi(P.y)-c,bawah1,COPY_PUT);
			}
	} 
	else if(in==72){
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

int pengali(){
	int b, maxx, maxy;
	//maxx = getmaxx();
	//maxy = getmaxy();
	
	maxx = panjang/25;
	maxy = lebar/19;
	
	if(maxx < maxy) b = maxx/2;
	else b = maxy/2;
	return b;
}

int posisi(int x){
	int b; 
	b = pengali()*2;
	b = b*(1.5+x);
	return(b);
}

int posisikiri(int x){
	return (posisi(P.x)-ukur);
}
int posisikanan(int x){
	return (posisi(P.x)+ukur);
}

void buat(int a, int b, int in){
	//pieslice(posisi(x),posisi(y),sudut+a,-sudut+a,b);
	/*if(in==77||in==75){
		circle(posisi(x),posisi(y)-7,3);
		setfillstyle(SOLID_FILL,RED);
		floodfill(posisi(x),posisi(y)-7,WHITE);
	}
	else if (in==80||in==72){
		circle(posisi(x)-7,posisi(y),3);
		setfillstyle(SOLID_FILL,RED);
		floodfill(posisi(x)-7,posisi(y),WHITE);	
	}*/
	putimage(posisi(P.x),posisi(P.y),image,COPY_PUT);
}

void coin(int b, int a){
	/*setfillstyle(SOLID_FILL,GREEN);
				circle(b,a,4);
				floodfill(b,a,WHITE);*/
	
	readimagefile("coin.bmp",b-6,a-6,b+6,a+6);
}

void moneybag(int b, int a){
	/*setfillstyle(SOLID_FILL,RED);
				circle(b,a,6);
				floodfill(b,a,WHITE);*/
	readimagefile("money_bag.bmp",b-8,a-8,b+8,a+8);			
}

void beer(int b, int a){
	readimagefile("beer.bmp",b-8,a-8,b+8,a+8);
}

void randomitem(){
	switch(random){
		case 7:
			item[6][11]=0;
			coin(posisi(11),posisi(6));
			break;
		case 16:
			item[6][11]=1;
			hapusran();
			break;
		case 19:
			item[6][11]=3;
			beer(posisi(11),posisi(6));
			break;
		case 23:
			item[6][11]=1;
			hapusran();
			break;
		case 27:
			item[6][11]=2;
			moneybag(posisi(11),posisi(6));
			break;
		case 31:
			item[6][11]=1;
			hapusran();
			break;
		case 32:
			item[6][11]=3;
			beer(posisi(11),posisi(6));
			break;
		case 35:
			item[6][11]=1;
			hapusran();
			random = 0;
			break;
	}
	random = random + 1;
}
/*
void musuh(int x,int y,int *a,int *b,int *skor){
	if(*a>x) *a=*a-12;
	else if(*a<x) *a=*a+12;
	if(*b>y) *b=*b-12;
	else if(*b<y) *b=*b+12;
	
//	rectangle(*a-12,*b-12,*a+12,*a+12);
	circle(*a,*b,12);
	
//	if((((*a-12)<x)||(x<(*a+12)))and(((*b-12)<y)||(y<(*b+12)))) *skor=*skor-2;
	if ((*a==x)&&(*b==y)) *skor=*skor-10;
	else *skor=*skor+1;
}
*/
/*void langkahmusuh(bool *oh){
	if(kiri == true) ax = ax - 1;
	else if(kiri == false) ax = ax + 1;
	if(kanan == true) 
	
}


void langkah(){
	if(arena[bx][ax+1]!=1) ax = ax + 1;
	else if((bx<ax)&&(arena[bx-1][ax]!=1)) bx = bx - 1;
	else if(arena[bx+1][ax]!=1) bx = bx + 1;
	else if(arena[bx][ax-1]!=1) ax = ax - 1;
}
*/
/*	else{
		if(arena[bx][ax+1]!=1) ax = ax+1;
		else{
			wow=false;
			ax=ax-1;
		} 
		if((arena[bx+1][ax]!=1)&&(wow==true)) bx = bx+1;
		else if(wow==true) bx=bx-1;
		if(bx<0) y=16;
		if(bx>16) y=0;	
	};*/
/*void boolmusuh(){
	if(P.x<=M.x) Log.kiri = true;
	else Log.kiri = false;	
	
	if(P.y<=M.y) Log.atas = true;
	else Log.atas = false;
}*/
/*	bool wow = false;
	if((dx != ax)&&(ubah == true)){	}
	else{
		if(x>ax) kiri = true;
		else kiri = false;
	}
	if((bx != y)&&(ubah == true)){	}
	else{
		if(y<bx) atas = true;
		else atas = false;
	}*/	
/*void musuhmikir(){

	if((Log.kiri == true)&&(item[M.y][M.x-1]!=1)) M.x = M.x - 1;
	else if((Log.kiri == false)&&(item[M.y][M.x+1]!=1)) M.x = M.x + 1;
	if((Log.atas == false)&&(item[M.y+1][M.x]!=1)) M.y = M.y + 1;
	else if((Log.atas == true)&&(item[M.y-1][M.x]!=1)) M.y = M.y - 1;
	
	if(M.y>15) M.y = 0;
	if(M.y<1) M.y = 16;
}*/
/*void otakmusuh(){
	int cx, cy, dx, dy,temp;
	cx = x;
	cy = y;
	dx = ax;
	dy = bx;
	if(cx > dx){
		temp = cx;
		cx = cy;
		cy = temp;

		temp = cy;
		cy = dy;
		dy = temp;
	}
	while(cx<dx){	}
*/
/*void musuh(){
	int c;
	c = pengali()-5;
	
/*	pieslice(posisi(M.x),posisi(M.y),0,0,on);
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(posisi(M.x),posisi(M.y),WHITE);
	
	pieslice(posisi(N.x),posisi(N.y),0,0,on);
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(posisi(M.x),posisi(M.y),WHITE); */
/*	putimage(posisi(M.x)-c,posisi(M.y)-c,musuh1,COPY_PUT);
	putimage(posisi(N.x)-c,posisi(N.y)-c,musuh2,COPY_PUT);
}*/

void time(int *m, int *s,int *ms){
*ms=*ms-1;
//	*s=*s+1;
	if(*ms<=0&&*s>0){
		*s=*s-1;
		*ms=7;
	} else if (*ms<=0&&*s<=0&&*m>=1){
		*s=59;
		*m=*m-1;
	} else if (*ms<=0&&*s<=0&&*m<=0){
		cleardevice();
		outtextxy(500,500,"TIMEOUT");
	}

	char arr[20];
	sprintf(arr,"%d : %d  ", *m,*s);
	outtextxy(posisi(25),posisi(7),arr);
//	delay(1000);

}

/*void musuhmikirdua(){
		
	if(((Log.kiri == true)&&(item[N.y][N.x-1]!=1))&&(abs(N.x-M.x)!=5)) N.x = N.x - 1;
	else if(((Log.kiri == false)&&(item[N.y][N.x+1]!=1))&&(abs(M.x-N.x)!=5)) N.x = N.x + 1;
	if(((Log.atas == false)&&(item[N.y+1][N.x]!=1))&&(abs(N.y-M.y)!=5)) N.y = N.y + 1;
	else if(((Log.atas == true)&&(item[N.y-1][N.x]!=1))&&(abs(N.y-M.y)!=5)) N.y = N.y - 1;

	if(N.y>15) N.y = 0;
	if(N.y<1) N.y = 16;
}*/

void alokgambar(){
	int ukuran ,c=pengali()-2;
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
	getimage(posisikiri(P.x)+ukur,posisikiri(P.y), posisikanan(P.x)+ukur, posisikanan(P.y),hitam);
//musuh
	readimagefile("musuh.bmp", posisikiri(M.x),posisikiri(M.y), posisikanan(M.x), posisikanan(M.y));
	ukuran=imagesize(posisikiri(M.x),posisikiri(M.y), posisikanan(M.x), posisikanan(M.y));
	musuh1=malloc(ukuran);
	getimage(posisikiri(M.x),posisikiri(M.y), posisikanan(M.x), posisikanan(M.y),musuh1);
//musuh2
	readimagefile("musuh.bmp", posisikiri(N.x),posisikiri(N.y), posisikanan(N.x), posisikanan(N.y));
	ukuran=imagesize(posisikiri(N.x),posisikiri(N.y), posisikanan(N.x), posisikanan(N.y));
	musuh2=malloc(ukuran);
	getimage(posisikiri(N.x),posisikiri(N.y), posisikanan(N.x), posisikanan(N.y),musuh2);	
}
