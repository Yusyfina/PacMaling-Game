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
	system("Color 70");
	SetColor(6);
	for (i=0;i<=10;i++)
	{
	gotoxy(i-1,1);   printf("  лллллллл    лллллл   лллллл  лллллл    лллл  лллллллл   лллл  лл  лллллл лллллллл");
	gotoxy(19-i,2);  printf(" лл     лл   лл    лл  лл      лл  лл   лл лл  лл    лл   лл        лл  лл лл    лл");
	gotoxy(i-1,3);   printf(" лл     лл   лл    лл  лл      лл   ллллл  лл  лл    лл   лл    лл  лл  лл лл      ");
	gotoxy(19-i,4);  printf(" лл лллллл   лллллллл  лл      лл 	        лл  лллллллл   лл    лл  лл  лл лл      ");
	gotoxy(i-1,5);   printf(" лл     	  лл    лл  лл      лл 	        лл  лл    лл   лл    лл  лл  лл лл  лллл");
	gotoxy(19-i,6);  printf(" лл      	  лл    лл  лл  	лл          лл  лл    лл   лл    лл  лл  лл лл    лл");
	gotoxy(i-1,7);   printf(" лл          лл    лл  лллллл  лл          лл  лл    лл   лл    лл  лл  лл лллллллл");
		Sleep(100);
	}
	gotoxy(9,8);
	SetColor(4);
	printf("\n\n\n");
	printf("\tЩЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЛ\n");
	printf("\tК                                                               К\n");
	printf("\tШЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭМ\n");
	printf("		           	now loading . . .	                          	\n");
	SetColor(11);
	for (i=1;i<=63;i++)
	{
		gotoxy(8+i,12);printf("%c\n\n\n\n\n\n\n\n\n\n",219);
		Sleep(35);
	}
}

void penutupan()															//keluar program
{
	int i;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	system("Color 70");
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
