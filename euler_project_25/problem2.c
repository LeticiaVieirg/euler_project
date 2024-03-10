#include <stdio.h>  /*entrada e saida*/
#include <stdlib.h> /*alocação da memoria*/

int main() {
    int currentFib = 1; /*número atual na sequência de Fibonacci*/
    int nextFib = 2;    /*proximo numero */
    int sum = 0;        /*soma dos numeros pares */
    int temp;           /*temporaria - troca de valores nas atualizações */

    while (nextFib < 4000000) { /*loop menor que o valor*/
        if (nextFib % 2 == 0) { /*verificacao se o proximo numero e par*/
            sum += nextFib;     /*elemento adicionado - caso seja par*/
        }
      
        // Calcula o próximo número da sequência de Fibonacci
        temp = currentFib;           /*atualizacao de valores*/
        currentFib = nextFib;        /*atualizacao de valores*/
        nextFib = temp + currentFib; /*atualizacao de valores*/
    }

    printf("A soma dos números pares na sequência de Fibonacci até 4 milhões é: %d\n", sum);  /*imprime o valor na tela*/
    return 0;  /*programa efetuado com sucesso*/
}
