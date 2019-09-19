#include <stdlib.h>
#include <stdio.h>
#include "complejo.h"

void manejaError(int);
void solicitarDatos(COMPLEJO);
void mostrar(COMPLEJO);
void mostrarMod(double);
void liberar(COMPLEJO,COMPLEJO,COMPLEJO);

void main()
{
	COMPLEJO C1, C2, C3;
	double mod;
	C1=crearComplejo();
	C2=crearComplejo();
	C3=crearComplejo();
	solicitarDatos(C1);
	solicitarDatos(C2);
	C3=suma(C1,C2);
	mostrar(C3);
	C3=resta(C1, C2);
	mostrar(C3);
	C3=multi(C1, C2);
	mostrar(C3);
	C3=divi(C1, C2);
	mostrar(C3);
	mod=modulo(C1);
	mostrarMod(mod);
	mod=modulo(C2);
	mostrarMod(mod);
	liberar(C1,C2,C3);
}

void solicitarDatos(COMPLEJO C)
{
	float r,ima;
	printf("Introduzca la parte Real\n");
	scanf("%f",&r);
	printf("Introduzca la parte Imaginaria\n");
	scanf("%f",&ima);
	C=asignaReal(C,r);
	C=asignaImaginario(C,ima);
}

void mostrar(COMPLEJO C)
{
		printf("Real: %f \n",obtenReal(C));
		printf("Imaginario: %f \n\n\n",obtenImaginario(C));
		
}
void mostrarMod(double mod)
{
		printf("Modulo: %f \n", mod);
}

void manejaError(int e)
{
	char *errores[]={"No hay memoria disponible"};
	printf("%s",errores[e]);
}
void liberar(COMPLEJO C1, COMPLEJO C2, COMPLEJO C3)
{
	free(C1);
	free(C2);
	free(C3);
}
