#include <iostream>
#include "for.h"
#include "switch.h"
#include "if.h"
#include "while.h"

using namespace std;

void executarMetodosWhile(){
    While w;
    w.progressaoMatematica();
}

void executarMetodosSwitch(){
    //Switch sw;
    //sw.calculadora();
}

void executarMetodosFor(){
    For f;
    f.Fibonacci();
}

void executarMetodosIf(){
    If i;
    i.apresentaMenorValor();
}

int main()
{
    executarMetodosWhile();
}
