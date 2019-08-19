#include <stdio.h>
#include <stdlib.h>

//prototypes

void darDimension(int *,int*);
int** crearMatriz (int,int);
void solicitarDatos(int **,int,int);
void mostrarDatos(int**,int,int);
void liberar(int**,int);
void restar(int**,int**,int,int);

void main(){

	int**mtz,fil,col;
	int**mtz2,fil2,col2;

	darDimension(&fil,&col);
	mtz=crearMatriz(fil,col);
	solicitarDatos(mtz,fil,col);
	mostrarDatos(mtz,fil,col);
	
	darDimension(&fil2,&col2);
	mtz2=crearMatriz(fil2,col2);
	solicitarDatos(mtz2,fil2,col2);
	mostrarDatos(mtz2,fil2,col2);
	
	restar(mtz,mtz2,fil,col);
	mostrarDatos(mtz,fil,col);
	liberar(mtz,fil);
	liberar(mtz2,fil2);
}


void darDimension(int*fil,int*col){
	printf("Introduzca las filas\n");
	scanf("%d",fil);
	printf("Introduzca las columnas \n");
	scanf("%d",col);
}
int** crearMatriz(int fil,int col){
	int i;
	int **mtz=(int**)malloc(sizeof(int*)*fil);
	if(mtz==NULL){
		
	}
	for(i=0;i<fil;i++){
		mtz[i]=(int*)malloc(sizeof(int)*col);
		if(mtz==NULL){
		
		}
	}
	return mtz;
}
void solicitarDatos(int** mtz,int fil,int col){
	int i,j;
	printf("Introduzca los datos\n");
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("mtz[%d][%d]:",i+1,j+1);
			scanf("%d",&mtz[i][j]);
		}
	}
}
void mostrarDatos(int**mtz,int fil,int col){
	int i,j;
	printf("Los datos de la matriz son\n");
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("mtz[%d][%d]=%d\n",i+1,j+1,mtz[i][j]);
		}
	}
}
void liberar(int ** mtz ,int fil){
	int i;
	for(int i = 0;i<fil;i++){
		free(mtz[i]);
		free(mtz);
	}
}
void restar(int **mtz,int **mtz2,int fil,int col){
	int i,j;
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			int  a = mtz[i][j];
			int b = mtz2[i][j];
			int res = a-b;
			mtz[i][j] = res;
		}
	}
}
