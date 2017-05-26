/****************************/
/* 		FILE ADTPac.cpp 	*/
/* 		Dibuat oleh :		*/
/* 		Mufid Jamaluddin 	*/
/* 		161511019			*/
/****************************/

#ifndef ADTPac_H
#define ADTPac_H
#include <stdio.h>

typedef struct pos{
	/* 	untuk posisi array pacman/musuh									*/
	int x;
	int y;
};

typedef struct logika{
	/* 	untuk pertimbangan maju kiri/kanan/atas/bawah musuh				*/
	bool kiri;
	bool atas;
};

#endif
