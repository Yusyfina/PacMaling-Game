#include "LevelUp.h"
#include "PetaPac.h"
#include "ADTPac.h"
#include "LayarPac.h"
#include "ItemPac.h"

void levelup2(){
	int a,b,i,j,x;
	pos Q;
	int c = pengali();
	
	//pertama-tama isi array di 0-kan dulu
	for(i=1;i<22;i++){
		for(j=1;j<16;j++){
			Q.x = i;
			Q.y = j;
			setPeta(Q,0);
		}
	}

//mengubah isi array pada baris 2 (atau 1 kalau dihitung dari 0) sampai baris 15 
	
	//j=1;
	//item[j][1]=3;
	//item[j][21]=3;
//--------------------------------end
	j=2;	
	for(i=5;i<=6;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=8;i<=10;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=12;i<=14;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=16;i<=17;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
//------------------------------end

	j=3;
	for(i=1;i<=3;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=5;i<=5;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=8;i<=8;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=9;i<=13;i++){
		for(x=3;x<=5;x++){
			Q.x = i;
			Q.y = x;
			setPeta(Q,9);
		}
	}
	for(i=14;i<=14;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=17;i<=17;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=19;i<=21;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
//--------------------------end

	j=4;
	for(i=2;i<=2;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=4;i<=4;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,2);
	}
	for(i=5;i<=5;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=8;i<=8;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	//for(i=11;i<=11;i++){
	//	item[j][i]=4;
	//}
	for(i=14;i<=14;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=18;i<=18;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,2);
	}
	for(i=17;i<=17;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=20;i<=20;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
//--------------------------end

	j=5;
	for(i=5;i<=5;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=8;i<=8;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=14;i<=14;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=17;i<=17;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
//--------------------------end

	j=6;
	for(i=2;i<=4;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=8;i<=10;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=12;i<=14;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=18;i<=20;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
//---------------------------end

	j=7;
	for(i=3;i<=3;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=1;i<=2;i++){
		for(x=7;x<=8;x++){
			Q.x = i;
			Q.y = x;
			setPeta(Q,9);
		}
	}
	for(i=20;i<=21;i++){
		for(x=7;x<=8;x++){
			Q.x = i;
			Q.y = x;
			setPeta(Q,9);
		}
	}
	for(i=19;i<=19;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
//---------------------------end

	j=8;
	for(i=3;i<=3;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=7;i<=10;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=12;i<=15;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=19;i<=19;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
//--------------------------end

	j=9;
	for(i=2;i<=4;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=7;i<=7;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=8;i<=8;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,3);
	}
	for(i=14;i<=14;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,3);
	}
	for(i=15;i<=15;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=18;i<=20;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
//--------------------------end

	j=10;
	for(i=7;i<=9;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=11;i<=11;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=13;i<=15;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
//--------------------------end

	j=11;
	for(i=2;i<=2;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=5;i<=5;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=17;i<=17;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=20;i<=20;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
//---------------------------end

	j=12;
	for(i=4;i<=4;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,2);
	}
	for(i=5;i<=5;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=7;i<=8;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,9);
	}
	for(i=14;i<=15;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,9);
	}
	for(i=17;i<=17;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=18;i<=18;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,2);
	}
//---------------------------end

	j=13;
	for(i=1;i<=3;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=5;i<=5;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=7;i<=9;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=10;i<=12;i++){
		for(x=13;x<=15;x++){
			Q.x = i;
			Q.y = x;
			setPeta(Q,9);
		}
	}
	for(i=13;i<=15;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=17;i<=17;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=19;i<=21;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
//----------------------------------end

	j=14;
	for(i=5;i<=5;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=9;i<=9;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=13;i<=13;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=17;i<=17;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
//----------------------------end

	j=15;
	for(i=9;i<=9;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=13;i<=13;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=1;i<=1;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,3);
	}
	for(i=21;i<=21;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,3);
	}
//-------------------------------end

	/*for(i=0;i<23;i++){
		for(j=0;j<17;j++){
			a=posisi(j);
			b=posisi(i);
	//		d=posisi(22-i);
			if(cekPeta(i,j,1)){
			//	setfillstyle(INTERLEAVE_FILL,BLUE);
				readimagefile("a.bmp",b-c,a-c,b+c,a+c);
			//	setfillstyle(INTERLEAVE_FILL,BLUE);
			//	rectangle(d-c,a-c,d+c,a+c);
			}
			else if(cekPeta(i,j,0)){
				coin(b,a);
		//		jmlItem=jmlItem+1;
			}
			else if(cekPeta(i,j,2)){
				moneybag(b,a);
			}
			else if(cekPeta(i,j,3)){
				beer(b,a);
			}
			else if(cekPeta(i,j,4)){
				randomitem();
			}
		}*/
readimagefile("arena2.bmp",posisi(0)-c,posisi(0)-c,posisi(23-1)+c,posisi(17-1)+c);
}

void levelup3(){
	int a,b,i,j,x;
	pos Q;
	int c = pengali();
	
	//pertama-tama isi array di 0-kan dulu
	for(i=1;i<22;i++){
		for(j=1;j<16;j++){
			Q.x = i;
			Q.y = j;
			setPeta(Q,0);
		}
	}
	
	j=0;
	for(i=11;i<=11;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
//----------------------------end
	
	j=1;
	for(i=1;i<=1;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,2);
	}
	for(i=8;i<=8;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,3);
	}
	for(i=14;i<=14;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,3);
	}
	for(i=21;i<=21;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,2);
	}
//---------------------------end
	
	j=2;
	for(i=1;i<=4;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,9);
	}
	for(i=5;i<=6;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=10;i<=10;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=12;i<=12;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=16;i<=17;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=18;i<=21;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,9);
	}
