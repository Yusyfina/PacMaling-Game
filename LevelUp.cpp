#include "LevelUp.h"
#include "PetaPac.h"
#include "LayarPac.h"
#include "ItemPac.h"

struct GrafArray{
	int X;
	int Y;
};

GrafArray GAMatrik[15];

void levelup2(){
	short int a,b,i,j,x;
	pos Q;
	short int c = pengali();
	
	GrafArray NodeN;
	
	//pertama-tama isi array di 0-kan dulu
	for(i=1;i<22;i++){
		for(j=1;j<16;j++){
			Q.x = i;
			Q.y = j;
			setPeta(Q,0);
		}
	}

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
		Q.y=6;Q.x=11;setPeta(Q,1);
	tembok(2);
}

void levelup3(){
	int a,b,i,j,x;
	pos Q;
	
	GrafArray NodeN;
	
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
	
	/*	Root	*/
	NodeN.X = 11;
	NodeN.Y = 1;
	GAMatrik[0] = NodeN;
	
	/* Anak Kiri root */
	NodeN.X = 9;
	NodeN.Y = 1;
	GAMatrik[1] = NodeN;

	/* Anak Kanan root */
	NodeN.X = 13;
	NodeN.Y = 1;
	GAMatrik[2] = NodeN;

	/*	LEVEL 3		*/
	/* 	Anak Kanan	*/
	NodeN.X = 1;
	NodeN.Y = 1;
	GAMatrik[3] = NodeN;
	
	/* Anak Kiri */
	NodeN.X = 9;
	NodeN.Y = 12;
	GAMatrik[4] = NodeN;
	
	/* Anak Kanan */
	NodeN.X = 13;
	NodeN.Y = 12;
	GAMatrik[5] = NodeN;
	
	/* Anak Kanan */
	NodeN.X = 21;
	NodeN.Y = 1;
	GAMatrik[6] = NodeN;

	/*	LEVEL 4		*/
	/* 	Anak Kanan	*/
	NodeN.X = 7;
	NodeN.Y = 1;
	GAMatrik[7] = NodeN;
	
	/* Anak Kiri */
	NodeN.X = 5;
	NodeN.Y = 5;
	GAMatrik[8] = NodeN;
	
	/* Anak Kanan */
	NodeN.X = 3;
	NodeN.Y = 12;
	GAMatrik[9] = NodeN;
	
	/* Anak Kanan */
	NodeN.X = 9;
	NodeN.Y = 15;
	GAMatrik[10] = NodeN;

	/* 	Anak Kanan	*/
	NodeN.X = 21;
	NodeN.Y = 12;
	GAMatrik[11] = NodeN;
	
	/* Anak Kiri */
	NodeN.X = 13;
	NodeN.Y = 15;
	GAMatrik[12] = NodeN;
	
	/* Anak Kanan */
	NodeN.X = 17;
	NodeN.Y = 5;
	GAMatrik[13] = NodeN;
	
	/* Anak Kanan */
	NodeN.X = 21;
	NodeN.Y = 7;
	GAMatrik[14] = NodeN;

	tembok(3);
}
