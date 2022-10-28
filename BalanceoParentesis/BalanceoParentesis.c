#include <stdio.h>
#include "Elem.h"
#include "Pila.h"

int evaluaExpresion(Elem []);

int main(int argc, char *argv[]) {
    Elem *in = "(()()()()))";
    evaluaExpresion(in)? printf("Expresion balanceada") : printf("Expresion no balanceada");
    return 0;
}

int evaluaExpresion(Elem in[])
{
    int i = 0;
    Pila s = empty();
    while(in[i]){
        if(EsParI(in[i]))
            s = push(in[i], s);
        else if(EsParD(in[i]) && !isEmpty(s))
            s = pop(s);
        else
            return 0;
        i++;
    }
    return 1;
}