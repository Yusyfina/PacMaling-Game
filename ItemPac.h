/****************************/
/* 		FILE ItemPac.h 		*/
/* 		Dibuat oleh :		*/
/* 		Gerry Agustian		*/
/* 		161511010			*/
/* 		Faiz Abdussalam 	*/
/* 		161511009			*/
/****************************/

#ifndef ItemPac_H
#define ItemPac_H
#include "ADTPac.h"
#include "LayarPac.h"

/* 		Faiz Abdussalam 	*/

void MulaiAlokGambar(int x, int y);

void SetSudut(int x);

void pacman(int in, pos *P);

/* 		Gerry Agustian		*/
void musuh(pos M);

void coin(int b, int a);

void moneybag(int b, int a);

void beer(int b, int a);

void hapus(pos P);

void hapusran();

void tembok(short int level);

void MenangKalah(bool menang);

void about();

/* REZA DWI KURNIAWAN */

void MenuUtama(bool &isKlik);

int MenuLVL(int LastLevel);

void TungguKlik();

void garisNyawa(short int nyawa);

void TampilSkor(short int Skor);

#endif
