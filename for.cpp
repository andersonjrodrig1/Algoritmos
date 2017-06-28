#include "for.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Exercicio 88
Some os números de 1 a 100 e imprima o valor.*/
void For::somaNumeros(){
    int soma;

    for(int i = 0; i <= 100; i++){
        soma += i;
    }

    printf("A soma e %i", soma);
}

/* Exercicio 89
Construa um Algoritmo que, para um grupo de 50 valores inteiros, determine:
a) A soma dos números positivos;
b) A quantidade de valores negativos; */
void For::grupoValores(){
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

/* Exercicio 90
Faça um algoritmo que imprima os múltiplos positivos de 7, inferiores a 1000. */
void For::multiplosSete(){
    const int MAX = 1000;

    for(int i = 0; i <= MAX; i++){
        if(i % 7 == 0){
            printf("%i ", i);
        }
    }
}

/* Exercicio 91
Faça um algoritmo que imprima todos os números pares compreendidos entre
85 e 907. O algoritmo deve também calcular a soma destes valores. */
void For::imprimePares(){
    const int MAX = 907;

    for(int i = 85; i <= MAX; i++){
        if(i % 2 == 0){
            printf("%i ", i);
        }
    }
}

/* Exercicio 92
Faça um algoritmo que calcule o valor de A, dado por:
A = N + (N-1)/2 + (N-2)/3 + ... + 1/N,
onde N é um número inteiro positivo. */
void For::calculoValor(){
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

/* Exercicio 93
Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria
qualquer preço. O monge, necessitando de alimentos, indagou à rainha sobre o
pagamento, se poderia ser feito com grãos de trigo dispostos em um tabuleiro de
xadrez (que possui 64 casas), de tal forma que o primeiro quadro deveria conter
apenas um grão e os quadros subsequentes, o dobro do quadro anterior. Crie um
algoritmo para calcular o total de grãos que o monge recebeu. */
void For::tabuleiro(){
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

/* Exercicio 94
Dado o conjunto de instruções a seguir, faça um algoritmo com quatro variações,
colocando o comando de repetição adequadamente, de forma a:
a) Executar o conjunto 10 vezes;
b) Não executar nenhuma vez;
c) Executar o conjunto 100 vezes utilizando duas estruturas de repetição;
d) Executar N vezes, onde N é uma variável informada pelo usuário.
- Ler A, B
- Modulo = A mod B (calcula o resto da divisão) */
void For::conjuntoInstrucoes(){
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

/* Exercicio 95
Para uma turma de 45 alunos, construa um algoritmo que determine:
a) A idade média dos alunos com menos de 1,70m de altura;
b) A altura média dos alunos com mais de 20 anos. */
void For::mediaTurma(){
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

/* Exercicio 96
Escreva um algoritmo que calcule o produto dos inteiros ímpares de 1 a 15 e,
então, exiba os resultados. */
void For::produtoImpares(){
    const int MAX = 15;
    int produto = 1;

    for(int i = 1; i <= MAX; i++){
        if(i % 2 != 0){
            produto *= i;
        }
    }

    printf("O produto dos impares entre 1 e %i: %i\n", MAX, produto);
}

/* exercicio 97
Faça um algoritmo que leia um número e imprima a sua tabela de multiplicação de 1 até 13. */
void For::tabelaNumero(){
    const int MAX = 13;
    int numero, produto;

    printf("Informe um numero: ");
    scanf("%i", &numero);

    for(int i = 1; i <= MAX; i++){
        printf("\n%i x %i = %i", numero, i, (numero * i));
    }
}

/* exercicio 98
Escreva um algoritmo que calcule os quadrados e cubos dos números de 0 a 10
e imprima os valores resultantes no formato de tabela. */
void For::quadradoCubo(){
    const int MAX = 10;

    printf("Numero\t\tQuadrado\tCubo");

    for(int i = 1; i <= MAX; i++){
        printf("\n%i\t\t%.0f\t\t%.0f", i, pow(i,2), pow(i,3));
    }
}

/* Exercicio 99
Faça um algoritmo que calcule a média de salários de uma empresa, pedindo ao
usuário a quantidade de funcionários, o nome e o salário de cada funcionário e
devolvendo a média, o salário mais alto e o salário mais baixo.*/
void For::mediaSalario(){
    const float SALARIO = 3000.00;
    int qtdFuncionarios, contSalAlto = 0, contSalBaixo = 0;
    char nome[30];
    float mediaSalAltos, mediaSalBaixos = 0, salAlto = 0, salBaixo, salario;

    printf("Informe a quantidade de funcionarios: ");
    scanf("%i", &qtdFuncionarios);

    for(int i = 1; i <= qtdFuncionarios; i++){
        printf("\nNome do Funcionario %i: ", i);
        scanf("%s", &nome);
        printf("Informe o salario: ");
        scanf("%f", &salario);

        if(salario >= SALARIO){
            salAlto += salario;
            contSalAlto++;
        }else{
            salBaixo += salario;
            contSalBaixo++;
        }
    }

    mediaSalAltos = salAlto / contSalAlto;
    mediaSalBaixos = salBaixo / contSalBaixo;

    printf("\nMedia salarios mais altos: %.2f", mediaSalAltos);
    printf("\nMedia salarios mais baixos: %.2f\n", mediaSalBaixos);
}

/* Exercicio 100
Crie um programa que peça 10 números inteiros e apresente: a média, o maior e o menor. */
void For::mediaMaiorMenor(){
    const int MAX = 10;
    float media, soma = 0;
    int maior, menor, numero;

    for(int i = 0; i < MAX; i++){
        printf("Informe o %i numero: ", i +1);
        scanf("%i", &numero);

        soma += numero;

        if(i == 0){
            maior = numero;
            menor = numero;
        }

        if(numero < menor){
            menor = numero;
        }

        if(numero > maior){
            maior = numero;
        }
    }

    media = soma / MAX;

    printf("\nMedios dos numeros digitados: %.2f", media);
    printf("\nMaior numero: %i", maior);
    printf("\nMenor numero: %i\n", menor);
}

/* Exercicio 101
Escreva um algoritmo que determine o fatorial de um número. Para este
problema, tem-se como entrada o valor do número do qual se deseja calcular o
fatorial. O fatorial de 0 é igual a 1. O fatorial de um número N(N!) é definido
conforme a seguir:
N! = 1 * 2 * 3 * 4 * ... * (N-1) * N */
void For::fatorialNumero(){
    int numero, fat = 1;

    printf("Informe um numero: ");
    scanf("%i", &numero);

    if(numero != 0){
        for(int i = 1; i <= numero; i++){
            fat *= i;
        }
    }

    printf("\nFatorial de %i: %li\n", numero, fat);
}

/*Exercicio 102
102. Um hotel com 30 quartos cobra R$ 50,00 por diária e mais uma taxa de
serviços. A taxa de serviços é de:
• R$ 4,00 por diária, se o número de diárias for < 15;
• R$ 3,60 por diária, se o número de diárias for = 15;
• R$ 3,00 por diária, se o número de diárias for > 15.
Faça um algoritmo que imprima o nome e o total da conta de cada cliente do hotel.
Imprima também o total ganho pelo hotel. */
void For::contaHotel(){
    const float VALOR = 50.00;
    char nome[30];
    int diarias;
    float totalConta = 0, totalDiarias = 0;

    printf("Informe o nome do cliente: ");
    gets(nome);
    printf("Informe a quantidades de diarias: ");
    scanf("%i", diarias);

    if(diarias < 15){
        totalDiarias = diarias * 4.00;
    }else if(diarias == 15){
        totalDiarias = diarias * 3.60;
    }else{
        totalDiarias = diarias * 3.00;
    }

    totalConta = diarias * VALOR;
    totalConta += totalDiarias;

    printf("\nNome cliente: %s", nome);
    printf("\nTotal da conta: %.2f\n", totalConta);
}

/* Exercicio 103
Um determinado material radioativo perde metade de sua massa a cada 50
segundos. Dada a massa inicial, em gramas, faça um programa que determine o
tempo necessário para que essa massa se torne menor que 0,05 gramas. */
void For::perdaMassa(){
    const float MIN_MASSA = 0.05;
    float massa;
    int tempo = 0, minuto, segundo;
    char strMin[2], strSeg[2];

    printf("Informe a massa do material radioativo em gramas: ");
    scanf("%f", &massa);

    while(massa > MIN_MASSA){
        massa /= 2;
        tempo += 50;
    }

    minuto = tempo / 60;
    segundo = tempo % 60;

    printf("\nTempo que massa tornou menor que %.2f: %i:%i minutos.\n", MIN_MASSA, minuto, segundo);
}

/* Exercicio 104
Sem utilizar a operação de multiplicação, escreva um programa que multiplique
dois números inteiros. Por exemplo: 2 * 2 = 2 + 2. */
void For::multiplicarSemMultiplicacao(){
    int result = 0, num1, num2;

    printf("Informe o primeiro numero: ");
    scanf("%i", &num1);
    printf("Informe o segundo numero: ");
    scanf("%i", &num2);

    for(int i = 0; i < num1; i++){
        result += num2;
    }

    printf("\nResultado: %i\n", result);
}

/* Exercicio 105
A série de Fibonacci é formada pela sequência:
0, 1, 1, 2, 3, 5, 8, 13, 21, ...
Construa um algoritmo que gere e mostre a série até o vigésimo termo. */
void For::Fibonacci(){
    int numero, a = 0, b = 1, c = 0;

    printf("Informe um numero: ");
    scanf("%i", &numero);

    for(int i = 0; i < numero; i++){
        printf("%i ", c);
        c = b + a;
        a = b;
        b = c;
    }
}
