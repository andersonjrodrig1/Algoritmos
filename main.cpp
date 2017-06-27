#include <iostream>
#include "for.h"
#include "switch.h"
#include "if.h"

using namespace std;

void executarMetodosFor(){
    For f;
    f.mediaMaiorMenor();
}

void executarMetodosIf(){
    If i;
    i.apresentaMenorValor();
}

int main()
{
    executarMetodosFor();
}
