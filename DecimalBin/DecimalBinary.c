#include "Elem.h"
#include "Pila.h"

Pila convertirBinario(Elem);
void ImprimirBinario(Pila);

int main() {
    printf("Ingresa el numero a convertir: ");
    Elem number = LeerElem();

    ImprimirBinario(convertirBinario(number));
    return 0;
}

Pila convertirBinario(Elem number)
{
    Pila s = empty();

    while (number >= 1)
    {
        int residuo = number % 2;
        number = number / 2;

        s = push(residuo,s);
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