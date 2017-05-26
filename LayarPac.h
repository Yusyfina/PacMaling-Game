/****************************/
/* 		FILE LayarPac.h 	*/
/* 		Dibuat oleh :		*/
/* 		Mufid Jamaluddin 	*/
/* 		161511019			*/
/****************************/

#ifndef LayarPac_H
#define LayarPac_H
#include <stdio.h>

void setPanjang(int x);
/* 	IS : panjang (layar) tak tentu					*/
/* 	FS : panjang (layar) sudah ditentukan nilainya	*/ 
void setLebar(int y);
/* 	IS : lebar (layar) tak tentu					*/
/* 	FS : lebar (layar) sudah ditentukan nilainya	*/ 
void setUkur(int x);
/* 	IS : ukur (layar) tak tentu						*/
/* 	FS : ukur (layar) sudah ditentukan nilainya		*/ 
int getPanjang();
/* 	mengembalikan nilai panjang						*/
int getLebar();
/* 	mengembalikan nilai lebar						*/
int getUkur();
/* 	mengembalikan nilai ukur						*/
int pengali();
/* 	mengembalikan nilai pengali						*/
int posisi(int x);
/* 	mengembalikan nilai posisi						*/
/* 	IS : posisi array								*/
/* 	FS : posisi pixel								*/ 
int posisikiri(int x);

int posisikanan(int y);

#endif
