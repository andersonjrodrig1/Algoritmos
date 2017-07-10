#include "vetor.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
void Vetor::loteriaEsportiva(){
    int sorteados[] = {29, 1, 23, 6, 38, 18, 27, 2, 33, 35, 45, 52, 59};
    int tamVet = sizeof(sorteados)/sizeof(int);
    int aposta[tamVet], acertos = 0;
    srand(time(NULL));

    cout << "Numeros Sorteados: ";
    for(int i = 0; i < tamVet; i++){
        cout << sorteados[i] << " ";
    }

    cout << "\nApostador Randomico: ";
    for(int i = 0; i < tamVet; i++){
        aposta[i] = rand() % 60;
    }

    for(int i = 0; i < tamVet; i++){
        cout << aposta[i] << " ";
    }

    for(int i = 0; i < tamVet; i++){
        for(int j = 0; j < tamVet; j++){
            if(sorteados[i] == aposta[j]){
                acertos++;
                break;
            }
        }
    }

    cout << "\n\nNome: Apostador Randomico" << endl;
    cout << "Quantidade de acertos: " << acertos << endl;

    if(acertos == tamVet){
        cout << "Ganhador, PARABENS\n" << endl;
    }
}

/*
Fa�a um algoritmo para somar duas matrizes.
*/
void Vetor::somaMatriz(){
    const int LINHA = 4;
    const int COLUNA = 5;

    int matUm[LINHA][COLUNA] = {1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2};
    int matDois[LINHA][COLUNA] = {4,2,6,3,6,8,9,4,2,5,8,5,3,4,7,9,3,6,8,9};
    int matTres[LINHA][COLUNA];

    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            matTres[i][j] = matUm[i][j] + matDois[i][j];
        }
    }

    for(int i = 0; i < LINHA; i++){
        cout << "\nLinha " << i << ": ";
        for(int j = 0; j < COLUNA; j++){
            cout << matTres[i][j] << " ";
        }
    }
}

/*
Fa�a um algoritmo para calcular a transposta de uma matriz.
*/
void Vetor::transpostaMatriz(){
    const int LINHA = 4;
    const int COLUNA = 5;

    int matriz[LINHA][COLUNA] = {1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2};
    int matTransposta[COLUNA][LINHA];
    int x = 0, y = 0;

    cout << "Matriz: ";
    for(int i = 0; i < LINHA; i++){
        cout << "\n";
        for(int j = 0; j < COLUNA; j++){
            cout << matriz[i][j] << " ";
        }
    }

    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            matTransposta[x][y] = matriz[i][j];
            x++;

            if(x == COLUNA){
                x = 0;
                y++;
            }
        }
    }

    cout << "\n\nMatriz Transposta: ";
    for(int i = 0; i < COLUNA; i++){
        cout << "\n";
        for(int j = 0; j < LINHA; j++){
            cout << matTransposta[i][j] << " ";
        }
    }
}

/*
Fa�a um algoritmo que leia uma matriz mat 2 x 3 e imprima na tela a soma de todos os elementos da matriz mat.
*/
void Vetor::somaElementosMatriz(){
    const int LINHA = 2;
    const int COLUNA = 3;

    int mat[LINHA][COLUNA] = {23,43,57,99,33,75};

    cout << "Matriz: ";
    for(int i = 0; i < LINHA; i++){
        cout << "\n";
        for(int j = 0; j < COLUNA; j++){
            cout << mat[i][j] << " ";
        }
    }

    int soma = 0;
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            soma += mat[i][j];
        }
    }

    cout << "\n\nA soma da matriz: " << soma << endl;
}

/*
Fa�a um algoritmo que leia uma matriz mat 4 x 4,
e imprima na tela a soma dos elementos abaixo da diagonal principal da matriz mat.
*/
void Vetor::somaDiagonalPrincipalMatriz(){
    const int LINHA = 4;
    const int COLUNA = 4;

    int matriz[LINHA][COLUNA] = {23,43,57,99,33,75,28,38,28,59,25,18,27,86,62,89};
    int x = 0, y = 0, soma = 0;

    cout << "Matriz: ";
    for(int i = 0; i < LINHA; i++){
        cout << "\n";
        for(int j = 0; j < COLUNA; j++){
            cout << matriz[i][j] << " ";
        }
    }

    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            if(i == y && j == x){
                soma += matriz[i][j];
            }
        }
        y++;
        x++;
    }

    cout << "\n\nA soma dos elementos da diagonal principal da matriz: " << soma << endl;
}

/*
Escreva um algoritmo que l� uma matriz M(5,5) e calcule as somas:
a) da linha 4 de M;
b) da coluna 2 de M;
c) da diagonal principal;
d) da diagonal secund�ria;
e) de todos os elementos da matriz;
f) Escreva estas somas e a matriz
*/
void Vetor::somaMatrizCincoPorCinco(){
    const int LINHA = 5;
    const int COLUNA = 5;

    int matriz[LINHA][COLUNA] = {23,43,57,99,33,75,28,38,28,59,25,18,27,86,62,89,32,55,86,11,43,77,78,22,87};
    int somaLinha4 = 0, somaColuna2 = 0, somaDiagonalPrincipal = 0, somaDiagonalSecundaria = 0, somattl = 0;
    int a = 0, b = 0, x = 0, y = 0, z = 0, w = 0;

    cout << "Matriz: ";
    for(int i = 0; i < LINHA; i++){
        cout << "\n";
        for(int j = 0; j < COLUNA; j++){
            cout << matriz[i][j] << " ";
        }
    }

    w = LINHA -1;
    b = COLUNA -4;
    a = LINHA -2;

    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            if(i == a){
                somaLinha4 += matriz[i][j];
            }

            if(j == b){
                somaColuna2 += matriz[i][j];
            }

            if(i == y && j == x){
                somaDiagonalPrincipal += matriz[i][j];
            }

            if(i == z && j == w){
                somaDiagonalSecundaria += matriz[i][j];
            }

            somattl += matriz[i][j];
        }

        y++;
        x++;
        z++;
        w--;
    }

    cout << "\n\nSoma da linha 4: " << somaLinha4 << endl;
    cout << "Soma da coluna 2: " << somaColuna2 << endl;
    cout << "Soma Diagonal Principal: " << somaDiagonalPrincipal << endl;
    cout << "Soma Diagonal Secundaria: " << somaDiagonalSecundaria << endl;
    cout << "Soma da Matriz: " << somattl << endl;
}
