#include "switch.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

/* Exercjcjo 72
Um determinado clube de futebol pretende classificar seus atletas em categorias
e para isto ele contratou um programador para criar um programa que
executasse esta tarefa. Para isso o clube criou uma tabela que continha a faixa
et�ria do atleta e sua categoria. A tabela est� demonstrada abaixo:
IDADE CATEGORIA
De 05 a 10 Infantil
De 11 a 15 Juvenil
De 16 a 20 Junior
De 21 a 25 Profissional
Construa um programa que solicite o nome e a idade de um atleta e imprima a
sua categoria. */
void Switch::clubeFutebol(){
    char nome[20];
    int idade;

    printf("Informe o nome do atleta: ");
    scanf("%s", &nome);
    printf("Infome a idade: ");
    scanf("%i", &idade);

    switch(idade){
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            printf("\nInfantil\n");
            break;
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            printf("\nJuvenil\n");
            break;
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
            printf("\nJunior\n");
            break;
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
            printf("\nProfissional\n");
            break;
        default:
            printf("\nIdade invalida...\n");
            exit(0);
    }
}

/* Exercicio 73
Fa�a um programa, utilizando estrutura de condi��o, que receba um n�mero
real, digitado pelo usu�rio e mostre o menu para selecionar o tipo de c�lculo que
deve ser realizado:
101-Raiz quadrada
102-A metade
103-10% do n�mero
104-O dobro
Escolha a op��o: */
void Switch::menuOperacoes(){
    int numero, op;
    float result;

    printf("Informe um numero: ");
    scanf("%i", &numero);

    printf("\n(101) - Raiz Quadrada");
    printf("\n(102) - A metade");
    printf("\n(103) - 10 por cento do numero");
    printf("\n(104) - O dobro");
    printf("\nEscolha uma opcao: ");
    scanf("%i", &op);

    switch(op){
        case 101:
            result = sqrt(numero);
            break;
        case 102:
            result = numero / 2;
            break;
        case 103:
            result = numero * 0.10;
            break;
        case 104:
            result = numero * 2;
            break;
        default:
            printf("\nOpcao Invalida..\n");
            exit(0);
    }

    printf("\nResultado: %.2f\n", result);
}

/* Exercicio 74 e 75
O programa de uma loja de m�veis mostra o seguinte menu na tela de vendas:
1-Venda a Vista
2-Venda a Prazo 30 dias
3-Venda a Prazo 60 dias
4-Venda a Prazo com 90 dias
5-Venda com cart�o de d�bito
6-Venda com cart�o de cr�dito
Escolha a op��o:

Fa�a um programa que receba o valor da venda, escolha a condi��o de
pagamento no menu e mostre o total da venda final conforme condi��es a seguir:
Venda a Vista - desconto de 10%
Venda a Prazo 30 dias - desconto de 5%
Venda a Prazo 60 dias - mesmo pre�o
Venda a Prazo 90 dias - acr�scimo de 5%
Venda com cart�o de d�bito - desconto de 8%
Venda com cart�o de cr�dito - desconto de 7% */
void Switch::vendaLoja(){
    float valorVenda, totalVenda;
    int op;

    printf("1- Venda a Vista");
    printf("\n2- Venda a Prazo 30 dias");
    printf("\n3- Venda a Prazo 60 dias");
    printf("\n4- Venda a Prazo 90 dias");
    printf("\n5- Venda com cartao de debito");
    printf("\n6- Venda com cartao de credito");
    printf("\nEscolha a opcao: ");
    scanf("%i", &op);

    printf("\nInforme o valor da venda: ");
    scanf("%f", &valorVenda);

    switch(op){
        case 1:
            totalVenda = valorVenda - (valorVenda * 0.10);
            break;
        case 2:
            totalVenda = valorVenda - (valorVenda * 0.05);
            break;
        case 3:
            totalVenda = valorVenda;
            break;
        case 4:
            totalVenda = valorVenda + (valorVenda * 0.05);
            break;
        case 5:
            totalVenda = valorVenda - (valorVenda * 0.08);
            break;
        case 6:
            totalVenda = valorVenda - (valorVenda * 0.07);
            break;
        default:
            printf("\nOpcao invalida...\n");
            exit(0);
    }

    printf("\nValor final da Venda: %.2f\n", totalVenda);
}

