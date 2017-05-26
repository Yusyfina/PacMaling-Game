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
#include <graphics.h>
#include "ADTPac.h"
#include "LayarPac.h"

/* 		Faiz Abdussalam 	*/

void MulaiAlokGambar(int x, int y);

void SetSudut(int x);

void pacman(int in, pos P);

/* 		Gerry Agustian		*/
void musuh(pos M);

void coin(int b, int a);

void moneybag(int b, int a);

void beer(int b, int a);

void hapus(pos P);

void hapusran();

#endif
