// The MIT License (MIT)

// Copyright (c) 2019 Abdiel Reyes

//  Permission is hereby granted, free of charge, to any person obtaining a
//  copy of this software and associated documentation files (the "Software"),
//  to deal in the Software without restriction, including without limitation
//  the rights to use, copy, modify, merge, publish, distribute, sublicense,
//  and/or sell copies of the Software, and to permit persons to whom the
//  Software is furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
//  OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
//  DEALINGS IN THE SOFTWARE.

//crear dinamicamente un arreglo de personas y tambien crear un arreglo dinamico de telefonos
//fn crearPersonas con arreglo de telefonos
//fn solicitarDatos
//fn mostrarDatos
//fn liberar
#include <stdlib.h>
#include <stdio.h>

typedef struct Personas{
    char nombre[30];
    int edad;
    char telefono[10];
}Persona;
void solicitarDatos(int *,int *,Persona *);
int main(int argc, char const *argv[])
{
    Persona *abdiel;
    int *telefono,*tam;
    abdiel = (Persona *)malloc(sizeof(Persona));
    if(abdiel == NULL) printf("No hay memoria disponible\n");
    solicitarDatos(telefono,tam,abdiel);
    free(abdiel);
    free(telefono);
    return 0;
}
void solicitarDatos(int *telefono,int *tama,Persona *persona){
    int tam,i;
    printf("¿Cuantos telefonos ingresaras?");
    scanf("%d",&tam);
    
    telefono = (int*)malloc(tam*sizeof(int));
    for ( i = 0; i < tam; i++){
        printf("Introduce el elemento %d",i);
        scanf("%d",&telefono[i]);
        printf("%d",telefono[i]);
    }
    
    
}
