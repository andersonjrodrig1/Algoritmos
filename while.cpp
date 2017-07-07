#include "while.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;

/*
Faça um algoritmo que leia um conjunto de números (X) e imprima sua soma
(Soma) e sua média (Media). Admita que o valor 9999 é utilizado como sentinela para fim de leitura.
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
Faça um algoritmo que leia um conjunto de dados numéricos (X) e imprima o maior (Maximo) dentre eles.
Admita que o valor 9999 é utilizado como sentinela.
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
Faça um algoritmo que leia dois números inteiros positivos (Num1 e Num2) e
imprima o quociente (Quoc) e o resto (Resto) da divisão de Num1 por Num2, utilizando apenas as operações de adição e subtração.
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
Construa um algoritmo que, para a progressão geométrica 3; 9; 27; 81; ...;
6561, determine a soma de seus termos. Construa o algoritmo de maneira a não
utilizar a fórmula de soma dos termos. Faça com que o computador gere cada um dos termos a ser somado.
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
Considere que, para cada um dos hotéis fazenda da região, se tenha registrado
o nome do hotel, a sua distância do centro da cidade, o número médio de
visitantes no último feriado e o tipo de acesso ao hotel (0– acesso não asfaltado; 1– acesso asfaltado).
Construa um algoritmo que forneça:
a) O número de hoteis que distam mais de 15km do centro;
b) A quantidade média de visitantes no último feriado, nos hoteis com acesso não asfaltado;
c) O nome e a distância do centro em Km, de todos os hoteis de acesso asfaltado que tiveram menos de 1.000 visitantes.
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

/*
Faça um algoritmo que leia um número e divida-o por dois (sucessivamente)
ate que o resultado seja menor que 1. Mostre o resultado da ultima divisão e a
quantidade de divisões efetuadas.
*/
void While::divisaoNumero(){
    int cont = 0;
    float numero;

    cout << "Informe um numero: ";
    cin >> numero;

    while(numero > 1){
        numero /= 2;
        cont++;
    }

    cout << "\nResultado: " << numero << endl;
    cout << "Quantidade divisoes: " << cont << endl;
}

/*
Escrever um algoritmo que lê um valor N inteiro e positivo e que calcula e escreve o valor de E.
E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + 1 / N!
*/
void While::numeroInteiroPositivo(){
    int numero, e = 1, cont = 1, prod = 1;

    cout << "Digite um numero: ";
    cin >> numero;

    while(cont <= numero){
        for(int i = 1; i <= cont; i++){
            prod *= i;
        }

        e = e + prod + 1;
        cont++;
    }

    cout << "\nValor de E: " << e << endl;
}

/*
Chico tem 1,50 metros e cresce 2 centímetros por ano, enquanto Zé tem 1,10
metros e cresce 3 centímetros por ano. Construa um algoritmo que calcule e
imprima quantos anos serão necessários para que Zé seja maior que Chico.
*/
void While::tempoCrescimento(){
    const float CHICO = 1.50;
    const float ZE = 1.10;
    float alturaChico = CHICO, alturaZe = ZE;
    int qtdTempo = 0;

    while(alturaZe < alturaChico){
        alturaChico += 0.02;
        alturaZe += 0.03;
        qtdTempo++;
    }

    cout << "Altura de Chico: " << CHICO << endl;
    cout << "Altura de Ze: " << ZE << endl;
    cout << "\nZe levara " << qtdTempo << " ano(s) para ficar mais alto que Chico." << endl;
}

/*
Escreva um algoritmo que leia um número n (número de termos de uma
progressão aritmética), a1 (o primeiro termo da progressão) e r (a razão da
progressão) e escreva os n termos desta progressão, bem como a soma dos
elementos.
*/
void While::progressaoAritmetica(){
    int n, a, r, soma = 0;

    cout << "Informe quantidade de termos da progressao: ";
    cin >> n;
    cout << "Informe o primeiro termo da progressao: ";
    cin >> a;
    cout << "Informe a razao da progressao: ";
    cin >> r;

    while(n > 0){
        soma += a;
        a += r;
        n--;
    }

    cout << "\nA soma da progresao aritmetica: " << soma << endl;
}

