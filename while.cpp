#include "while.h"
#include <stdlib.h>
#include <stdio.h>

/*
Exercicio 106
Fa�a um algoritmo que leia um conjunto de n�meros (X) e imprima sua soma
(Soma) e sua m�dia (Media). Admita que o valor 9999 � utilizado como sentinela
para fim de leitura.
Ex.: 1, 2, 3 => Soma=6 Media=2
*/
void While::conjuntoNumeros(){
    const int SENTINELA = 9999;
    int soma = 0, media = 0, numero, cont = 0;

    do{
        system("cls");
        printf("Para sair digite 9999");
        printf("\n\nInforme um numero: ");
        scanf("%i", &numero);

        if(numero != SENTINELA){
            soma += numero;
            cont++;
        }

    }while(numero != SENTINELA);

    media = soma / cont;

    printf("\nSoma: %i", soma);
    printf("\nMedia: %i\n", media);
}

/*
Exercicio 107
Fa�a um algoritmo que leia um conjunto de dados num�ricos (X) e imprima o
maior (Maximo) dentre eles. Admita que o valor 9999 � utilizado como sentinela.
Ex.: 1, 2, 3 => Maior=3
*/
void While::conjuntoNumerosMaior(){
    const int SENTINELA = 9999;
    int maior = 0, numero;

    do{
        system("cls");
        printf("Para sair digite 9999");
        printf("\n\nInforme um numero: ");
        scanf("%i", &numero);

        if(numero != SENTINELA){
            if(numero > maior){
                maior = numero;
            }
        }
    }while(numero != SENTINELA);

    printf("\nMaior numero digitado: %i\n", maior);
}

/*
Exercicio 108
Fa�a um algoritmo que leia dois n�meros inteiros positivos (Num1 e Num2) e
imprima o quociente (Quoc) e o resto (Resto) da divis�o de Num1 por Num2,
utilizando apenas as opera��es de adi��o e subtra��o.
Ex.: N1=10; N2=2 => Q=5 R=0
*/
void While::quocienteResto(){
    int dividendo, divisor;
    float quociente = 0;

    printf("Informe um numero inteiro positivo: ");
    scanf("%i", &dividendo);
    printf("Informe outro numero inteiro positivo: ");
    scanf("%i", &divisor);

    while(dividendo >= divisor){
        quociente++;
        dividendo -= divisor;
    }

    printf("\nQuociente: %.0f\nResto: %i\n", quociente, dividendo);
}
