#include <stdio.h>
#include <stdlib.h>

void dameTam(int *);
void creaArregloUni(int **, int);
void Datos(int *, int);
void mostrar(int *,int);
void Redimensiona(int *, int *);
void liberar(int *,int);

void main(){
	int *A, elem,i;
	dameTam(&elem);
	creaArregloUni(&A,elem);
	Datos(A,elem);
	Redimensiona(A,&elem);
	mostrar(A,elem);
	liberar(A,elem);
}

void dameTam(int*elem){
	printf("Cuantos elementos es su arreglo :\n");
	scanf("%d",&*elem);
}
void creaArregloUni(int **A,int elem){
	int i;
	*A = (int *)malloc((elem)*sizeof(int));
	if(*A==NULL){
		printf("No hay memoria disponible.. \n");
		exit(0);
	}
}
//Solicita los datos del arreglo
void Datos(int *A,int elem){
	int i;
	for(i=0;i<elem;i++){
		printf("A[%d]=",i+1);
		scanf("%d",&A[i]);
	}

}
void Redimensiona(int *A, int* elem){
	int n ,i,nvotam,*B;
	printf("Cuantos elementos va a agregar?\n");
	scanf("%d",&n);
	nvotam=(*elem)+n;
	B=(int*)realloc(A,(nvotam)*sizeof(int));
	for(i=(*elem);i<nvotam;i++){
		printf("A[%d]:",i+1);
		scanf("%d",&B[i]);
	}
	(*elem) = nvotam;
	A=B;
}
void mostrar(int *A, int elem){
	int i;
	printf("\n");
	for(i=0;i<elem;i++){
		printf("A[%d]=%d\n",i+1,A[i]);
	}
}
void liberar(int *A,int elem){
	int i;
	printf("\n--Memoria liberada--");
	free(A);
}
