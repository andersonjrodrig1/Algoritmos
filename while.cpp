#include "while.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;

/*
Exercicio 106
Faça um algoritmo que leia um conjunto de números (X) e imprima sua soma
(Soma) e sua média (Media). Admita que o valor 9999 é utilizado como sentinela
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
Faça um algoritmo que leia um conjunto de dados numéricos (X) e imprima o
maior (Maximo) dentre eles. Admita que o valor 9999 é utilizado como sentinela.
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
Faça um algoritmo que leia dois números inteiros positivos (Num1 e Num2) e
imprima o quociente (Quoc) e o resto (Resto) da divisão de Num1 por Num2,
utilizando apenas as operações de adição e subtração.
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

/*
Exercicio 109
Faça um algoritmo que leia um conjunto de números (X) e imprima a
quantidade de números pares (QPares) e a quantidade de números impares
(QImpares) lidos. Admita que o valor 9999 é utilizado como sentinela para fim de leitura.
Ex.: 1,2,3,4,5 => Pares=2 Impares=3
*/
void While::quantidadeParImpar(){
    const int SENTINELA = 9999;
    int numero, qtdPar = 0, qtdImpar = 0;

    do{
        system("cls");
        printf("Para Sair digite 9999");
        printf("\n\nInforme um numero: ");
        scanf("%i", &numero);

        if(numero != SENTINELA){
            if(numero % 2 == 0){
                qtdPar++;
            }else{
                qtdImpar++;
            }
        }
    }while(numero != SENTINELA);

    printf("\nQuantidade Par: %i\nQuantidade Impar: %i\n", qtdPar, qtdImpar);
}
/*
Exercicio 110
Faça um algoritmo que calcule e imprime a soma dos inteiros de 1 a 10. Utilize
as estruturas ENQUANTO-FACA / REPITA-FACA para fazer um laço com as
instruções de cálculo e incremento. O laço deve terminar quando o valor de x se tornar 11.
*/
int While::calculaInteiros(){
    int soma = 0, cont = 1;

    while(cont < 11){
        soma += cont;
        cont++;
    }

    return soma;
}

/*
Exercicio 111
Foi feita uma pesquisa com um grupo de alunos de uma universidade, na qual
se perguntou para cada aluno o número de vezes que utilizou o restaurante da
universidade no último mês. Construa um algoritmo que determine:
a) O percentual de alunos que utilizaram menos que 10 vezes o restaurante;
b) O percentual de alunos que utilizaram entre 10 e 15 vezes;
c) O percentual de alunos que utilizaram o restaurante acima de 15 vezes.
Ex.: 2, 3, 11, 12, 21, 22, 23 = a) 28%; b) 28%; c) 42%
*/
void While::refeitorioUniversidade(){
    int qtdAlunos, qtdRefeitorio, qtdTotal = 0, menor10 = 0, entre1015 = 0, maior15 = 0;

    printf("Informe a quantidade de alunos para pesquisa: ");
    scanf("%i", &qtdAlunos);

    while(qtdAlunos > 0){
        printf("Quantidade de vezes que usou refeitorio: ");
        scanf("%i", &qtdRefeitorio);

        if(qtdRefeitorio < 10){
            menor10++;
        }else if(qtdRefeitorio >= 10 && qtdRefeitorio < 16){
            entre1015++;
        }else{
            maior15++;
        }

        qtdTotal++;
        qtdAlunos--;
    }

    float percMenor10 = (menor10 / qtdTotal) * 100;
    float percEntre1015 = (entre1015 / qtdTotal) * 100;
    float percMaior15 = (maior15 / qtdTotal) * 100;

    printf("\nMenores que 10: %.2f%%", percMenor10);
    printf("\nEntre 10 e 15: %.2f%%", percEntre1015);
    printf("\nMaiores que 15: %.2f%%\n", percMaior15);
}

/*
Exercicio 112
Construa um algoritmo que, para a progressão geométrica 3; 9; 27; 81; ...;
6561, determine a soma de seus termos. Construa o algoritmo de maneira a não
utilizar a fórmula de soma dos termos. Faça com que o computador gere cada
um dos termos a ser somado.
Ex.: 3; 9; 27; 81; 243; 729; 2187; 6561 => 9840
*/
void While::progressaoMatematica(){
    const int LIMITE = 8;
    const int ORDEM = 3;
    int i = 1, soma = 0;
    float numero = 0;

    cout << "Progressao Geometrica: 3 9 27 81 243 729 2187 6561" << endl;

    while(i <= LIMITE){
        numero = pow(ORDEM, i);
        soma += (int)numero;
        i++;
    }

    cout << "\nSoma da Progressao Geometrica: " << soma << endl;
}

