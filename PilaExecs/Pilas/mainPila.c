#include <stdio.h>
#include <stdlib.h>
#define TAMPILA 100
#define true 1
#define false 0

typedef struct {
	int pila[100];
	int tope;
}Pila;
void crearPila(Pila*);
int esVaciaPia(Pila);
void apilar(Pila,int)
void manejaError(int e){
  printf("%d\n", e);
}


void main(){
  Pila *p;
  crearPila(p);
  printf("%d\n", esVaciaPila(p));
  apilar(p,1);
}
void crearPila(Pila *pil){
	pil=(Pila*)malloc(sizeof(Pila));
	if(pil==NULL){
		manejaError(0);
		exit(0);
	}
	pil->tope=-1;
}

int esVaciaPila(Pila pil){
	if(pil.tope < 0){
		return true;
	}
	else{
		return false;
	}
}

void apilar(Pila pil, int e){
	if(pil.tope == TAMPILA-1){
		manejaError(1); //Pila llena
		exit(0);
	}
	(pil.tope)++;
	pil.pila[pil.tope]=e;
}

int desapilar(Pila pil){
	int v;

	if(esVaciaPila){
		manejaError(2);//Piña vacía
		exit(0);
	}

	v=pil.pila[pil.tope];
	(pil.tope)--;

	return v;
}

int elemPila(Pila pil){
	int v;
	v=desapilar(pil);
	apilar(pil, v);

	return v;
}

void datosEntrada(Pila p){
   int a = 1;
   while(a){
     printf("Introduce el elemento %s\n" );
   }
}
