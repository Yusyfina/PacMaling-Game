#ifndef posPemain_H
#define posPemain_H
#include <stdio.h>
#include "ADTPac.h"

short int getNyawa();

pos getPacman();

pos getMusuh(short int MusuhKe);

void setPacman(short int X, short int Y);

void setMusuh(short int MusuhKe, short int X, short int Y);

void majuPacman(int input);

bool cekNyawa(pos G, pos H, pos I);

void makanMusuh(int totItem);

void boolmusuh();

void musuhmikir();

void musuhmikirdua();

void hapusmus();

void randomitem();

void cetakMusuh();

void cetakPacman();

#endif
