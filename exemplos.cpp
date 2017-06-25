#include "exemplos.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Exercicio 88
Some os números de 1 a 100 e imprima o valor.*/
void Exemplos::somaNumeros(){
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

/* Exercicio 90
Faça um algoritmo que imprima os múltiplos positivos de 7, inferiores a 1000. */
void Exemplos::multiplosSete(){
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
void Exemplos::imprimePares(){
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

/* Exercicio 93
Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria
qualquer preço. O monge, necessitando de alimentos, indagou à rainha sobre o
pagamento, se poderia ser feito com grãos de trigo dispostos em um tabuleiro de
xadrez (que possui 64 casas), de tal forma que o primeiro quadro deveria conter
apenas um grão e os quadros subsequentes, o dobro do quadro anterior. Crie um
algoritmo para calcular o total de grãos que o monge recebeu. */
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

/* Exercicio 94
Dado o conjunto de instruções a seguir, faça um algoritmo com quatro variações,
colocando o comando de repetição adequadamente, de forma a:
a) Executar o conjunto 10 vezes;
b) Não executar nenhuma vez;
c) Executar o conjunto 100 vezes utilizando duas estruturas de repetição;
d) Executar N vezes, onde N é uma variável informada pelo usuário.
- Ler A, B
- Modulo = A mod B (calcula o resto da divisão) */
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

/* Exercicio 95
Para uma turma de 45 alunos, construa um algoritmo que determine:
a) A idade média dos alunos com menos de 1,70m de altura;
b) A altura média dos alunos com mais de 20 anos. */
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

/* Exercicio 96
Escreva um algoritmo que calcule o produto dos inteiros ímpares de 1 a 15 e,
então, exiba os resultados. */
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

/* exercicio 97
Faça um algoritmo que leia um número e imprima a sua tabela de multiplicação de 1 até 13. */
void Exemplos::tabelaNumero(){
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
void Exemplos::quadradoCubo(){
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
void Exemplos::mediaSalario(){
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
