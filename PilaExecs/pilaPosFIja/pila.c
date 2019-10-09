#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define TAM 100
#define true 1
#define false 0
float pila[TAM];
int tope=-1;
void manejaError(int e){
    printf("ERROR %d",e);
}
void push (float x){
    if(tope == TAM-1){
        manejaError(1);
        exit(0);
    }
    tope++;
    pila[tope] = x;
}
int stackEmpty(){
    if(tope<0) return 1;
    return 0;
}
float pop(){
    float x;
    if(stackEmpty()==true){
        manejaError(2);
        return 0;
    }
    x= pila[tope];
    tope--;
    return x;
}
void lee(char*ent){
    int pos = 0;
    printf("\n\n Introduzca la expresion en Postfija:");
    while((ent[pos++]=getchar())!= '\n');
    ent[--pos]='\0';
}
float evalua(char *ent){
    double a,b;
    int pos = 0;
    char op[1];
    double conv;
    while(ent[pos]!='\0'){
        *op = ent[pos++];
        switch(*op){
            case '+':
                b = pop();
                a = pop();
                push((a+b));
                break;
            case '-':
                b=pop();
                a=pop();
                push((a-b));
                break;
            case '*':
                b=pop();
                a=pop();
                push((a*b));
                break;
            case '/':
                b=pop();
                a=pop();
                if(b==0){
                    printf("\n\n Division por cero");
                    return 0;
                    break;
                }
                push((a/b));
                break;
            default:
                conv=atof(op);
                push(conv);
        }
    }
    return(pop());
}

void main()
{
    char ent[TAM];
    printf("\n\tEvaluacion de expresiones postfijas\n");
    printf("Operaciones Basicas:suma,resta,producto y division");
    lee(ent);
    printf("\n\n\t %s = %.2f \n\n",ent,evalua(ent));
    
}