/* Exercicio 76
Fa�a um algoritmo que receba uma data no formato DDMMAAAA e escreva qual
a esta��o do ano correspondente (Primavera, Ver�o, Outono, Inverno). */
void Switch::estacao(){
    int ano, mes, dia;
    char estacao[15];

    printf("Informe um dia: ");
    scanf("%i", &dia);
    printf("Informe um mes: ");
    scanf("%i", &mes);
    printf("Informe um ano: ");
    scanf("%i", &ano);

    if((dia > 19 && dia <= 31 && mes == 3) || (dia >= 1 && dia <= 31 && (mes == 4 || mes == 5)) || (dia >= 1 && dia < 21 && mes == 6)){
        strcpy(estacao, "Outono");
    }else if((dia > 20 && dia <= 31 && mes == 6) || (dia >= 1 && dia <= 31 && (mes == 7 || mes == 8)) || (dia >= 1 && dia < 23 && mes == 9)){
        strcpy(estacao, "Inverno");
    }else if((dia > 22 && dia <= 31 && mes == 9) || (dia >= 1 && dia <= 31 && (mes == 10 || mes == 11)) || (dia >= 1 && dia < 22 && mes == 12)){
        strcpy(estacao, "Primavera");
    }else{
        strcpy(estacao, "Verao");
    }

    printf("\nEstacao: %s\n", estacao);
}

/* Exercicio 77
Elaborar um algoritmo para imprimir o n�mero de dias de um dado m�s e ano.
Anos bissextos dever�o ser tratados convenientemente.
Dica: Anos bissextos s�o m�ltiplos de 4 e n�o s�o m�ltiplos de 100, exceto os
anos m�ltiplos de 400, que tamb�m s�o bissextos. */
void Switch::mesAno(){
    int mes, ano, qtdDias, bissexto;
    char *meses[12] = { "Jan","Fev","Mar","Abr","Mai","Jun","Jul","Ago","Set","Out","Nov","Dez" };

    printf("Informe o mes: ");
    scanf("%i", &mes);
    printf("Informe o ano: ");
    scanf("%i", &ano);

    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 9 || mes == 10 || mes == 12){
        qtdDias = 31;
    }else if(mes == 4 || mes == 6 || mes == 8 || mes == 11){
        qtdDias = 30;
    }else{
        if(ano % 4 == 0 || (ano % 100 == 0 && ano % 400 == 0)){
            qtdDias = 29;
        }else{
            qtdDias = 28;
        }
    }

    printf("\n%s: %i dias\n", meses[mes -1], qtdDias);
}