/*
Foi feita uma pesquisa entre os habitantes de uma região. Foram coletados os
dados de idade, sexo (M/F) e salário. Faça um algoritmo que informe:
a) a média de salário do grupo;
b) a maior e a menor idade do grupo;
c) a quantidade de mulheres com salário até R$100,00.
Encerre a entrada de dados quando for digitada uma idade negativa.
*/
void While::idadeHabitantes(){
    int idade = 0, maiorIdade = 0, menorIdade = 9999, qtdMulheres = 0, cont = 0;
    char sexo[1];
    float salario, somaSalario = 0;

    while(idade >= 0){
        if(idade >= 0){
            cout << "\nInforme a idade: ";
            cin >> idade;
            cout << "Informe o sexo: ";
            cin >> sexo;
            cout << "Informe o salario: ";
            cin >> salario;

            if(salario > maiorIdade){
                maiorIdade = salario;
            }

            if(salario < menorIdade){
                menorIdade = salario;
            }

            if(strcasecmp(sexo, "F") == 0 && salario <= 100){
                qtdMulheres++;
            }
        }
    }

    float mediaSalario = somaSalario / cont;

    cout << "\nMedia salario R$" << mediaSalario << endl;
    cout << "Maior idade: " << maiorIdade << endl;
    cout << "Menor idade: " << menorIdade << endl;
    cout << "Quantidade de mulheres com salario ate R$100: " << mediaSalario << endl;
}

/*
Faça um algoritmo que leia um número inteiro N, calcule e mostre o maior quadrado menor ou igual a N.
Por exemplo, se N for igual a 38, o Menor quadrado é 36 (quadrado de 6).
*/
void While::menorQuadrado(){
    int numero;
    float quadrado, resto;

    cout << "Informe um numero: ";
    cin >> numero;

    do{
        quadrado = sqrt(numero);
        resto = quadrado - (int)quadrado;
        numero--;
    }while(resto > 0);

    cout << "\nMenor quadrado: " << (int)quadrado << endl;
}

/*
Faça um algoritmo que leia um número FN, calcule e mostre os N primeiros
termos da sequência de Fibonnaci (0, 1, 1, 2 , 3, 5, 8, ...). O valor lido para N sempre será maior ou igual a 2.
*/
void While::sequenciaFibonacci(){
    int fa, a = 0, b = 1, c = 0;

    cout << "\nInforme um numero: ";
    cin >> fa;

    if(fa < 2){
        cout << "\nNumero invalido..." << endl;
        exit(0);
    }

    while(fa > 0){
        cout << c << " ";
        a = c;
        c = a + b;
        b = a;
        fa--;
    }
}

/*
Foi realizada uma pesquisa de algumas características físicas da população de uma certa região,
a qual coletaram os seguintes dados referentes a cada habitante para serem analisados:
- sexo (masculino e feminino)
- cor dos olhos (azuis, verdes ou castanhos)
- cor dos cabelos (louros, castanhos, pretos)
- idade
Faça um algoritmo que determine e escreva:
a) a maior idade dos habitantes;
b) a quantidade de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos, inclusive;
c) a quantidade de indivíduos que tenham olhos verdes e cabelos louros;
O final do conjunto de habitantes é reconhecido pelo valor -1 informado como idade.
*/
void While::pesquisaPopulacional(){
    char sexo, olhos, cabelos;
    int idade, maiorIdade = 0, qtdSexoIdade = 0, qtdOlhosCabelos = 0;

    cout << "Sexo: M- Masculino | F- Feminino" << endl;
    cout << "Cor de Olhos: A- Azuis | V- Verdes | C- Castanhos" << endl;
    cout << "Cor de Cabelos: L- Louros | C- Castanhos | P- Pretos" << endl;

    while(idade != -1){
        cout << "\nInforme o sexo: ";
        cin >> sexo;
        cout << "Informe a cor dos olhos: ";
        cin >> olhos;
        cout << "Informe a cor dos cabelos: ";
        cin >> cabelos;
        cout << "Informe a idade: ";
        cin >> idade;

        if(idade > maiorIdade){
            maiorIdade = idade;
        }

        if(sexo == 'f' && idade >= 18 && idade < 36){
            qtdSexoIdade++;
        }

        if(olhos == 'v' && cabelos == 'l'){
            qtdOlhosCabelos++;
        }
    }

    cout << "\nMaior idade: " << maiorIdade << endl;
    cout << "Individuos do sexo feminino entre 18 e 35 anos: " << qtdSexoIdade << endl;
    cout << "Quantidade de individuos que tenha olhos verdes e cabelos louros: " << qtdOlhosCabelos << endl;
}

