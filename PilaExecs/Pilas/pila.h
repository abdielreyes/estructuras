#ifndef pila
#define TAMPILA 100
#define TRUE 1
#define FALSE 0

typedef struct{
	int pila[TAMPILA];
	int tope;
}Pila;

typedef Pila* PILA;
void crearPila(PILA * pil);
int esVaciaPila(PILA pil);
void apilar(PILA pil, int e);
int desapilar(PILA pil);
int elemPila(PILA pil);
#endif