//--------------------------------end

	j=3;
	for(i=1;i<=1;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,9);
	}
	for(i=2;i<=2;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=5;i<=6;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=10;i<=12;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=16;i<=17;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=20;i<=20;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=21;i<=21;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,9);
	}
//--------------------------------end

	j=4;
	for(i=1;i<=1;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,9);
	}
	for(i=2;i<=2;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=20;i<=20;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=21;i<=21;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,9);
	}
//---------------------------------end
	
	j=5;
	for(i=1;i<=1;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,9);
	}
	for(i=2;i<=2;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=4;i<=4;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,3);
	}
	for(i=18;i<=18;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,3);
	}
	for(i=20;i<=20;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=21;i<=21;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,9);
	}
//---------------------------------end
	
	j=6;
	for(i=1;i<=1;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,9);
	}
	for(i=2;i<=2;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=4;i<=8;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=9;i<=13;i++){
		for(x=6;x<=8;x++){
			Q.x = i;
			Q.y = x;
			setPeta(Q,9);
		}
	}
	for(i=14;i<=18;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=20;i<=20;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=21;i<=21;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,9);
	}
//---------------------------------end
	
	j=7;
	for(i=1;i<=1;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,3);
	}
	for(i=5;i<=5;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,9);
	}
	for(i=17;i<=17;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,9);
	}
	for(i=21;i<=21;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,3);
	}
//-------------------------------end	
	
	j=8;
	for(i=1;i<=3;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=5;i<=5;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,9);
	}
	for(i=17;i<=17;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,9);
	}
	for(i=7;i<=7;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}			
	for(i=15;i<=15;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=19;i<=21;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}	
//-----------------------------------end

	j=9;
	for(i=11;i<=11;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
//-------------------------------------end

	j=10;
	for(i=2;i<=8;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=11;i<=11;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=14;i<=20;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}		
//-------------------------end

	j=11;
	for(i=2;i<=2;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}	
	for(i=4;i<=4;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,3);
	}
	for(i=18;i<=18;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,3);
	}
	for(i=20;i<=20;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
//------------------------end

	j=12;
	for(i=2;i<=2;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=3;i<=7;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,9);
	}
	for(i=15;i<=19;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,9);
	}		
	for(i=20;i<=20;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
//------------------------end

	j=13;
	for(i=2;i<=2;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=5;i<=6;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=10;i<=12;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=16;i<=17;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=20;i<=20;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
//----------------------end

	j=14;
	for(i=2;i<=4;i++){
		for(x=14;x<=15;x++){
			Q.x = i;
			Q.y = x;
			setPeta(Q,9);
		}
	}
	for(i=5;i<=6;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=10;i<=10;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=11;i<=11;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,9);
	}
	for(i=12;i<=12;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=16;i<=17;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
	for(i=18;i<=20;i++){
		for(x=14;x<=15;x++){
			Q.x = i;
			Q.y = x;
			setPeta(Q,9);
		}
	}
//----------------------end

	j=15;
	for(i=1;i<=1;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,2);
	}
	for(i=21;i<=21;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,2);
	}
	
//-----------------------end
	
	j=16;
	for(i=11;i<=11;i++){
		Q.x = i;
		Q.y = j;
		setPeta(Q,1);
	}
//-----------------------end

	/*for(i=0;i<23;i++){
		for(j=0;j<17;j++){
			a=posisi(j);
			b=posisi(i);
	//		d=posisi(22-i);
			if(cekPeta(i,j,1)){
			//	setfillstyle(INTERLEAVE_FILL,BLUE);
				readimagefile("a.bmp",b-c,a-c,b+c,a+c);
			//	setfillstyle(INTERLEAVE_FILL,BLUE);
			//	rectangle(d-c,a-c,d+c,a+c);
			}
			else if(cekPeta(i,j,0)){
				coin(b,a);
		//		jmlItem=jmlItem+1;
			}
			else if(cekPeta(i,j,2)){
				moneybag(b,a);
			}
			else if(cekPeta(i,j,3)){
				beer(b,a);
			}
			else if(cekPeta(i,j,4)){
				randomitem();
			}
		}				
	}*/
	readimagefile("arena3.bmp",posisi(0)-c,posisi(0)-c,posisi(23-1)+c,posisi(17-1)+c);
}
