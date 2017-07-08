#include "vetor.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

/*
Fa�a um algoritmo que copie o conte�do de um vetor em um segundo vetor.
*/
void Vetor::copiaVetor(){
    int primeiroVet[] = {1,2,3,4,5,6,7,8,9,0};
    int tam = sizeof(primeiroVet)/sizeof(int);
    int segundoVet[tam];

    for(int i = 0; i < tam; i++){
        segundoVet[i] = primeiroVet[i];
    }

    for(int i = 0; i < tam; i++){
        cout << segundoVet[i] << " ";
    }
}

/*
Fa�a um algoritmo que some o conte�do de dois vetores e armazene o resultado em um terceiro vetor.
*/
void Vetor::somaVetor(){
    const int TAMANHO = 10;

    int vetUm[] = {1,2,3,4,5,6,7,8,9,10};
    int vetDois[] = {2,5,3,7,5,7,3,7,8,3};
    int vetTres[TAMANHO];

    for(int i = 0; i < TAMANHO; i++){
        vetTres[i] = vetUm[i] + vetDois[i];
    }

    for(int i = 0; i < TAMANHO; i++){
        cout << vetTres[i] << " ";
    }
}

/*
Fa�a um algoritmo que fa�a a uni�o de dois vetores de mesmo tamanho e mesmo tipo em um terceiro vetor com dobro do tamanho.
*/
void Vetor::uniaoVetores(){
    const int TAMANHO = 20;

    int vetUm[] = {1,2,3,4,5,6,7,8,9,10};
    int vetDois[] = {2,5,3,7,5,7,3,7,8,3};
    int vetTres[TAMANHO];

    for(int i = 0; i < TAMANHO; i++){
        if(i < TAMANHO / 2){
            vetTres[i] = vetUm[i];
        }else{
            vetTres[i] = vetDois[i - (TAMANHO / 2)];
        }
    }

    for(int i = 0; i < TAMANHO; i++){
        cout << vetTres[i] << " ";
    }
}

/*
Escrever um algoritmo que l� um vetor N(20) e o escreve. Troque, a seguir, o 1�
elemento com o �ltimo, o 2� com o pen�ltimo etc. at� o 10� com o 11� e escreva o vetor N assim modificado.
*/
void Vetor::inverteVetor(){
    int vet[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int TAMANHO = sizeof(vet)/sizeof(int);

    cout << "Vetor: " << endl;
    for(int i = 0; i < TAMANHO; i++){
        cout << vet[i] << " ";
    }

    int novoVet[TAMANHO];

    for(int i = 0; i < TAMANHO; i++){
        novoVet[i] = vet[(TAMANHO -1) -i];
    }

    cout << "\n\nVetor Invertido: " << endl;
    for(int i = 0; i < TAMANHO; i++){
        cout << novoVet[i] << " ";
    }
}

/*
Escrever um algoritmo que l� um vetor G(13) que � o gabarito de um teste de
loteria esportiva, contendo os valores 1 (coluna 1), 2 (coluna 2) e 3 (coluna do
meio). Ler, a seguir, para cada apostador, o n�mero de seu cart�o e um vetor Resposta R (13).
Verificar para cada apostador o n�mero de acertos e escrever o n�mero do apostador e seu n�mero de acertos.
Se tiver 13 acertos, acrescentar a mensagem: "GANHADOR, PARABENS".
*/
