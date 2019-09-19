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
#include <string.h>

typedef struct Telefonos{
    int movil;
    int casa;
    int oficina;
}Telefono;
typedef struct Personas{
    char nombre[50];
    char ap_paterno[30];
    char ap_materno[30];
    int edad;
    Telefono *telefono;
}Persona;
Persona* crearPersonas(Persona *,int);
Telefono* crearTelefonos(Telefono *);
void mostrarDatos(Persona *,int);
void longitud(int*);
int main(int argc, char const *argv[])
{
    Persona *personas;
    int tamaPer,tama;
    longitud(&tama);
    personas = crearPersonas(personas,tama);

    mostrarDatos(personas,tama);
    //free(personas);
    return 0;
    free(personas);
}
void longitud(int*tam){
    printf("\nCuantas personas registrarás?");
    scanf("%d",tam); 
}
Telefono* crearTelefonos(Telefono * telefono){
    int tam = 1,i;
   // printf("\nCuantas agendas quiere tiene?");
   // scanf("%d",&tam); 
    telefono = (Telefono*)malloc(sizeof(Telefono)*tam);
    if(telefono == NULL) printf("No hay memoria disponible\n"); 
    for ( i = 0; i < tam; i++){
        printf("\nIntroduce su telefono movil %d: ",i+1);
        scanf("%d",&telefono[i].movil);
        printf("\nIntroduce su telefono de casa %d: ",i+1);
        scanf("%d",&telefono[i].casa);
        printf("\nIntroduce su telefono oficina %d: ",i+1);
        scanf("%d",&telefono[i].oficina);
    }
    return telefono;
}
Persona* crearPersonas(Persona *gente, int tam){
    int i;
    gente = (Persona *)malloc((tam)*sizeof(Persona));
    if(gente == NULL) printf("No hay memoria disponible\n"); 
    for (i = 0; i < tam; i++)
    {
        printf("\nComo se llama la persona %d ? ",(i+1));
        scanf("%s",gente[i].nombre);
        printf("\nCual es su apellido paterno? ");
        scanf("%s",gente[i].ap_paterno);
        printf("\nCual es su apellido materno? ");
        scanf("%s",gente[i].ap_materno);
        printf("\nCual es la edad de %s? ",gente[i].nombre);
        scanf("%d",&gente[i].edad);
        Telefono*tel;
        gente[i].telefono = crearTelefonos(tel);
    } 
    return gente;
}
void mostrarDatos(Persona *persona,int tama){
    int sizePersona = tama;
    int sizeTelefono;
    int i,j;
    for ( i = 0; i < sizePersona; i++)
    {
        printf("Saludos %s %s %s!\n",persona[i].nombre,persona[i].ap_paterno,persona[i].ap_materno);
        printf("Sabias que tiene %d anios?\n",persona[i].edad);
        printf("Sus telefonos son: \n");
        sizeTelefono = 1;
        for ( j = 0; j < sizeTelefono; j++)
        {
            printf("    Movil:   %d\n",persona[i].telefono[j].movil);
            printf("    Oficina: %d\n",persona[i].telefono[j].oficina);
            printf("    Casa:    %d\n",persona[i].telefono[j].casa);
        }
        
    }
    
}