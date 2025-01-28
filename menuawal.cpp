#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <conio.h>		/* gotoxy*/
#include <windows.h>	/* system,HANDLE */
#include "menuawal.h"
// modul-modul
void SetColor(int ForgC)		//modul untuk mengatur color 
{
     WORD wColor;
     //This handle is needed to get the current background attribute
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;
     //csbi is used for wAttributes word
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
          //To mask out all but the background attribute, and to add the color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
}
void gotoxy(int x, int y)		// modul untuk pengarahan koordinat
{
	HANDLE hConsoleOutput;  
	COORD dwCursorPosition;  
	dwCursorPosition.X = x;  
	dwCursorPosition.Y = y;  
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);  
	SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);   
}

void pembukaan()
{
	int i;
	system("cls");
	system("Color 20");
	SetColor(6);
	for (i=1;i<=10;i++)
	{
		gotoxy(i-1,4);   printf(" ллллллллл    лллллл   лллллл  лллллл    лллл  лллллллл   лл         лл  лллллл лллллллл     ");
		gotoxy(19-i,5);  printf(" лл     лл   лл    лл  лл      лл  лл   лл лл  лл    лл   лл         лл  лл  лл лл           ");
		gotoxy(i-1,6);   printf(" лл     лл   лл    лл  лл      лл   ллллл  лл  лл    лл   лл         лл  лл  лл лл           ");
		gotoxy(19-i,7);  printf(" ллллллллл   лллллллл  лл      лл          лл  лллллллл   лл         лл  лл  лл лл           ");
		gotoxy(i-1,8);   printf(" лл          лл    лл  лл      лл          лл  лл    лл   лл         лл  лл  лл лл  лллл     ");
		gotoxy(19-i,9);  printf(" лл          лл    лл  лл  	лл          лл  лл    лл   лл         лл  лл  лл лл    лл        ");
		gotoxy(i-1,10);  printf(" лл          лл    лл  лллллл  лл          лл  лл    лл   ллллллллл  лл  лл  лл лллллллл     ");
		Sleep(109);
		if(i==3) system("Color 30");
		else if(i==5) system("Color 50");
		else if(i==8) system("Color 60");
	}
	system("Color 80");
	SetColor(4);
	for(i=1;i<=10;i++)	{		
		SetColor(4);
		gotoxy(21-i,19); printf(" лл   лл  ллллллл  лл    лл ллллллл лл ллллллл  лллллллл  лллллл лллллллл ");
		gotoxy(1+i,20);  printf(" лл  лл   лл       лл            лл    лл   лл     лл     лл  лл лл       ");
		gotoxy(21-i,21); printf(" ллллл    ллллллл  лл       ллллллл    ллллллл     лл     лл  лл лллллллл ");
		gotoxy(1+i,22);	 printf(" лл  лл   лл       лл            лл    лл          лл     лл  лл       лл ");
		gotoxy(21-i,23); printf(" лл   лл  ллллллл  ллллл лл ллллллл лл лл          лл     лллллл лллллллл ");
		Sleep(99);
		if(i==5) system("Color 70");
	}
	
	Sleep(2*286);
}

void KotakMenuA(){
	short int i;
	SetColor(1);
	gotoxy(10,10);  
	printf("ллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллл\n");
	for(i=0;i<7;i++){
		gotoxy(10,11+i);
		printf("лл                                                                                   лл\n");
	}
  	gotoxy(10,18);
 	printf("ллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллл\n");

    gotoxy(15,11); 
}

void penutupan()															//keluar program
{
	int i;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	system("Color 30");
	for(i=1;i<=10;i++)	{		
		system("cls");
		SetColor(4);
		gotoxy(21-i,8);	 	printf("    ллллллллл    ллл     ллл  лллллллл      л             л		\n");
		gotoxy(1+i,9); 		printf("    лл     лл    ллл     ллл  лллллллл     ллл           ллл	\n");
		gotoxy(21-i,10); 	printf("    лл    лл      ллл   ллл   лл          лл лл         лл лл	\n");
		gotoxy(1+i,11); 	printf("    лллллллл        ллллл     лллллллл        ллллллллллл		\n");
		gotoxy(21-i,12); 	printf("    ллллллллл        ллл      лллллллл          лл    лл		\n");
		gotoxy(1+i,13);		printf("    лл     лл        ллл      лл                 лл  лл			\n");
		gotoxy(21-i,14);	printf("    лл    лл         ллл      лллллллл            ллл           \n");
		gotoxy(1+i,15);		printf("    лллллллл         ллл      лллллллл             лл           \n");
		Sleep(50);
		if(i==3) system("Color 50");
		else if(i==5) system("Color 60");
		else if(i==8) system("Color 70");
	}

	for(i=1;i<46;i++){
		SetColor(6);
		gotoxy(i,27); printf(" FAIZ ABDUSSALAM-GERY AGUSTIAN-JEREMIA GERALDI-MUFID JAMALUDDIN");
		gotoxy(i+5,18); printf("лллллллллл лл     лл ллллллллл ллл    лл лл   лл  ллллллллл\n");
		gotoxy(95-i,19); printf("    лл     лл     лл лл     лл лллл  лл лл  лл   лл       \n");
		gotoxy(i+5,20);  printf("    лл     ллллллллл ллллллллл лл лл лл ллллл    ллллллллл\n");
		gotoxy(95-i,21); printf("    лл     лл     лл лл     лл лл  лллл лл  лл          лл\n");
		gotoxy(i+5,22);  printf("    лл     лл     лл лл     лл лл   ллл лл   лл         лл\n");
		gotoxy(95-i,23); printf("    лл     лл     лл лл     лл лл    лл лл    лл ллллллллл\n");
		Sleep(35);
	}
	gotoxy(i-1,25); printf("<<EXIT");	
	system("pause");
}