/*
Faça um algoritmo que leia informações de alunos (Matricula, Nota1, Nota2 ,Nota3)com o fim das informações indicado por Matricula = 9999.
Para cada aluno deve ser calculada a média final de acordo com a seguinte fórmula:
Média final = [(2 * Nota1) +(3* Nota2) +(4* Nota 3)] / 9
Se a média final for igual ou superior a 5, o algoritmo deve mostrar Matrícula,
Média Final e a mensagem "APROVADO"; se a média final for inferior a 5, o algoritmo deve mostrar Matricula, Média Final e a mensagem "REPROVADO".
Ao final devem ser mostrados o total de aprovados, o total de alunos da turma e o total de reprovados.
*/
void While::mediaAluno(){
    int matricula, nota1, nota2, nota3, qtdAprovados = 0, qtdReprovados = 0;
    float media;

    while(matricula != 9999){
        cout << "\nInforme a matricula: ";
        cin >> matricula;
        cout << "Informe a nota 1: ";
        cin >> nota1;
        cout << "Informe a nota 2: ";
        cin >> nota2;
        cout << "Informe a nota 3: ";
        cin >> nota3;

        media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 4)) / 9;

        if(media >= 5){
            cout << "Matricula: " << matricula << " Media: " << media << " Status: Aprovado" << endl;
            qtdAprovados++;
        }else{
            cout << "Matricula: " << matricula << " Media: " << media << " Status: Reprovado" << endl;
            qtdReprovados++;
        }
    }

    cout << "\nQuantidade Aprovados: " << qtdAprovados << endl;
    cout << "Quantidade Reprovados: " << qtdReprovados << endl;
}

/*
Faça um algoritmo que leia o número de andares de um prédio e, a seguir, para cada andar do prédio, leia o número de pessoas que entraram e saíram do elevador.
Considere que o elevador está vazio e está subindo, os dados se referem a apenas uma “subida” do elevador e  que o número de pessoas dentro do elevador sempre será maior ou igual a 0.
Se o número de pessoas, após a entrada e saída for maior que 15, deve ser mostrada a mensagem “EXCESSO DE PASSAGEIROS . DEVEM SAIR" em
seguida, o número de pessoas que devem sair do elevador, de modo que seja obedecido o limite de 15 passageiros.
Após a entrada de pessoas no último andar o algoritmo deve mostrar quantas pessoas irão descer.
*/
void While::andaresPredio(){
    const int LIMITE = 15;
    int qtdAndares, qtdEntra, qtdSai, devemDescer, qtdPessoas = 0, andar = 0;

    cout << "Informe a quantidade de andares tem o predio: ";
    cin >> qtdAndares;

    while(andar < qtdAndares){
        cout << "\nAndar " << andar << endl;
        cout << "Quantidade de pessoa que entrarao: ";
        cin >> qtdEntra;

        qtdPessoas += qtdEntra;

        if(andar > 0 && andar < qtdAndares -1 && qtdPessoas > 0){
            cout << "Quantidade de pessoas que sairao: ";
            cin >> qtdSai;

            if(qtdSai > qtdPessoas){
                qtdPessoas = 0;
            }else{
                qtdPessoas -= qtdSai;
            }
        }

        if(qtdPessoas > LIMITE){
            devemDescer = qtdPessoas - LIMITE;
            qtdPessoas -= devemDescer;
            cout << "EXCESSO DE PASSAGEIROS. DEVEM SAIR: " << devemDescer << endl;
        }

        andar++;
    }

    cout << "\nTotal de Pessoas que irao descer: " << qtdPessoas << endl;
}
