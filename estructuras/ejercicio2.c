/ The MIT License (MIT)

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
/*
  ,           , 
 /             \ 
((_-^^-,-^^-_)) 
 `-_---' `---_-' 
  --|o 'o|--' 
     \  `  / 
      ): 😞 
      :o_o: 
       "-" 
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct
{   
    char titulo[256];
    char autor[256];
    float precio;
    int anio;
}Libro;
    
Libro* crearLibro(Libro* lib);
void solicitarDatos(Libro* lib);
void mostrarDatos(Libro* lib);
void liberar(Libro* lib);

int main()
{
    Libro  * lib;
    lib = crearLibro(lib);
    solicitarDatos(lib);
    mostrarDatos(lib);
    liberar(lib);
    
    return 0;
}
Libro* crearLibro(Libro* lib){
    lib = (Libro*)malloc(sizeof(Libro));
    if(lib == NULL){
        printf("No hay memoria disponible");
        exit(0);
    }
    return lib;
}
void solicitarDatos(Libro* lib){
    printf("Introduzca el titulo\n");
    scanf("%s",lib->titulo);
    printf("Introduzca el autor \n");
    scanf("%s",lib->autor);
    printf("Introduzca el precio \n");
    scanf("%f",&lib->precio);
    printf("Introduzca el anio \n");
    scanf("%d",&lib->anio);
}
void mostrarDatos(Libro* lib){
    printf("Titulo %s \n",lib->titulo);
    printf("Autor %s \n",lib->autor);
    printf("Precio %f \n",lib->precio);
    printf("Anio %d \n",lib->anio);
}
void liberar(Libro* lib){
    free(lib);
}