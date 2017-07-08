#include <iostream>
#include "for.h"
#include "switch.h"
#include "if.h"
#include "while.h"
#include "vetor.h"

using namespace std;

void executaMetodosVetor(){
    Vetor v;
    v.inverteVetor();
}

void executarMetodosWhile(){
    While w;
    w.andaresPredio();
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
    executaMetodosVetor();
    return 0;
}
