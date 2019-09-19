#include <stdlib.h>
#include <math.h>
#include "fraccion.h"

void manejaError(int );

FRAC crearFraccion(){
	FRAC f;
	f=(FRAC)malloc(sizeof(fraccion));
	if(f==NULL)
	{
		manejaError(0); //"No hay memoria disponible"
		exit(0);
	}
	return f;
}

FRAC asignaNum(FRAC n, float num)
{
	n->numerador=num;
	return n;
}

FRAC asignaDenom(FRAC f, float denom)
{
	f->denominador=denom;
	return f;
}

float obtenNum(FRAC n)
{
	return (n->numerador);
}

float obtenDenom(FRAC n)
{
	return (n->denominador);
}

FRAC suma(FRAC n1, FRAC n2) 
{
	FRAC n3;
	n3=crearFraccion();
	n3=asignaNum(n3,(obtenNum(n1)*obtenDenom(n2))+(obtenNum(n2)*obtenDenom(n1)));
	n3=asignaDenom(n3,obtenDenom(n1)*obtenDenom(n2));
	
	return n3;
}

FRAC resta(FRAC n1, FRAC n2){
	FRAC n3;
	n3=crearFraccion();
	n3=asignaNum(n3,(obtenNum(n1)*obtenDenom(n2))-(obtenNum(n2)*obtenDenom(n1)));
	n3=asignaDenom(n3,obtenDenom(n1)*obtenDenom(n2));
	
	return n3;
}

FRAC multi(FRAC n1, FRAC n2){
	FRAC n3;
	n3=crearFraccion();
	n3=asignaNum(n3,obtenNum(n1)*obtenNum(n2));
	n3=asignaDenom(n3,obtenDenom(n1)*obtenDenom(n2));
	
	return n3;
}

FRAC divi(FRAC n1, FRAC n2){
	FRAC n3;
	n3=crearFraccion();
	n3=asignaNum(n3,obtenNum(n1)*obtenDenom(n2));
	n3=asignaDenom(n3,obtenNum(n2)*obtenDenom(n1));
	
	return n3;
}

FRAC inversa (FRAC n){
	
	FRAC n3;
	n3=crearFraccion();
	n3=asignaNum(n3, obtenDenom(n));
	n3=asignaDenom(n3, obtenNum(n));
	
	return n3;
}



