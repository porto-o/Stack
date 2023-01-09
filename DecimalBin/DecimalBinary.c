#include "Elem.h"
#include "Pila.h"

Pila convertirBinario(Elem);
Pila convertirBinarioRecursivo(Elem, Pila);
void ImprimirBinario(Pila);

int main() {
    printf("Ingresa el numero a convertir: ");
    Elem number = LeerElem();

    Pila s = empty();

    ImprimirBinario(convertirBinarioRecursivo(number,s));
    return 0;
}

Pila convertirBinario(Elem number)
{
    /**
     * Dividimos el numero entre 2
     * el residuo solo será 1 o 0 y lo meteremos a la pila
     * cuando el número sea menor a 1, pararemos
     * después imprimiremos la pila de arriba hacia abajo
     * 
    */
    Pila s = empty();

    while (number >= 1)
    {
        int residuo = number % 2;
        number = number / 2;

        s = push(residuo,s);
    }

    return s;
}

Pila convertirBinarioRecursivo(Elem number,Pila s)
{
    if(!number < 1)
    {
        int residuo = number % 2;
        number = number / 2;

        s = push(residuo, s);
        return convertirBinarioRecursivo(number,s); // OJOOOOOOOOOOOOOOOOOOOOO en el return, no olvidar :))))))
    }
   
    return s;
}

void ImprimirBinario(Pila s)
{
    if(!isEmpty(s)) {
        ImpElem(top(s));
        return ImprimirBinario(pop(s));
    }
}