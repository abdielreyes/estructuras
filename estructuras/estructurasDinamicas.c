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
/*
  ,           , 
 /             \ 
((__-^^-,-^^-__)) 
 `-_---' `---_-' 
  `--|o` 'o|--' 
     \  `  / 
      ): :( 
      :o_o: 
       "-" 
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct
{   
    char titulo[30];
    char autor[30];
    float precio;
    int anio;
}Libro;
    

int main(int argc, char const *argv[])
{
    Libro* lib;
    //Pedir
    lib = (Libro*)malloc(sizeof(Libro));
    if(lib == NULL){
        printf("No hay memoria disponible");
        return 0;
    }
    
    printf("Introduzca el titulo\n");
    scanf("%[^\n]",lib->titulo);
    getchar();
    printf("Introduzca el autor \n");
    scanf("%[^\n]",lib->autor);
    printf("Introduzca el precio \n");
    scanf("%f",&lib->precio);
    printf("Introduzca el anio \n");
    scanf("%d",&lib->anio);
    //Mostrar
    printf("Titulo %s \n",lib->titulo);
    printf("Autor %s \n",lib->autor);
    printf("Precio %f \n",lib->precio);
    printf("Anio %d \n",lib->anio);
    
    
    return 0;
}


