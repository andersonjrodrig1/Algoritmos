#include "If.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Exercicio 31
Faça um algoritmo que leia dois números A e B e imprima o maior deles. */
void If::verificaMaior(){
    int num1, num2;

    printf("Informe o primeiro numero: ");
    scanf("%i", &num1);
    printf("Informe o segundo numero: ");
    scanf("%i",&num2);

    if(num1 > num2)
        printf("\n%i e o maior", num1);
    else
        printf("\n%i e o maior", num2);
}

/* Exercicio 32
Faça um algoritmo que leia um número N e imprima “F1”, “F2” ou “F3”, conforme
a condição:
• “F1”, se N <= 10
• “F2”, se N > 10 e N <= 100
• “F3”, se n > 100 */
void If::verificaNumero(){
    int numero;

    printf("Informe um numero: ");
    scanf("%i", &numero);

    if(numero <= 10)
        printf("\nF1");
    else if(numero > 10 && numero <= 100)
        printf("\nF2");
    else
        printf("\nF3");
}

/* Exercicio 33
O sistema de avaliação de determinada disciplina, é composto por três provas. A
primeira prova tem peso 2, a segunda tem peso 3 e a terceira tem peso 5. Faça
um algoritmo para calcular a média final de um aluno desta disciplina. */
void If::mediaProva(){
    int const PESO2 = 2;
    int const PESO3 = 3;
    int const PESO5 = 5;

    int nota1, nota2, nota3;
    float media;

    printf("Informe a primeira nota: ");
    scanf("%i", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%i", &nota2);
    printf("Informe a terceira nota: ");
    scanf("%i", &nota3);

    media = ((nota1 * PESO2) + (nota2 * PESO3) + (nota3 * PESO5)) / (PESO2 + PESO3 + PESO5);

    printf("\nA media e %f\n", media);
}

/* Exercicio 34
Construa um algoritmo que receba como entrada três valores e os imprima em ordem crescente. */
void ordemCrescente(){
    int valor1, valor2, valor3;

    printf("Informe o primeiro valor: ");
    scanf("%i", &valor1);
    printf("Informe o segundo valor: ");
    scanf("%i", &valor2);
    printf("Informe o terceiro valor: ");
    scanf("%i", &valor3);

    if(valor1 < valor2 && valor2 < valor3)
        printf("\nOrdem Crescente: %i %i %i\n", valor1, valor2, valor3);
    else if(valor1 < valor3 && valor3 < valor2)
        printf("\nOrdem Crescente: %i %i %i\n", valor1, valor3, valor2);
    else if(valor2 < valor1 && valor1 < valor3)
        printf("\nOrdem Crescente: %i %i %i\n", valor2, valor1, valor3);
    else if(valor2 < valor3 && valor3 < valor1)
        printf("\nOrdem Crescente: %i %i %i\n", valor2, valor3, valor1);
    else if(valor3 < valor2 && valor2 < valor1)
        printf("\nOrdem Crescente: %i %i %i\n", valor3, valor2, valor1);
    else
        printf("\nOrdem Crescente: %i %i %i\n", valor3, valor1, valor2);
}

/* Exercicio 35
Considere que o último concurso vestibular apresentou três provas: Português,
Matemática e Conhecimentos Gerais. Considerando que para cada candidato
tem-se um registro contendo o seu nome e as notas obtidas em cada uma das
provas, construa um algoritmo que forneça:
a) o nome e as notas em cada prova do candidato
b) a média do candidato
c) uma informação dizendo se o candidato foi aprovado ou não. Considere que
um candidato é aprovado se sua média for maior que 7.0 e se não apresentou
nenhuma nota abaixo de 5.0 */
void If::mediaNota(){
    int nota1, nota2, nota3;
    float media;
    char nome[30], status[15];

    printf("Informe o nome do candidato: ");
    scanf("%s", &nome);
    printf("Informe a nota em Portugues: ");
    scanf("%i", &nota1);
    printf("Informe a nota em Matematica: ");
    scanf("%i", &nota2);
    printf("Informe a nota em Conhecimentos Gerais: ");
    scanf("%i", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if(media > 7 && (nota1 > 5 || nota2 > 5 || nota3 > 5))
        strcpy(status, "Aprovado");
    else
        strcpy(status, "Reprovado");

    printf("\nNome: %s", nome);
    printf("\nPortugues: %i", nota1);
    printf("\nMatematica: %i", nota2);
    printf("\nConhecimentos Gerais: %i", nota3);
    printf("\nMedia: %f", media);
    printf("\nStatus: %s\n", status);
}

/* Exercicio 36
Uma empresa de vendas tem três corretores. A empresa paga ao corretor uma
comissão calculada de acordo com o valor de suas vendas. Se o valor da venda
de um corretor for maior que R$ 50.000.00 a comissão será de 12% do valor
vendido. Se o valor da venda do corretor estiver entre R$ 30.000.00 e R$
50.000.00 (incluindo extremos) a comissão será de 9.5%. Em qualquer outro
caso, a comissão será de 7%. Escreva um algoritmo que gere um relatório
contendo nome, valor da venda e comissão de cada um dos corretores. O
relatório deve mostrar também o total de vendas da empresa. */
void If::comissaoEmpresa(){
    int const CORRETORES = 3;

    char nomes[CORRETORES][30];
    float vendas[CORRETORES];
    float comissoes[CORRETORES];
    float totalVendas = 0;

    int i;
    for(i = 0; i < CORRETORES; i++){
        printf("Informe o nome do corretor: ");
        scanf("%s", &nomes[i]);
        printf("Informe o valor de venda: ");
        scanf("%f", &vendas[i]);
        printf("\n");
    }

    for(i = 0; i < CORRETORES; i++){
        if(vendas[i] < 30000)
            comissoes[i] = vendas[i] * 0.07;
        else if(vendas[i] < 50000 && vendas[i] >= 30000)
            comissoes[i] = vendas[i] * 0.095;
        else
            comissoes[i] = vendas[i] * 0.12;

        totalVendas += vendas[i];
    }

    for(i = 0; i < CORRETORES; i++){
        printf("Nome: %s\n", nomes[i]);
        printf("Vendas: %2.f\n", vendas[i]);
        printf("Comissao: %2.f\n", comissoes[i]);
        printf("\n");
    }

    printf("Total de Vendas: %2.f\n", totalVendas);
}

/* Exercicio 37
Escreva um algoritmo que determine o número de dias que uma pessoa já viveu.
Considere que um mês tenha 30 dias. */
void If::calculaDiasVida(){
    int const MESES = 12;
    int const DIAS = 30;
    int const ANOATUAL = 2017;

    int anoNascimento, diasVida;

    printf("Informe o ano de nascimento: ");
    scanf("%i", &anoNascimento);

    diasVida = ((ANOATUAL - anoNascimento) * MESES) * DIAS;

    printf("\nDias Vivido: %i dias\n", diasVida);
}

/* Exercicio 38
Faça um algoritmo que leia os valores A, B e C. Mostre uma mensagem que
informe se a soma de A com B é menor, maior ou igual a C. */
void If::mensagem(){
    int a, b, c, soma;

    printf("Informe o valor de A: ");
    scanf("%i", &a);
    printf("Informe o valor de B: ");
    scanf("%i", &b);
    printf("Informe o valor de C: ");
    scanf("%i", &c);

    soma = a + b;

    if(soma > c)
        printf("\nA soma de A mais B e maior que C\n");
    else
        printf("\nA soma de A mais B nao e maior que C\n");
}

/* Exercicio 39
Suponha que um caixa disponha apenas de notas de 1, 10 e 100 reais.
Considerando que alguém está pagando uma compra, escreva um algoritmo que
mostre o número mínimo de notas que o caixa deve fornecer como troco. Mostre
também: o valor da compra, o valor do troco e a quantidade de cada tipo de nota
do troco. Suponha que o sistema monetário não utilize moedas. */
void If::troco(){
    int const CEM = 100;
    int const DEZ = 10;
    int valorCompra, valorDinheiro, valorTroco;
    int restoTroco = 0, qtdNotas100 = 0, qtdNotas10 = 0, qtdNotas1 = 0, qtdNotas = 0;

    printf("Informe o valor da compra: ");
    scanf("%i", &valorCompra);
    printf("Informe o total pago: ");
    scanf("%i", &valorDinheiro);

    valorTroco = valorDinheiro - valorCompra;

    if(valorTroco >= CEM){
        qtdNotas100 = valorTroco / CEM;
        restoTroco = valorTroco % CEM;
    }

    if(qtdNotas100 > 0 && restoTroco >= DEZ){
        qtdNotas10 = restoTroco / DEZ;
        restoTroco %= DEZ;
    }else{
        qtdNotas10 = valorTroco / DEZ;
        qtdNotas1 = valorTroco % DEZ;
    }

    if(qtdNotas1 == 0)
        qtdNotas1 = valorTroco % DEZ;

    qtdNotas = qtdNotas100 + qtdNotas10 + qtdNotas1;

    printf("\nValor da Compra: %i", valorCompra);
    printf("\nValor do Pagamento: %i", valorDinheiro);
    printf("\nValor do Troco: %i", valorTroco);
    printf("\nQuantidade de Notas de Troco: %i", qtdNotas);
    printf("\nQuantidade de Notas de 100: %i", qtdNotas100);
    printf("\nQuantidade de Notas de 10: %i", qtdNotas10);
    printf("\nQuantidade de Notas de 1: %i\n", qtdNotas1);
}

/* Exercicio 40
Uma empresa produz três tipos de peças mecânicas: parafusos, porcas e
arruelas. Têm-se os preços unitários de cada tipo de peça e sabe-se que sobre
estes preços incidem descontos de 10% para porcas, 20% para parafusos e 30%
para arruelas. Escreva um algoritmo que calcule o valor total da compra de um
cliente. Deve ser mostrado o nome do cliente. O número de cada tipo de peça
que o mesmo comprou, o total de desconto e o total a pagar pela compra. */
void If::compraPecasMecanicas(){
    float const DEZ = 0.10;
    float const VINTE = 0.20;
    float const TRINTA = 0.30;
    float const PARAFUSO = 15.35;
    float const PORCA = 13.15;
    float const ARRUELA = 10.25;
    char nome[30];
    int qtdParafuso, qtdPorca, qtdArruela;
    float totalParaf, totalPorca, totalArr, descParaf, descPorca, descArr, totalCompra, totalPagar, totalDesconto;

    printf("\t\t\t********* Lista de Produtos *********\n");
    printf("\nParafuso: R$%f", PARAFUSO);
    printf("\nPorca: R$%f", PORCA);
    printf("\nArruela: R$%f\n\n", ARRUELA);

    printf("Informe o nome do cliente: ");
    scanf("%s", &nome);
    printf("Informe a quantidade de Parafusos: ");
    scanf("%i", &qtdParafuso);
    printf("Informe a quantidade de Porcas: ");
    scanf("%i", &qtdPorca);
    printf("Informe a quantidade de Arruelas: ");
    scanf("%i", &qtdArruela);

    totalParaf = qtdParafuso * PARAFUSO;
    totalPorca = qtdPorca * PORCA;
    totalArr = qtdArruela * ARRUELA;
    descParaf = totalParaf * VINTE;
    descPorca = totalPorca * DEZ;
    descArr = totalArr * TRINTA;
    totalDesconto = descParaf + descPorca + descArr;
    totalCompra = totalParaf + totalPorca + totalArr;
    totalPagar = totalCompra - totalDesconto;

    printf("\nNome cliente: %s", nome);
    printf("\nTotal da compra: %f", totalCompra);
    printf("\nTotal desconto: %f", totalDesconto);
    printf("\nTotal a pagar: %f", totalPagar);
    printf("\nQuantidade Parafusos: %i", qtdParafuso);
    printf("\nQuantidade Porcas: %i", qtdPorca);
    printf("\nQuantidade Arruelas: %i\n", qtdArruela);

}

/* Exercicio 41
A revendedora de carros Pica-Pau Ltda. paga aos seus funcionários vendedores
dois salários mínimos fixos, mais uma comissão fixa de R$ 50,00 por carro
vendido e mais 5% do valor das vendas. Faça um algoritmo que determine o
salário total de um vendedor. */
void If::revendedoraVeiculos(){
    float const SALARIO = 1874.00;
    float const COMISSAO = 50.00;
    float const COMISSAOVENDA = 0.05;

    float salarioTotal, vlrVeiculoVendido, vlrTtlQtdVeiculo, vlrComissao, vlrComissaoVeiculo;
    int qtdVeiculosVendidos;

    printf("Informe o valor do veiculo: ");
    scanf("%f", &vlrVeiculoVendido);
    printf("Informe a quantidade de veiculos vendidos: ");
    scanf("%i", &qtdVeiculosVendidos);

    vlrTtlQtdVeiculo = vlrVeiculoVendido * qtdVeiculosVendidos;
    vlrComissao = qtdVeiculosVendidos * COMISSAO;
    vlrComissaoVeiculo = vlrTtlQtdVeiculo * COMISSAOVENDA;
    salarioTotal = SALARIO + vlrComissao + vlrComissaoVeiculo;

    printf("\nSalario Total: %.2f\n", salarioTotal);
}

/* Exercicio 42
Uma pessoa comprou quatro artigos em uma loja. Para cada artigo, tem-se
nome, preço e percentual de desconto. Faça um algoritmo que imprima nome,
preço e preço com desconto de cada artigo e o total a pagar. */
void If::artigosCompra(){
    char nome[30], artigo[4][20];
    float preco[4], vlrDesconto[4], totalPagar = 0;
    int perDesconto[4];

    printf("Informe o nome do cliente: ");
    scanf("%s", &nome);

    int i;
    for(i = 0; i < 4; i++){
        printf("\nInforme nome artigo comprado: ");
        scanf("%s", &artigo[i]);
        printf("Informe o preco do artigo: ");
        scanf("%f", &preco[i]);
        printf("Informe o percentual de desconto: ");
        scanf("%i", &perDesconto[i]);
    }

    for(i = 0; i < 4; i++){
        vlrDesconto[i] = (preco[i] * perDesconto[i]) / 100;
        totalPagar += preco[i] - vlrDesconto[i];
    }

    printf("\nNome cliente: %s\n", nome);

    i = 0;
    while(i < 4){
        printf("\nArtigo: %s", artigo[i]);
        printf("\nPreco: %.2f", preco[i]);
        printf("\nDesconto: %.2f\n", vlrDesconto[i]);

        i++;
    }

    printf("\nTotal a pagar: %.2f\n", totalPagar);
}

/* Exercicio 43
Uma empresa irá dar um aumento de salário aos seus funcionários de acordo
com a categoria de cada empregado. O aumento seguirá a seguinte regra:
• Funcionários das categorias A, C, F, e H ganharão 10% de aumento sobre o salário;
• Funcionários das categorias B, D, E, I, J e T ganharão 15% de aumento sobre o salário;
• Funcionários das categorias K e R ganharão 25% de aumento sobre o salário;
• Funcionários das categorias L, M, N, O, P, Q e S ganharão 35% de aumento sobre o salário;
• Funcionários das categorias U, V, X, Y, W e Z ganharão 50% de aumento sobre o salário.
Faça um algoritmo que escreva nome, categoria e salário reajustado de cada empregado. */
void If::categoriaFuncionario(){
    float const DEZ = 0.10;
    float const QUINZE = 0.15;
    float const VINTECINCO = 0.25;
    float const TRINTACINCO = 0.35;
    float const CINQUENTA = 0.50;

    char tpCategoria, funcionario[30];
    float salario, novoSalario;

    printf("Informe o nome do funcionario: ");
    scanf("%s", &funcionario);
    printf("Informe a categoria: ");
    scanf("%s", &tpCategoria);
    printf("Informe o salario: ");
    scanf("%f", &salario);

    switch (tpCategoria){
        case 'A':
        case 'C':
        case 'F':
        case 'H':
            novoSalario = salario + (salario * DEZ);
            break;
        case 'B':
        case 'D':
        case 'E':
        case 'I':
        case 'J':
        case 'T':
            novoSalario = salario + (salario * QUINZE);
            break;
        case 'L':
        case 'M':
        case 'N':
        case 'O':
        case 'P':
        case 'Q':
        case 'S':
            novoSalario = salario + (salario * TRINTACINCO);
            break;
        case 'K':
        case 'R':
            novoSalario = salario + (salario * VINTECINCO);
            break;
        case 'U':
        case 'V':
        case 'X':
        case 'Y':
        case 'W':
        case 'Z':
            novoSalario = salario + (salario * CINQUENTA);
            break;
        default:
            printf("\nOpcao Invalida...\n");
            break;
    }

    printf("\nNome: %s", funcionario);
    printf("\nCategoria: %c", tpCategoria);
    printf("\nNovo Salario: %.2f\n", novoSalario);
}

/* Exercicio 44
Uma sorveteria vende três tipos de picolés. Sabendo-se que o picolé do tipo 1 é
vendido por R$ 0.50, o do tipo 2 por R$ 0.60 e o do tipo 3 por R$ 0.75, faça um
algoritmo que, para cada tipo de picolé, mostre a quantidade vendida e o total
arrecadado. */
void If::vendaPicole(){
    float const CINQUENTA = 0.50;
    float const SESSENTA = 0.60;
    float const SETENTACINCO = 0.75;

    int tipo1, tipo2, tipo3;
    float totalTipo1, totalTipo2, totalTipo3;

    printf("Informe quantidade vendida do tipo 1: ");
    scanf("%i", &tipo1);
    printf("Informe quantidade vendida do tipo 2: ");
    scanf("%i", &tipo2);
    printf("Informe quantidade vendida do tipo 3: ");
    scanf("%i", &tipo3);

    totalTipo1 = tipo1 * CINQUENTA;
    totalTipo2 = tipo2 * SESSENTA;
    totalTipo3 = tipo3 * SETENTACINCO;

    printf("\nQuantidade tipo 1: %i", tipo1);
    printf("\nTotal tipo 1: %.2f", totalTipo1);
    printf("\nQuantidade tipo 2: %i", tipo2);
    printf("\nTotal tipo 2: %.2f", totalTipo2);
    printf("\nQuantidade tipo 3: %i", tipo3);
    printf("\nTotal tipo 3: %.2f\n", totalTipo3);
}

/* Exercicio 45
Escreva um algoritmo que, para uma conta bancária, leia o seu número, o saldo,
o tipo de operação a ser realizada (depósito ou retirada) e o valor da operação.
Após, determine e mostre o novo saldo. Se o novo saldo ficar negativo, deve ser
mostrada, também, a mensagem “conta estourada”. */
void If::contaBancaria(){
    float saldo, valorOperacao;
    char operacao, numeroConta[10], mensagem[30];

    printf("Informe o Numero da Conta: ");
    scanf("%s", &numeroConta);
    printf("Informe o saldo: ");
    scanf("%f", &saldo);
    printf("D para Deposito\nR para Retirada\nInforme o tipo de operacao: ");
    scanf("%s", &operacao);
    printf("Informe o valor da Operacao: ");
    scanf("%f", &valorOperacao);

    switch(operacao){
        case 'D':
        case 'd':
            saldo -= valorOperacao;
            break;
        case 'R':
        case 'r':
            saldo += valorOperacao;
            break;
        default:
            printf("\nOpcao invalida...");
            system("pause");
            break;
    }

    if(saldo < 0)
        strcpy(mensagem, "Conta Estourada!");
    else
        strcpy(mensagem, "Saque realizado!");

    printf("\nNovo Saldo: %.2f", saldo);
    printf("\nStatus: %s\n", mensagem);
}

/* Exercicio 46
Um hotel cobra R$ 60.00 a diária e mais uma taxa de serviços. A taxa de
serviços é de:
• R$ 5.50 por diária, se o número de diárias for maior que 15;
• R$ 6.00 por diária, se o número de diárias for igual a 15;
• R$ 8.00 por diária, se o número de diárias for menor que 15.
Construa um algoritmo que mostre o nome e o total da conta de um cliente. */
void If::diariaHotel(){
    int const DIARIA = 60;
    int qtdDiarias;
    float totalDiaria, totalTaxaServico;
    char nome[30];

    printf("Informe o nome da Diarista: ");
    scanf("%s", &nome);
    printf("Informe a quantidade de diarias: ");
    scanf("%i", &qtdDiarias);

    if(qtdDiarias < 15){
        totalTaxaServico = qtdDiarias * 8;
    }else if(qtdDiarias == 15){
        totalTaxaServico = qtdDiarias * 6;
    }else if(qtdDiarias > 15){
        totalTaxaServico = qtdDiarias * 5.50;
    }

    totalDiaria = (qtdDiarias * DIARIA) + totalTaxaServico;

    printf("\nNome: %s", nome);
    printf("\nTotal da Conta: %.2f\n", totalDiaria);
}

/* Exercicio 47
Construir um algoritmo que tome como entradas três valores distintos e os
apresente (imprima) em ordem crescente (menor para o maior). */
void If::menorMaior(){
    int valor1, valor2, valor3;

    printf("Informe o primeiro valor: ");
    scanf("%i", &valor1);
    printf("Informe o segundo valor: ");
    scanf("%i", &valor2);
    printf("Informe o terceiro valor: ");
    scanf("%i", &valor3);

    if(valor1 < valor2 && valor2 < valor3)
        printf("\nOrdem Crescente: %i %i %i\n", valor1, valor2, valor3);
    else if(valor1 < valor3 && valor3 < valor2)
        printf("\nOrdem Crescente: %i %i %i\n", valor1, valor3, valor2);
    else if(valor2 < valor1 && valor1 < valor3)
        printf("\nOrdem Crescente: %i %i %i\n", valor2, valor1, valor3);
    else if(valor2 < valor3 && valor3 < valor1)
        printf("\nOrdem Crescente: %i %i %i\n", valor2, valor3, valor1);
    else if(valor3 < valor2 && valor2 < valor1)
        printf("\nOrdem Crescente: %i %i %i\n", valor3, valor2, valor1);
    else
        printf("\nOrdem Crescente: %i %i %i\n", valor3, valor1, valor2);
}

/* Exercicio 48
Faça um algoritmo que leia 3 números inteiros distintos e escreva o menor deles. */
void If::apresentaMenorValor(){
    int valor1, valor2, valor3;

    printf("Informe o primeiro valor: ");
    scanf("%i", &valor1);
    printf("Informe o segundo valor: ");
    scanf("%i", &valor2);
    printf("Informe o terceiro valor: ");
    scanf("%i", &valor3);

    if(valor1 < valor2 && valor1 < valor3)
        printf("\nMenor Valor: %i\n", valor1);
    else if(valor2 < valor1 && valor2 < valor3)
        printf("\nMenor Valor: %i\n", valor2);
    else
        printf("\nMenor Valor: %i\n", valor3);
}

/* Exercicio 49
Dados três valores X, Y e Z, verificar se eles podem ser os comprimentos dos
lados de um triângulo, e se forem, verificar se é um triângulo equilátero, isóscele
ou escaleno. Se eles não formarem um triângulo, escrever uma mensagem.
Antes da elaboração do algoritmo, torna-se necessário a revisão de algumas propriedades e definições.
Propriedade – o comprimento de cada lado de um triângulo é menor do que a soma dos comprimentos dos outros dois lados.
Definição 1 - chama-se de triângulo equilátero o que tem os comprimentos dos três lados iguais;
Definição 2 - chama-se de triângulo isóscele o triângulo que tem os comprimentos de dois lados iguais;
Definição 3 - chama-se triângulo escaleno o triângulo que tem os comprimentos dos três lados diferentes. */
void If::verificaTriangulo(){
    int x, y, z;

    printf("Informe o valor de x: ");
    scanf("%i", &x);
    printf("Informe o valor de y: ");
    scanf("%i", &y);
    printf("Informe o valor de z: ");
    scanf("%i", &z);

    if((x + y > z) && (x + z > y) && (z + y > x)){
        printf("\nValor informados formam um triangulo.");

        if(x == y && x == z){
            printf("\nTriangulo Equilatero.\n");
        }else if(x == y || x == z || y == z){
            printf("\nTriangulo Isoceles.\n");
        }else{
            printf("\nTriangulo Escaleno.\n");
        }
    }else{
        printf("\nValores informados nao formam um triangulo.\n");
    }
}

/* Exercicio 50
Suponha que o conceito de um aluno seja determinado em função da sua nota.
Suponha, também, que esta nota seja um valor inteiro na faixa de 0 a 100,
conforme a seguinte faixa:
Nota Conceito
0 a 49 Insuficiente
50 a 64 Regular
65 a 84 Bom
85 a 100 Ótimo
Crie um algoritmo que apresente o conceito e a nota do aluno. */
void If::conceitoAluno(){
    int nota;
    char conceito[30];

    printf("Informe a nota do aluno: ");
    scanf("%i", &nota);

    if(nota <= 100 || nota >= 0){
        if(nota < 50){
            printf("\nNota Insuficiente");
        }else if(nota >= 50 && nota < 65){
            printf("\nNota Regular");
        }else if(nota >= 65 && nota < 85){
            printf("\nNota Boa");
        }else{
            printf("\nNota Otima");
        }

        printf("\nNota Aluno: %i\n", nota);
    }else{
        printf("\nNota Inexistente...\n");
        system("pause");
    }
}

/* Exercicio 51
Faça um algoritmo que leia dois números e mostre qual o maior dos dois. */
void If::maiorNumeros(){
    int num1, num2;

    printf("Informe o primeiro numero: ");
    scanf("%i", &num1);
    printf("Informe o segundo numero: ");
    scanf("%i", &num2);

    if(num1 > num2){
        printf("\nO numero %i e maior\n", num1);
    }else{
        printf("\nO numero %i e maior\n", num2);
    }
}

/* Exercicio 52
Faça um algoritmo que leia dois números e indique se são iguais ou se são
diferentes. Mostre o maior e o menor (nesta sequência). */
void If::iguaisDiferentes(){
    int num1, num2;

    printf("Informe o primeiro numero: ");
    scanf("%i", &num1);
    printf("Informe o segundo numero: ");
    scanf("%i", &num2);

    if(num1 == num2){
        printf("\nNumeros Iguais");
    }else{
        printf("\nNumeros Diferentes");
    }

    if(num1 >= num2){
        printf("\nO numero %i e maior\n", num1);
    }else{
        printf("\nO numero %i e maior\n", num2);
    }
}

/* Exercicio 53
Faça um algoritmo que leia três números e mostre-os em ordem decrescente. */
void If::ordemDecrescente(){
    int valor1, valor2, valor3;

    printf("Informe o primeiro valor: ");
    scanf("%i", &valor1);
    printf("Informe o segundo valor: ");
    scanf("%i", &valor2);
    printf("Informe o terceiro valor: ");
    scanf("%i", &valor3);

    if(valor1 > valor2 && valor2 > valor3)
        printf("\nOrdem Decrescente: %i %i %i\n", valor1, valor2, valor3);
    else if(valor1 > valor3 && valor3 > valor2)
        printf("\nOrdem Decrescente: %i %i %i\n", valor1, valor3, valor2);
    else if(valor2 > valor1 && valor1 > valor3)
        printf("\nOrdem Decrescente: %i %i %i\n", valor2, valor1, valor3);
    else if(valor2 > valor3 && valor3 > valor1)
        printf("\nOrdem Decrescente: %i %i %i\n", valor2, valor3, valor1);
    else if(valor3 > valor2 && valor2 > valor1)
        printf("\nOrdem Decrescente: %i %i %i\n", valor3, valor2, valor1);
    else
        printf("\nOrdem Decrescente: %i %i %i\n", valor3, valor1, valor2);
}

/* Exercicio 54
Faça um algoritmo que leia quatro números (Opção , Num1 , Num2 e Num3) e
mostre o valor de Num1 se Opção for igual a 2; o valor de Num2 se Opção for
igual a 3; e o valor de Num3 se Opção for igual a 4. Os únicos valores possíveis
para a variável Opção são 2, 3 e 4. */
void If::opcaoNumero(){
    int opcao, num1, num2, num3;

    printf("Informe o primeiro numero: ");
    scanf("%i", &num1);
    printf("Informe o segundo numero: ");
    scanf("%i", &num2);
    printf("Informe o terceiro numero: ");
    scanf("%i", &num3);
    printf("Informe a opcao: ");
    scanf("%i", &opcao);

    switch(opcao){
    case 2:
        printf("\nNumero: %i\n", num1);
        break;
    case 3:
        printf("\nNumero: %i\n", num2);
        break;
    case 4:
        printf("\nNumero: %i\n", num3);
        break;
    default:
        printf("\nOpcao invalida...\n");
        break;
    }

}

/* Exercicio 55
Calcule a média aritmética das três notas de um aluno e mostre, além do valor
da média, uma mensagem de "Aprovado", caso a média seja igual ou superior a
7; a mensagem “em prova final” caso a média seja menor que 7 e maior ou igual
a 4; e "reprovado", caso contrário. */
void If::mediaAluno(){
    int nota1, nota2, nota3;
    float media;
    char status[30];

    printf("Informe a primeira nota: ");
    scanf("%i", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%i", &nota2);
    printf("Informe a terceira nota: ");
    scanf("%i", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if(media >= 7){
        strcpy(status, "Aprovado");
    }else if(media < 7 && media >= 4){
        strcpy(status, "Em Prova Final");
    }else{
        strcpy(status, "Reprovado");
    }

    printf("\nMedia: %.2f", media);
    printf("\n%s\n", status);
}

/* Exercicio 56
Elaborar um algoritmo que lê três valores a, b, c e os escreve. A seguir, encontre
o maior dos três valores e o escreva com a mensagem : "É o maior”. */
void If::leituraNumeros(){
    int a, b, c;

    printf("Informe o primeiro numero: ");
    scanf("%i", &a);
    printf("Informe o segundo numero:");
    scanf("%i", &b);
    printf("Informe o terceiro numero: ");
    scanf("%i", &c);

    printf("\nNumero %i", a);
    printf("\nNumero %i", b);
    printf("\nNumero %i\n", c);

    if(a > b && a > c){
        printf("\nMaior %i\n", a);
    }else if(b > a && b > c){
        printf("\nMaior %i\n", b);
    }else{
        printf("\nMaior %i\n", c);
    }
}

/* Exercicio 57
Elaborar um algoritmo que lê dois valores a e b e os escreve com a mensagem:
“São múltiplos” ou “Não são múltiplos”. */
void If::multiplos(){
    int num1, num2, result;

    printf("Informe o primeiro numero: ");
    scanf("%i", &num1);
    printf("Informe o segundo numero: ");
    scanf("%i", &num2);

    if(num1 > num2){
        result = num1 % num2;
    }else{
        result = num2 % num1;
    }

    printf("\nNumero: %i", num1);
    printf("\nNumero: %i", num2);

    if(result == 0){
        printf("\nSao Multiplos\n");
    }else{
        printf("\nNao Sao Multiplos\n");
    }
}

/* Exercicio 58
Escreva um algoritmo que leia o código de um aluno e suas três notas. Calcule a
média ponderada do aluno, considerando que o peso para a maior nota seja 4 e
para as duas restantes, 3. Mostre o código do aluno, suas três notas, a média
calculada e uma mensagem: "APROVADO" se a média for maior ou igual a 5 e
"REPROVADO" se a média for menor que 5. */
void If::mediaPonderada(){
    int const PESO4 = 4;
    int const PESO3 = 3;
    float nota1, nota2, nota3, mediaPonderada = 0;
    char codigoAluno[10], status[10];

    printf("Informe o codigo do aluno: ");
    gets(codigoAluno);
    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);

    if(nota1 > nota2 && nota1 > nota3){
        mediaPonderada = ((nota1 * PESO4) + (nota2 * PESO3) + (nota3 * PESO3)) / (PESO4 + PESO3 + PESO3);
    }else if(nota2 > nota1 && nota2 > nota3){
        mediaPonderada = ((nota2 * PESO4) + (nota1 * PESO3) + (nota3 * PESO3)) / (PESO4 + PESO3 + PESO3);
    }else{
        mediaPonderada = ((nota3 * PESO4) + (nota1 * PESO3) + (nota3 * PESO3)) / (PESO4 + PESO3 + PESO3);
    }

    if(mediaPonderada > 5){
        strcpy(status, "Aprovado");
    }else{
        strcpy(status, "Reprovado");
    }

    printf("\nCodigo do Aluno: %s", codigoAluno);
    printf("\nNota 1: %.2f", nota1);
    printf("\nNota 2: %.2f", nota2);
    printf("\nNota 3: %.2f", nota3);
    printf("\nMedia do Aluno: %.2f", mediaPonderada);
    printf("\nAluno foi %s\n", status);
}

/* Exercicio 59
Faça um algoritmo que leia um número inteiro e mostre uma mensagem
indicando se este número é par ou ímpar e se é positivo ou negativo. */
void If::verificaParImpar(){
    int numero;
    char tpNum1[5], tpNum2[10];

    printf("Informe um numero: ");
    scanf("%i", &numero);

    if(numero % 2 == 0){
        strcpy(tpNum1, "Par");
    }else{
        strcpy(tpNum1, "Impar");
    }

    if(numero >= 0){
        strcpy(tpNum2, "Positivo");
    }else{
        strcpy(tpNum2, "Negativo");
    }

    printf("\nNumero %s", tpNum1);
    printf("\nNumero %s\n", tpNum2);
}

/* Exercicio 60
O cardápio de uma lanchonete é o seguinte:
Especificação Preço unitário
100 Cachorro quente 1,10
101 Bauru simples 1,30
102 Bauru c/ovo 1,50
103 Hamburger 1,10
104 Cheeseburger 1,30
105 Refrigerante 1,00
Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule
o valor a ser pago por aquele lanche. Considere que a cada execução somente será calculado um item. */
void If::cardapio(){
    int op, quantidade;
    float total;

    int codigo[6] = {100,101,102,103,104,105};
    char produto[6][20] = {"Cachorro Quente","Bauru Simples","Bauro c/ Ovo","Hamburger","Cheeseburger","Refrigerante"};
    float valor[6] = {1.10,1.30,1.50,1.10,1.30,1.00};

    printf("Codigo\t\tProduto\t\t\tValor");
    printf("\n100\t\tCachorro Quente\t\tR$1,10");
    printf("\n101\t\tBauru Simples\t\tR$1,30");
    printf("\n102\t\tBauru c/ Ovo\t\tR$1,50");
    printf("\n103\t\tHamburger\t\tR$1,10");
    printf("\n104\t\tCheeseburger\t\tR$1,30");
    printf("\n105\t\tRefrigerante\t\tR$1,00");

    printf("\n\nInforme o codigo da opcao desejada: ");
    scanf("%i", &op);
    printf("Informe a quantidade desejada: ");
    scanf("%i", &quantidade);

    switch(op){
        case 100:
            total = quantidade * valor[0];
            break;
        case 101:
            total = quantidade * valor[1];
            break;
        case 102:
            total = quantidade * valor[2];
            break;
        case 103:
            total = quantidade * valor[3];
            break;
        case 104:
            total = quantidade * valor[4];
            break;
        case 105:
            total = quantidade * valor[5];
            break;
        default:
            printf("\nOpcao de lanche indisponivel no momento...\n");
            exit(0);
            break;
    }

    printf("\nTotal do pedido: %.2f\n", total);
}

/* Exercicio 61
Um usuário deseja um algoritmo pelo qual possa escolher que tipo de média
deseja calcular a partir de três notas. Faça um algoritmo que leia as notas, a
opção escolhida pelo usuário e calcule a média:
1- aritmética
2- ponderada (pesos 3, 3, 4) */
void If::escolhaMedia(){
    int op;
    float nota1, nota2, nota3, media = 0;

    printf("\t\t\tOpcoes de Calculo de Media");
    printf("\n1 - Calcula Media");
    printf("\n2 - Calcula Media Ponderada");

    printf("\n\nInforme a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);
    printf("\nEscolha uma opcao: ");
    scanf("%i", &op);

    switch(op){
        case 1:
            media = (nota1 + nota2 + nota3) / 3;
            break;
        case 2:
            media = ((nota1 * 3) + (nota2 * 3) + (nota3 * 3)) / (3 + 3 + 4);
            break;
        default:
            printf("\nOpcao invalida...\n");
            exit(0);
            break;
    }

    printf("\nMedia das notas: %.2f\n", media);
}

/* Exercicio 62
62. Um banco concederá um crédito especial aos seus clientes, variável com o saldo
médio no último ano. Faça um algoritmo que leia o saldo médio de um cliente e
calcule o valor do crédito de acordo com a tabela abaixo. Mostre uma mensagem
informando o saldo médio e o valor do crédito.
Saldo médio Percentual
de 0 a 200 nenhum crédito
de 201 a 400 20% do valor do saldo médio
de 401 a 600 30% do valor do saldo médio
acima de 601 40% do valor do saldo médio */
void If::saldoMedio(){
    float sldMedio, totalCredito;

    printf("Informe o saldo medio: ");
    scanf("%f", &sldMedio);

    if(sldMedio > 201 && sldMedio <= 400){
        totalCredito = sldMedio * 0.20;
        totalCredito += sldMedio;
    }else if(sldMedio > 401 && sldMedio <= 600){
        totalCredito = sldMedio * 0.30;
        totalCredito += sldMedio;
    }else if(sldMedio > 601){
        totalCredito = sldMedio * 0.40;
        totalCredito += sldMedio;
    }else{
        totalCredito = sldMedio;
    }

    printf("\nSaldo Medio: %.2f", sldMedio);
    printf("\nValor de Credito: %.2f\n", totalCredito);
}

/* Algoritmo 63
Um vendedor necessita de um algoritmo que calcule o preço total devido por um
cliente. O algoritmo deve receber o código de um produto e a quantidade
comprada e calcular o preço total, usando a tabela abaixo:
Código do produto Preço unitário
1001 5,32
1324 6,45
6548 2,37
0987 5,32
7623 6,45 */
void If::saldoDevedor(){
    int codigos[5] = {1001,1324,6548,987,7623};
    float totalPagar;
    int quant, codigo;

    printf("Codigo do produto \t\tPreco Unitario");
    printf("\n1001 \t\t\t\tR$5,32");
    printf("\n1324 \t\t\t\tR$6,25");
    printf("\n6548 \t\t\t\tR$2,37");
    printf("\n987 \t\t\t\tR$5,32");
    printf("\n7623 \t\t\t\tR$6,45\n");

    printf("\nInforme o codigo do produto: ");
    scanf("%i", &codigo);
    printf("Informe a quantidade do produto: ");
    scanf("%i", &quant);

    int tamanho = (sizeof(codigos) / sizeof(codigos[0]));
    int cod = -1;
    int i;

    for(i = 0;i < tamanho; i++){
        if(codigo == codigos[i]){
            cod = i;
            break;
        }
    }

    switch(cod){
        case 0:
            totalPagar = quant * 5.32;
            break;
        case 1:
            totalPagar = quant * 6.25;
            break;
        case 2:
            totalPagar = quant * 2.37;
            break;
        case 3:
            totalPagar = quant * 5.32;
            break;
        case 4:
            totalPagar = quant * 6.45;
            break;
        default:
            printf("\nNao foi possivel alterar o valor...\n");
            exit(0);
            break;
    }

    printf("\nTotal a pagar: %.2f\n", totalPagar);
}

/* Algoritmo 64
Um vendedor precisa de um algoritmo que calcule o preço total devido por um
cliente. O algoritmo deve receber o código de um produto e a quantidade
comprada e calcular o preço total, usando a tabela abaixo. Mostre uma
mensagem no caso de código inválido.
Código Preço Unitário
'ABCD' R$ 5,30
'XYPK' R$ 6,00
'KLMP' R$ 3,20
'QRST' R$ 2,50 */
void If::saldoDevedor2(){
    char codProduto[4], *produtos[4] = {"ABCD","XYPK","KLMP","QRST"};
    int quant;
    float precoTotal;

    printf("Codigo do produto \t\tPreco Unitario");
    printf("\nABCD \t\t\t\tR$5,30");
    printf("\nXYPK \t\t\t\tR$6,00");
    printf("\nKLMP \t\t\t\tR$3,20");
    printf("\nQRST \t\t\t\tR$2,50\n");

    printf("\nInforme o codigo do produto: ");
    scanf("%s", &codProduto);
    printf("Informe a quantidade: ");
    scanf("%i", &quant);

    int tamanho = (sizeof(produtos) / sizeof(produtos[0]));
    int prod = -1;
    int i;

    for(i = 0; i < tamanho; i++){
        if(strcasecmp(produtos[i], codProduto) == 0){
            prod = i;
            break;
        }
    }

    switch(prod){
        case 0:
            precoTotal = quant * 5.30;
            break;
        case 1:
            precoTotal = quant * 6.00;
            break;
        case 2:
            precoTotal = quant * 3.20;
            break;
        case 3:
            precoTotal = quant * 2.50;
            break;
        default:
            printf("\nOpcao Invalida...Codigo: %s\n", codProduto);
            exit(0);
    }

    printf("\nPreco Total: %.2f\n", precoTotal);
}

/* Exercicio 65
Crie um algoritmo em que o aluno digita duas notas bimestrais e informa se o
aluno foi aprovado ou não. Nota: Considere aprovado se a nota for maior que 5.0. */
void If::notasBimestrais(){
    int nota1, nota2;
    float media;

    printf("Informe a primeira nota: ");
    scanf("%i", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%i", &nota2);

    media = (nota1 + nota2) / 2;

    if(media > 5){
        printf("\nAluno Aprovado\n");
    }else{
        printf("\nAluno Reprovado\n");
    }
}

/* Exercicio 66
Escreva um algoritmo que leia dois números inteiros e determine qual é o menor
e qual é o maior também. */
void If::maiorMenor(){
    int num1, num2;

    printf("Informe um numero: ");
    scanf("%i", &num1);
    printf("Informe outro numero: ");
    scanf("%i", &num2);

    if(num1 > num2){
        printf("\nMaior: %i", num1);
        printf("\nMenor: %i\n", num2);
    }else{
        printf("\nMaior: %i", num2);
        printf("\nMenor: %i\n", num1);
    }
}

/* Exercicio 67
Crie o algoritmo Funcionario para calcular o aumento salarial de um empregado.
Por padrão, o aumento será de 15%. Entretanto, deve ser aplicada uma regra
diferente para cada faixa salarial. Regras:
a) se 1.500,00 <= salarioAtual < 1.750,00: aumento igual a 12%
b) se 1.750,00 <= salarioAtual < 2.000,00: aumento igual a 10%
c) se 2.000,00 <= salarioAtual < 3.000,00: aumento igual a 7%
d) se salarioAtual acima de 3.000,00: aumento igual a 5%. */
void If::salarioFuncionario(){
    float salario, novoSalario;

    printf("Informe o salario: ");
    scanf("%f", &salario);

    if(salario < 1500){
        novoSalario = salario + (salario * 0.15);
    }else if(salario >= 1500 && salario < 1750){
        novoSalario = salario + (salario * 0.12);
    }else if(salario >= 1750 && salario < 2000){
        novoSalario = salario + (salario * 0.10);
    }else if(salario >= 2000 && salario < 3000){
        novoSalario = salario + (salario * 0.07);
    }else{
        novoSalario = salario + (salario * 0.05);
    }

    printf("\nNovo salario: %.2f\n", novoSalario);
}

/* Exercicio 68
Crie um algoritmo que calcula o desconto previdenciário de um funcionário. Dado
um salário, o programa deve retornar o valor do desconto proporcional ao
mesmo. O cálculo segue a regra: o desconto é de 11% do valor do salário,
entretanto, o valor máximo de desconto é 318,20. Sendo assim, ou o algoritmo
retorna o valor equivalente a 11% sobre o salário ou 318,20. */
void If::salarioPrevidenciario(){
    float const PREVIDENCIA = 0.13;
    float salario, desconto;

    printf("Informe o salario: ");
    scanf("%f", &salario);

    desconto = salario * PREVIDENCIA;

    if(desconto > 318.20){
        desconto = 318.20;
    }

    printf("\nValor desconto: %.2f\n", desconto);
}

/* xercicio 69
Crie um algoritmo chamado Zodiaco. Este algoritmo deve ler a data do seu
aniversário e atribuir um valor para a variável inteira chamada signo, conforme
lista abaixo:
a) 1o signo do zodíaco: Aquário (21/jan a 19/fev)
b) 2o signo do zodíaco: Peixes (20/fev a 20/mar)
c) 3o signo do zodíaco: Áries (21/mar a 20/abr)
d) 4o signo do zodíaco: Touro (21/abr a 20/mai)
e) 5o signo do zodíaco: Gêmeos (21/mai a 20/jun)
f) 6o signo do zodíaco: Câncer (21/jun a 21/jul)
g) 7o signo do zodíaco: Leão (22/jul a 22/ago)
h) 8o signo do zodíaco: Virgem (23/ago a 22/set)
i) 9o signo do zodíaco: Libra (23/set a 22/out)
j) 10o signo do zodíaco: Escorpião (23/out a 21/nov)
k) 11o signo do zodíaco: Sagitário (22/nov a 21/dez)
l) 12o signo do zodíaco: Capricórnio (22/dez a 20/jan) */
void If::zoodiaco(){
    char dia[2], mes[10], ano[4], signo[20];
    int dAni, mAni, aAni;

    printf("Formato: 01/01/1999 ou 01/Jan/1999 ou 01/Janeiro/1999");

    printf("\n\nInforme o dia de aniversario: ");
    scanf("%i", &dia);
    printf("Informe o mes de aniversario: ");
    scanf("%s", &mes);
    printf("Informe o ano de aniversario: ");
    scanf("%i", &ano);

    /*if((dia >= 21 && dia <= 31 && (strcmp(mes, "01") == 0 || strcmp(mes, "Jan") == 0 || strcmp(mes, "Janeiro") == 0))
       || (dia >= 01 && dia <= 19 && (strcmp(mes, "02")== 0 || strcmp(mes, "Fev") == 0 || strcmp(mes, "Fevereiro") == 0))){
        strcpy(signo, "Aquario");
    }else if((dia >= 20 && dia <= 29 && (strcmp(mes, "02") == 0 || strcmp(mes, "Fev") == 0 || strcmp(mes, "Fevereiro") == 0))
             || (dia >= 01 && dia <= 20 && (strcmp(mes, "03") == 0 || strcmp(mes, "Mar") == 0 || strcmp(mes, "Marco") == 0))){
        strcpy(signo, "Peixes");
    }else if((dia >= 21 && dia <= 31 && (strcmp(mes, "03") == 0 || strcmp(mes, "Mar") == 0 || strcmp(mes, "Marco") == 0))
             || (dia >= 01 && dia <= 20 && (strcmp(mes, "04") == 0 || strcmp(mes, "Abr") == 0 || strcmp(mes, "Abril") == 0))){
        strcpy(signo, "Aries");
    }else if((dia >= 21 && dia <= 30 && (strcmp(mes, "04") == 0 || strcmp(mes, "Abr") == 0 || strcmp(mes, "Abril") == 0))
             || (dia >= 01 && dia <= 20 && (strcmp(mes, "05") == 0 || strcmp(mes, "Mai") == 0 || strcmp(mes, "Maio") == 0))){
        strcpy(signo, "Touro");
    }else if((dia >= 21 && dia <= 31 && (strcmp(mes, "05") == 0 || strcmp(mes, "Mai") == 0 || strcmp(mes, "Maio") == 0))
             || (dia >= 01 && dia <= 20 && (strcmp(mes, "06") == 0 || strcmp(mes, "Jun") == 0 || strcmp(mes, "Junho") == 0))){
        strcpy(signo, "Gemeos");
    }else if((dia >= 21 && dia <= 30 && (strcmp(mes, "06") == 0 || strcmp(mes, "Jun") == 0 || strcmp(mes, "Junho") == 0))
             || (dia >= 01 && dia <= 21 && (strcmp(mes, "07") == 0 || strcmp(mes, "Jul") == 0 || strcmp(mes, "Julho") == 0))){
        strcpy(signo, "Cancer");
    }else if((dia >= 22 && dia <= 31 && (strcmp(mes, "07") == 0 || strcmp(mes, "Jul") == 0 || strcmp(mes, "Julho") == 0))
             || (dia >= 01 && dia <= 22 && (strcmp(mes, "08") == 0 || strcmp(mes, "Ago") == 0 || strcmp(mes, "Agosto") == 0))){
        strcpy(signo, "Leao");
    }else if((dia >= 23 && dia <= 31 && (strcmp(mes, "08") == 0 || strcmp(mes, "Ago") == 0 || strcmp(mes, "Agosto") == 0))
             || (dia >= 01 && dia <= 22 && (strcmp(mes, "09") == 0 || strcmp(mes, "Set") == 0 || strcmp(mes, "Setembro") == 0))){
        strcpy(signo, "Virgem");
    }else if((dia >= 23 && dia <= 30 && (strcmp(mes, "09") == 0 || strcmp(mes, "Set") == 0 || strcmp(mes, "Setembro") == 0))
             || (dia >= 01 && dia <= 22 && (strcmp(mes, "10") == 0 || strcmp(mes, "Out") == 0 || strcmp(mes, "Outubro") == 0))){
        strcpy(signo, "Libra");
    }else if((dia >= 23 && dia <= 31 && (strcmp(mes, "10") == 0 || strcmp(mes, "Out") == 0 || strcmp(mes, "Outubro") == 0))
             || (dia >= 01 && dia <= 21 && (strcmp(mes, "11") == 0 || strcmp(mes, "Nov") == 0 || strcmp(mes, "Novembro") == 0))){
        strcpy(signo, "Escorpiao");
    }else if((dia >= 22 && dia <= 30 && (strcmp(mes, "11") == 0 || strcmp(mes, "Nov") == 0 || strcmp(mes, "Novembro") == 0))
             || (dia >= 01 && dia <= 21 && (strcmp(mes, "12") == 0 || strcmp(mes, "Dez") == 0 || strcmp(mes, "Dezembro") == 0))){
        strcpy(signo, "Sagitario");
    }else{
        strcpy(signo, "Capricornio");
    }*/

    printf("\nVoce e do seguinte signo do zodiaco: %s\n", signo);
}

/* Exercicio 70
Crie um algoritmo que retorne verdadeiro quando um número fornecido for par. */
void If::verdadeiro(){
    int numero;

    printf("Informe um numero: ");
    scanf("%i", &numero);

    if(numero % 2 == 0){
        printf("\nVerdadeiro\n");
    }
}

/* Exercicio 71
Crie um algoritmo que peça o nome, a altura e o peso de duas pessoas e
apresente o nome da mais pesada e o nome da mais alta. */
void If::verificaPessoa(){
    char pessoa1[20], pessoa2[20];
    float pesoP1, pesoP2, alturaP1, alturaP2;

    printf("Informe o nome da primeira pessoa: ");
    scanf("%s", &pessoa1);
    printf("Informe o peso: ");
    scanf("%f", &pesoP1);
    printf("Informe a altura: ");
    scanf("%f", &alturaP1);

    printf("\nInforme o nome da segunda pessoa: ");
    scanf("%s", &pessoa2);
    printf("Informe o peso: ");
    scanf("%f", &pesoP2);
    printf("Informe a altura: ");
    scanf("%f", &alturaP2);

    if(pesoP1 > pesoP2 && alturaP1 > alturaP2){
        printf("\nNome: %s", pessoa1);
        printf("\nPeso: %.3f", pesoP1);
        printf("\nAltura: %.2f\n", alturaP1);
    }else if(pesoP1 > pesoP2 && alturaP2 > alturaP1){
        printf("\nNome: %s, Peso: %.3f", pessoa1, pesoP1);
        printf("\nNome: %s, Altura: %.2f\n", pessoa2, alturaP2);
    }else if(pesoP2 > pesoP1 && alturaP1 > alturaP2){
        printf("\nNome: %s, Peso: %.3f", pessoa2, pesoP2);
        printf("\nNome: %s, Altura: %.2f\n", pessoa1, alturaP1);
    }else{
        printf("\nNome: %s", pessoa2);
        printf("\nPeso: %.3f", pesoP2);
        printf("\nAltura: %.2f\n", alturaP2);
    }
}