/* Exercicio 78
Fa�a um programa que l� quatro valores: I, A, B e C, onde I � um n�mero inteiro
e positivo e A, B, e C s�o quaisquer valores reais. O programa deve escrever os
valores lidos e:
� se I = 1, escrever os tr�s valores A, B e C em ordem crescente;
� se I = 2, escrever os tr�s valores A, B e C em ordem decrescente;
� se I = 3, escrever os tr�s valores A, B, e C de forma que o maior valor fique
entre os outros dois;
� se I n�o for um dos tr�s valores acima, dar uma mensagem indicando isto. */
void Switch::quatroValores(){
    int op, a, b, c;

    printf("\t\t\tMenu");
    printf("\n1- Ordem Crescente");
    printf("\n2- Ordem Decrescente");
    printf("\n3- Maior entre os outros dois");
    printf("\nEscolha uma opcao: ");
    scanf("%i", &op);

    printf("\nInforme um numero: ");
    scanf("%i", &a);
    printf("Informe outro numero: ");
    scanf("%i", &b);
    printf("Informe outro numero: ");
    scanf("%i", &c);

    switch(op){
        case 1:
            if(a < b && b < c){
                printf("\n%i %i %i\n", a, b, c);
            }else if(a < c && c < b){
                printf("\n%i %i %i\n", a, c, b);
            }else if(b < a && a < c){
                printf("\n%i %i %i\n", b, a, c);
            }else if(b < c && c > a){
                printf("\n%i %i %i\n", b, c, a);
            }else if(c < a && a < b){
                printf("\n%i %i %i\n", c, a, b);
            }else{
                printf("\n%i %i %i\n", c, b, a);
            }
            break;
        case 2:
            if(a > b && b > c){
                printf("\n%i %i %i\n", a, b, c);
            }else if(a > c && c > b){
                printf("\n%i %i %i\n", a, c, b);
            }else if(b > a && a > c){
                printf("\n%i %i %i\n", b, a, c);
            }else if(b > c && c > a){
                printf("\n%i %i %i\n", b, c, a);
            }else if(c > a && a > b){
                printf("\n%i %i %i\n", c, a, b);
            }else{
                printf("\n%i %i %i\n", c, b, a);
            }
            break;
        case 3:
            if(a > b && a > c){
                printf("\n%i %i %i\n", b, a, c);
            }else if(b > a && b > c){
                printf("\n%i %i %i\n", a, b, c);
            }else{
                printf("\n%i %i %i\n", a, c, b);
            }
            break;
        default:
            printf("\nOpcao invalida..\n");
            exit(0);
            break;
    }
}

/* Exercicio 79
Fa�a um algoritmo que leia a primeira letra do estado civil de uma pessoa e
mostre uma mensagem com a sua descri��o (Solteiro, Casado, Vi�vo,
Divorciado, Desquitado). Mostre uma mensagem de erro, se necess�rio. */
void Switch::estadoCivil(){
    char op;

    printf("S- Solteiro | C- Casado | V- Viuvo | D- Divorciado | E- Desquitado");
    printf("\n\nInforme o codigo do estado civil: ");
    scanf("%c", &op);

    switch(op){
        case 's':
        case 'S':
            printf("\nSolteiro(a)\n");
            break;
        case 'c':
        case 'C':
            printf("\nCasado(a)\n");
            break;
        case 'v':
        case 'V':
            printf("\nViuvo(a)\n");
            break;
        case 'd':
        case 'D':
            printf("\nDivorciado(a)\n");
            break;
        case 'e':
        case 'E':
            printf("\nDesquitado(a)\n");
            break;
        default:
            printf("\nOpcao invalida...\n");
            exit(0);
    }
}

/* Exercicio 80
Construa um algoritmo que leia um n�mero inteiro de 1 a 7 e informe o dia da
semana correspondente, sendo domingo o dia de n�mero 1. Se o n�mero n�o
corresponder a um dia da semana, mostre uma mensagem de erro. */
void Switch::diaSemana(){
    int dia;

    printf("Informe o numero do dia da semana: ");
    scanf("%i", &dia);

    switch(dia){
        case 1:
            printf("\nDomingo\n");
            break;
        case 2:
            printf("\nSegunda\n");
            break;
        case 3:
            printf("\nTerca\n");
            break;
        case 4:
            printf("\nQuarta\n");
            break;
        case 5:
            printf("\nQuinta\n");
            break;
        case 6:
            printf("\nSexta\n");
            break;
        case 7:
            printf("\nSabado\n");
            break;
        default:
            printf("\nCodigo invalido..\n");
            exit(0);
    }
}

