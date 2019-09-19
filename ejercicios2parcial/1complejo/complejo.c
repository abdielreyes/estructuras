#include <stdlib.h>
#include <math.h>
#include "complejo.h"

void manejaError(int );

COMPLEJO crearComplejo()
{
	COMPLEJO C;
	C=(COMPLEJO)malloc(sizeof(Complejo));
	if(C==NULL)
	{
		manejaError(0); //"No hay memoria disponible"
		exit(0);
	}
	return C;
}

COMPLEJO asignaReal(COMPLEJO C, float r)
{
	C->real=r;
	return C;
}

COMPLEJO asignaImaginario(COMPLEJO C, float ima)
{
	C->imagi=ima;
	return C;
}

float obtenReal(COMPLEJO C)
{
	return (C->real);
}

float obtenImaginario(COMPLEJO C)
{
	return (C->imagi);
}

COMPLEJO suma(COMPLEJO C1, COMPLEJO C2)
{
	COMPLEJO C3;
	C3=crearComplejo();
	C3=asignaReal(C3,obtenReal(C1)+obtenReal(C2));
	C3=asignaImaginario(C3,obtenImaginario(C1)+obtenImaginario(C2));
	
	return C3;
}

COMPLEJO resta(COMPLEJO C1, COMPLEJO C2){
	COMPLEJO C3;
	C3=crearComplejo();
	C3=asignaReal(C3, obtenReal(C1)-obtenReal(C2));
	C3=asignaImaginario(C3, obtenImaginario(C1)-obtenImaginario(C2));
	
	return C3 ;
}

COMPLEJO multi(COMPLEJO C1, COMPLEJO C2){
	COMPLEJO C3;
	C3=crearComplejo();
	C3=asignaReal(C3, (obtenReal(C1)*obtenReal(C2))-(obtenImaginario(C1)*obtenImaginario(C2)));
	C3=asignaImaginario(C3,(obtenReal(C1)*obtenImaginario(C2))+(obtenImaginario(C1)*obtenReal(C2)));
	
	return C3;
}

COMPLEJO divi(COMPLEJO C1, COMPLEJO C2){
	COMPLEJO C3;
	int w;
	w=pow(obtenReal(C2),2)+ pow (obtenImaginario(C2),2);
	
	C3=crearComplejo();
	C3=asignaReal(C3, ((obtenReal(C1)*obtenReal(C2))+(obtenImaginario(C1)*obtenImaginario(C2)))/pow(fabs(w),2));
	C3=asignaImaginario(C3, ((obtenImaginario(C1)*obtenReal(C2))-(obtenReal(C1)*obtenImaginario(C2)))/pow(fabs(w),2));
	
	return C3;
}

double modulo(COMPLEJO C){
	double w;
	w=sqrt(pow(obtenReal(C),2)+ pow (obtenImaginario(C),2));
	
	return w;
}







