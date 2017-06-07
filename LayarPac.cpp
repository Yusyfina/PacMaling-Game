/****************************/
/* 		FILE LayarPac.cpp 	*/
/* 		Dibuat oleh :		*/
/* 		Mufid Jamaluddin 	*/
/* 		161511019			*/
/****************************/

#include "LayarPac.h"

int panjang, lebar, ukur; //var ukur dibuat oleh Faiz Abdussalam
/*	panjang layar, lebar layar, dan var ukur untuk konstanta perhitungan posisi	*/

void setPanjang(int x){
	/* 	mengisi nilai var panjang												*/
	panjang = x;
}

void setLebar(int y){
	/* 	mengisi nilai var lebar													*/
	lebar = y;
}

void setUkur(int x){
	/* 	mengisi nilai var ukur													*/
	ukur = x;
}

int getPanjang(){
	/* 	mengembalikan nilai panjang												*/
	return (panjang);
}

int getLebar(){
	/* 	mengembalikan nilai lebar												*/
	return (lebar);
}

int getUkur(){
	/* 	mengembalikan nilai ukur												*/
	return(ukur);
}

int pengali(){
	/* membagi lebar dengan 19 satuan array										*/
	int maxy;
	maxy = getLebar()/19;
	maxy = maxy/2;
	return maxy;
}

int posisi(int x){
	/* mengubah posisi satuan array menjadi posisi pixel						*/
	int b; 
	b = pengali()*2;
	b = b*(1.5+x);
	return(b);
}

int posisikiri(int x){
	return (posisi(x)-getUkur());
}

int posisikanan(int y){
	return (posisi(y)+getUkur());
}
