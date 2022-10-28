typedef char Elem;

void ImpElem(Elem e){printf("%c ",e);}
int EsMayor(Elem e1, Elem e2){return e1>e2;}
int prec(Elem e){
    switch(e){

        case '+': case '-': return 1;
        case '*': case '/': return 2;
        case '^': return 3;
    }
}

int EsOperador(Elem e){
    if((e=='+')||(e=='-')||(e=='*')||(e=='/')||(e=='^'))
        return 1;
    else
        return 0;
}

int EsParI(Elem e){return e=='(';}
int EsParD(Elem e){return e==')';}