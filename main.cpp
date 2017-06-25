#include <iostream>
#include "for.h"

using namespace std;

void executarMetodosSwitch(){
    Switch s;
    s.calculadora();
}

void executarMetodosFor(){
    For f;
    f.mediaSalario();
}

int main()
{
    executarMetodosFor();
}