/*
Exercicio 113
Crie um algoritmo que peça o nome, a altura e o peso de duas pessoas e
apresente o nome e peso da mais pesada e o nome e altura da mais alta.
*/
void While::pesoAlturaPessoas(){
    char *nome[2];
    float peso[2], altura[2];
    int i = 0;

    while(i < 2){
        cout << "Informe o nome: ";
        cin >> nome[i];
        cout << "Informe o peso: ";
        cin >> peso[i];
        cout << "Informe a altura: ";
        cin >> altura[i];
        cout << "" << endl;

        i++;
    }

    cout << "Pessoa mais Pesada" << endl;
    if(peso[0] > peso[1]){
        cout << "Nome: " << nome[0] << "\nPeso: " << peso[0] << endl;
    }else{
        cout << "Nome: " << nome[1] << "\nPeso: " << peso[1] << endl;
    }

    cout << "\nPessoa mais Alta" << endl;
    if(altura[0] > altura[1]){
        cout << "Nome: " << nome[0] << "\nAltura: " << altura[0] << endl;
    }else{
        cout << "Nome: " << nome[1] << "\nAltura: " << altura[1] << endl;
    }
}

/*
Exercicio 114
Considere que, para cada um dos hotéis fazenda da região, se tenha registrado
o nome do hotel, a sua distância do centro da cidade, o número médio de
visitantes no último feriado e o tipo de acesso ao hotel (0– acesso não asfaltado; 1– acesso asfaltado).
Construa um algoritmo que forneça:
a) O número de hoteis que distam mais de 15km do centro;
b) A quantidade média de visitantes no último feriado, nos hoteis com acesso
não asfaltado;
c) O nome e a distância do centro em Km, de todos os hoteis de acesso
asfaltado que tiveram menos de 1.000 visitantes.
*/
void While::hotelFazenda(){
    int qtdHoteis = 0;

    cout << "Informe a quantidade de hoteis na regiao: ";
    cin >> qtdHoteis;

    int x = 0, contVisit = 0, qtdHoteisDist = 0, totalVisitantes = 0, numVisitantes[qtdHoteis];
    float distancia[qtdHoteis], acessoHotel[qtdHoteis];
    char *nome[qtdHoteis];

    while(x < qtdHoteis){
        cout << "\nInforme o nome do hotel: ";
        cin >> nome[x];
        cout << "Distancia do centro da cidade: ";
        cin >> distancia[x];
        cout << "A media de visitantes: ";
        cin >> numVisitantes[x];
        cout << "Tipo de acesso 0- Nao asfaltado 1- Asfaltado: ";
        cin >> acessoHotel[x];

        if(distancia[x] > 15){
            qtdHoteisDist++;
        }

        if(acessoHotel[x] == 0){
            totalVisitantes += numVisitantes[x];
            contVisit++;
        }

        x++;
    }

    float mediaVisit = totalVisitantes / contVisit;

    cout << "\nHoteis a mais de 15 km do centro: " << qtdHoteisDist << endl;
    cout << "Media de visitantes nos hoteis com acesso sem asfalto: " << mediaVisit << endl;
    cout << "Nome e Distancia do centro dos hoteis com acesso asfaltado com menos de 1000 visitantes:" << endl;

    for(int i = 0; i < qtdHoteis; i++){
        if(numVisitantes[i] < 1000){
            cout << "Hotel: " << nome[i] << " Distancia: " << distancia[i] << endl;
        }
    }
}

/*
Exercicio 115
Faça um algoritmo que calcule a média de salários de uma empresa, pedindo
ao usuário o nome dos funcionários e os salários e devolvendo a média, o salário
mais alto e o salário mais baixo. Use nome = “fim” para encerrar a leitura.
*/
void While::salariosEmpresa(){
    char funcionario[30];
    float salario, totalSalario = 0, maiorSalario = 0, menorSalario = 0;
    int cont = 0;

    while(strcasecmp(funcionario, "fim") != 0){
        cout << "\nInforme o nome do funcionario: ";
        cin >> funcionario;

        if(strcasecmp(funcionario, "fim") != 0){
            cout << "Informe o salario: ";
            cin >> salario;

            if(salario > maiorSalario){
                maiorSalario = salario;
            }

            if(cont == 0){
                menorSalario = salario;
            }

            if(salario < menorSalario){
                menorSalario = salario;
            }

            totalSalario += salario;
            cont++;
        }
    }

    float media = totalSalario / cont;

    cout << "\nMedia salario: " << media << endl;
    cout << "Maior salario: " << maiorSalario << endl;
    cout << "Menor salario: " << menorSalario << endl;
}
