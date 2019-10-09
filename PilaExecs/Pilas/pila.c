#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

void manejaError(int e){
  printf("%d\n", e);
}
void crearPila(PILA * pil){
	*pil=(PILA)malloc(sizeof(Pila));
	if(*pil==NULL){
		manejaError(0);
		exit(0);
	}
	(*pil)->tope=-1;
}

int esVaciaPila(PILA pil){
	if(pil->tope < 0){
		return true;
	}
	else{
		return false;
	}
}

void apilar(PILA pil, int e){
	if(pil->tope == TAMPILA-1){
		manejaError(1); //Pila llena
		exit(0);
	}
	(pil->tope)++;
	pil->pila[pil->tope]=e;
}

int desapilar(PILA pil){
	int v;

	if(esVaciaPila){
		manejaError(2);//Piña vacía
		exit(0);
	}

	v=pil->pila[pil->tope];
	(pil->tope)--;

	return v;
}

int elemPila(PILA pil){
	int v;
	v=desapilar(pil);
	apilar(pil, v);

	return v;
}
