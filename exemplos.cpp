#include "exemplos.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//exercicio 88
void Exemplos::somaNumeros(){
    int soma;

    for(int i = 0; i <= 100; i++){
        soma += i;
    }

    printf("A soma e %i", soma);
}

//exercicio 89
void Exemplos::grupoValores(){
    int valores[50] = {
        1,2,-2,10,38,9,-22,99,-99,20,-35,-40,-9,
        30,43,67,-78,73,39,-79,67,21,-12,12,13,
        14,-41,14,15,-16,17,18,-19,17,16,88,-88,
        89,81,-18,-66,67,-87,90,94,-22,99,76,77,-55
    };

    int somaPositivos = 0, qtdNegativos = 0;
    int tamVet = sizeof(valores)/sizeof(int);

    for(int i = 0; i < tamVet; i++){
        if(valores[i] >= 0){
            somaPositivos += valores[i];
        }else{
            qtdNegativos++;
        }
    }

    printf("\nSoma dos Positivos: %i", somaPositivos);
    printf("\nQuantidade de Negativos: %i\n", qtdNegativos);
}

//exercicio 90
void Exemplos::multiplosSete(){
    const int MAX = 1000;

    for(int i = 0; i <= MAX; i++){
        if(i % 7 == 0){
            printf("%i ", i);
        }
    }
}

//exercicio 91
void Exemplos::imprimePares(){
    const int MAX = 907;

    for(int i = 85; i <= MAX; i++){
        if(i % 2 == 0){
            printf("%i ", i);
        }
    }
}

//exercicio 92
void Exemplos::calculoValor(){
    int n = 0, div = 1;
    float a = 0;

    printf("Informe um valor: ");
    scanf("%i", &n);

    for(int i = 0; i < n; i++){
        a += (n - i) / div;
        div++;
    }

    printf("\nValor de A: %.0f\n", a);
}

//exercicio 93
void Exemplos::tabuleiro(){
    const int TAB = 64;
    long graos = 1;

    for(int i = 0; i < TAB; i++){
        graos += graos;
    }

    printf("\nQuantidade de graos: %l\n", graos);
}

int primeiraInstrucao(){
    int valor = 0;

    for(int i = 0; i < 10; i++){
        valor += i;
    }

    return valor;
}

int segundaInstrucao(){
    int valor = 0;

    //sem execuçao do for conforme solicitado na atividade

    return valor;
}

int terceiraInstrucao(){
    int valor = 0;

    for(int i = 0; i < 100; i++){
        valor += i;
    }

    return valor;
}

int quartaInstrucao(){
    int valor, soma = 0;

    printf("Informe um valor: ");
    scanf("%i", &valor);

    for(int i = 0; i < valor; i++){
        soma += valor;
    }

    return soma;
}

int quintaInstrucao(){
    int valorA, valorB, resto;

    printf("Informe o valor de A: ");
    scanf("%i", &valorA);
    printf("Informe o valor de B: ");
    scanf("%i", &valorB);

    resto = valorA % valorB;
}

//exercicio 94
void Exemplos::conjuntoInstrucoes(){
    int mUm = primeiraInstrucao();
    int mDois = segundaInstrucao();
    int mTres = terceiraInstrucao();
    int mQuatro = quartaInstrucao();
    int mCinco = quintaInstrucao();

    printf("\n1 instrucao: %i", mUm);
    printf("\n2 instrucao: %i", mDois);
    printf("\n3 instrucao: %i", mTres);
    printf("\n4 instrucao: %i", mQuatro);
    printf("\n5 instrucao: %i\n", mCinco);
}

//exercicio 95
void Exemplos::mediaTurma(){
    const int TURMA = 10;
    int contAltura = 0, contIdade = 0;
    float mediaIdade = 0, mediaAltura = 0, somaIdade = 0, somaAltura = 0, idade, altura;

    for(int i = 0; i < TURMA; i++){
        printf("Informe a idade do aluno %i: ", (i+1));
        scanf("%f", &idade);
        printf("Informe a altura do aluno %i: ", (i+1));
        scanf("%f", &altura);

        if(idade > 20){
            somaIdade += idade;
            contIdade++;
        }

        if(altura < 1.72){
            somaAltura += altura;
            contAltura++;
        }
    }

    mediaIdade = somaIdade / contIdade;
    mediaAltura = somaAltura / contAltura;

    printf("\nA media de idade de %i aluno(s) com idade maior que 20: %.2f", contIdade, mediaIdade);
    printf("\nA media de altura de %i aluno(s) com altura menor que 1,72: %.2f\n", contAltura, mediaAltura);
}

//exercicio 96
void Exemplos::produtoImpares(){
    const int MAX = 15;
    int produto = 1;

    for(int i = 1; i <= MAX; i++){
        if(i % 2 != 0){
            produto *= i;
        }
    }

    printf("O produto dos impares entre 1 e %i: %i\n", MAX, produto);
}

//exercicio 97
void Exemplos::tabelaNumero(){
    const int MAX = 13;
    int numero, produto;

    printf("Informe um numero: ");
    scanf("%i", &numero);

    for(int i = 1; i <= MAX; i++){
        printf("\n%i x %i = %i", numero, i, (numero * i));
    }
}

//exercicio 98
void Exemplos::quadradoCubo(){
    const int MAX = 10;

    printf("Numero\t\tQuadrado\tCubo");

    for(int i = 1; i <= MAX; i++){
        printf("\n%i\t\t%.0f\t\t%.0f", i, pow(i,2), pow(i,3));
    }
}
