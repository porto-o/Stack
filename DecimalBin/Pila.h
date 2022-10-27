#include <stdlib.h>
#include <stdio.h>

typedef struct Nodo
{
    Elem dato;
    struct Nodo *sig; // Pointer to other Nodo
}*Pila;

// Begins Spec

// empty:->Pila
Pila empty()
{
    return NULL;
}

// const:Elem, Pila->Pila
Pila push(Elem e, Pila l)
{
    // Each element lives in a node
    // 1.- Create node
    // Generate space in memory for struct node
    // Convert to type Pila because 'malloc' returns a pointer
    Pila temp = (Pila)malloc(sizeof(struct Nodo));

    temp->dato = e;
    temp->sig = l;

    return temp;
};

// Observers

// isEmpty:Pila -> Bool
int isEmpty(Pila l)
{
    return l==NULL;
};

// top:Pila->Elem;
Elem top(Pila l)
{
    return l->dato; // Data field of the node
};

// Splitter

//pop:Pila->Pila;
Pila pop(Pila l)
{
    return l->sig;
};