/* Exercicio 81
Crie um algoritmo para ler uma letra do alfabeto e mostrar uma mensagem: se � vogal ou consoante. */
void Switch::vogalConsoante(){
    char letra;

    printf("Informe uma letra: ");
    scanf("%c", &letra);

    if((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z')){
        switch(letra){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("\nLetra informada e uma vogal...\n");
                break;
            default:
                printf("\nLetra informada e uma consoante...\n");
                break;
        }
    }else{
        printf("\nCaracter informado invalido...\n");
    }
}

/* Exercicio 82
Construa um algoritmo que, tendo como dados de entrada o pre�o de um
produto e um c�digo de origem, mostre o pre�o junto de sua proced�ncia (ex.
500,00 � Sul). Caso o c�digo n�o seja nenhum dos especificados, o produto
deve ser encarado como importado.
C�digo de origem
1 � Sul 5 ou 6 � Nordeste
2 � Norte 7 ou 8 ou 9 � Sudeste
3 � Leste 10 at� 20 � Centro Oeste
4 � Oeste 25 at� 35 � Nordeste */
void Switch::precoProduto(){
    float preco;
    int op;
    char regiao[15];

    printf("Informe o valor: ");
    scanf("%f", &preco);
    printf("Informe o codigo da regiao: ");
    scanf("%i", &op);

    switch(op){
        case 1:
            strcpy(regiao, "Sul");
            break;
        case 2:
            strcpy(regiao, "Norte");
            break;
        case 3:
            strcpy(regiao, "Leste");
            break;
        case 4:
            strcpy(regiao, "Oeste");
            break;
        case 5:
        case 6:
            strcpy(regiao, "Nordeste");
            break;
        case 7:
        case 8:
        case 9:
            strcpy(regiao, "Sudeste");
            break;
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
            strcpy(regiao, "Centro Oeste");
            break;
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
        case 31:
        case 32:
        case 33:
        case 34:
        case 35:
            strcpy(regiao, "Nordeste");
            break;
        default:
            printf("\nProduto importado...\n");
            exit(0);
    }

    printf("\nValor Produto: %.2f. Regiao: %s\n", preco, regiao);
}

/* Exercicio 83
Crie um algoritmo para uma calculadora utilizando a instru��o escolha-caso para
determinar a opera��o que deve ser executada, conforme o usu�rio escolher no
menu de op��es. Conforme a op��o escolhida pelo usu�rio, uma opera��o
diferente da calculadora deve ser executada. */
void Switch::calculadora(){
    char op;
    int valor1, valor2;
    float result;

    printf("Informe a operacao: ");
    scanf("%c", &op);
    printf("Informe o primeiro valor: ");
    scanf("%i", &valor1);
    printf("Informe o segundo valor: ");
    scanf("%i", &valor2);

    switch(op){
        case '+':
            result = valor1 + valor2;
            break;
        case '-':
            result = valor1 - valor2;
            break;
        case '*':
            result = valor1 * valor2;
            break;
        case '/':
            result = valor1 / valor2;
        case '%':
            result = valor1 % valor2;
        default:
            printf("\nOperacao invalida...\n");
            exit(0);
    }

    printf("\nResultado: %.2f\n", result);
}

/* Exercicio 84
Crie um algoritmo que execute as funcionalidades da conta-corrente de uma
pessoa. Toda a conta tem um n�mero, uma pessoa vinculada e um saldo. O
saldo � atualizado conforme o tipo de movimenta��o banc�ria: dep�sito ou
retirada. Se for um dep�sito, o dinheiro � creditado ao saldo; se for retirada, o
dinheiro � debitado do saldo. */
void Switch::contaCorrente(){
    const float SALDO = 1000;
    char nome[30], conta[10], op;
    float valor, novoSaldo;

    printf("D- Deposito | S- Saque");
    printf("\n\nInforme o nome: ");
    scanf("%s", &nome);
    printf("Informe o numero da conta: ");
    scanf("%s", &conta);
    printf("Informe o tipo da operacao: ");
    scanf("%c", &op);
    printf("Informe o valor da operacao: ");
    scanf("%f", &valor);

    switch(op){
        case 'd':
        case 'D':
            novoSaldo = SALDO + valor;
            break;
        case 's':
        case 'S':
            novoSaldo = SALDO - valor;
            break;
        default:
            printf("\nOperacao invalida...\n");
            exit(0);
    }

    printf("\nCorrentista: %s", nome);
    printf("\nConta: %s", conta);
    printf("\nSaldo Anterior: R$%.2f", SALDO);
    printf("\nSaldo Atual: R$%.2f\n", novoSaldo);
}

/* Exercicio 85
Fa�a um algoritmo para o jogo �pedra-papel-tesoura�. O jogo deve imprimir
vit�ria, empate ou derrota conforme a op��o que o jogador escolher e a op��o
que for sorteada aleatoriamente pelo computador. Obs.: pedra ganha de tesoura;
que ganha de papel; que ganha de pedra. */
void Switch::pedraPapelTesoura(){
    int numero;

    srand(time(NULL));
    int sorteio = rand() % 5;

    printf("Digite um numero de 1 a 5: ");
    scanf("%i", &numero);

    if(numero == sorteio){
        printf("\nEmpate\n");
    }else if(numero > sorteio){
        printf("\nVitoria\n");
    }else{
        printf("\nDerrota\n");
    }
}

/* Exercicio 86
Crie um algoritmo chamado Estacoes. Este algoritmo deve ler uma data e
armazenar na vari�vel mes um n�mero entre 1 e 12, correspondendo a um dos
meses do ano. No final, voc� deve imprimir uma mensagem conforme o exemplo:
"A esta��o do ano correspondente ao m�s 3 � Ver�o"
Considere a esta��o prevalente para cada m�s:
a) Janeiro (1): Ver�o
b) Fevereiro (2): Ver�o
c) Mar�o (3): Ver�o
d) Abril (4): Outono
e) Maio (5): Outono
f) Junho (6): Outono
g) Julho (7): Inverno
h) Agosto (8): Inverno
i) Setembro (9): Inverno
j) Outubro (10): Primavera
k) Novembro (10): Primavera
l) Dezembro (10): Primavera */
void Switch::estacoes(){
    int mes;

    printf("Informe o numero do mes: ");
    scanf("%i", &mes);

    switch(mes){
        case 1:
        case 2:
        case 3:
            printf("\nVerao\n");
            break;
        case 4:
        case 5:
        case 6:
            printf("\nOutono\n");
            break;
        case 7:
        case 8:
        case 9:
            printf("\nInverno\n");
            break;
        case 10:
        case 11:
        case 12:
            printf("\nPrimavera\n");
            break;
        default:
            printf("\nMes invalido..\n");
            exit(0);
    }
}

/* Exercicio 87
Crie um algoritmo que solicita ao usu�rio para digitar um n�mero e mostra-o por
extenso. Este n�mero deve variar entre 1 e 10. Se o usu�rio introduzir um
n�mero que n�o est� neste intervalo, mostre: "N�mero inv�lido". */
void Switch::numeroExtenso(){
    int numero;

    printf("Digite um numero entre 1 e 10: ");
    scanf("%i", &numero);

    switch(numero){
        case 1:
            printf("\nUm\n");
            break;
        case 2:
            printf("\nDois\n");
            break;
        case 3:
            printf("\nTres\n");
            break;
        case 4:
            printf("\nQuatro\n");
            break;
        case 5:
            printf("\nCinco\n");
            break;
        case 6:
            printf("\nSeis\n");
            break;
        case 7:
            printf("\nSete\n");
            break;
        case 8:
            printf("\n\Oito\n");
            break;
        case 9:
            printf("\nNove\n");
            break;
        case 10:
            printf("\nDez\n");
            break;
        default:
            printf("\nNumero invalido..\n");
            exit(0);
    }
}
