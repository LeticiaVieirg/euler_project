#include <stdio.h> /*Biblioteca entrada e saida*/

int main() {
    long int n;      /*Criação da variavel*/
    printf("Digite um número inteiro positivo: ");
    scanf("%ld", &n);

    if (n <= 1) {    /*Verificação do numero inserido*/
        printf("Por favor, insira um número inteiro positivo maior que 1.\n");
        return 1; /*Retorna 1 para indicar um erro*/
    }

    long int div = 2, ans = 0, maxFact; /*Declaração e inicialização de variaveis*/

    while (n != 0) {         /*Loop enquanto n for diferente de 0*/
        if (n % div != 0) {  /*Resto da divisao, div nao é divisor de n*/
            div = div + 1;   /*Incrementação, testar proximo elemento*/
        } else {
            maxFact = n;    /*Arualizar variavel divisivel*/
            n = n / div;    /*Divisao*/
            if (n == 1) {   /*Verifica se n equivale a 1*/
                printf("%ld é o maior fator primo!\n", maxFact);
                ans = 1;    /*Encontra o maior fator primo*/
                break;
            }
        }
    }

    if (ans == 0) {  /*Verifica se o valor equivale a 0*/
        printf("%ld é o maior fator primo!\n", maxFact);
    }

    return 0;
}
