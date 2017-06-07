#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
#include "musik.h"

void musikTTangan(){
	PlaySound("applause.wav",NULL,SND_LOOP );
}

void musikklik(){
	PlaySound("klik.wav",NULL,SND_ASYNC );
}

/*void musikloncat(){
	PlaySound("loncat.wav",NULL,SND_ASYNC );
}*/

void musikmakan(){
	PlaySound("loncat.wav",NULL,SND_ASYNC );
}

void musikoot(){
	PlaySound("tulalit.wav",NULL,SND_ASYNC );
}

void musikpac(){
	PlaySound("pac.wav",NULL,SND_ASYNC );
}
