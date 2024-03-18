#include <stdio.h> /*Bliblioteca entrada e saida*/

int Palindromo(int numero) {                          /*Funcao que verifica se um numero é palindromo*/
    int numeroInvertido = 0, numeroOriginal = numero; /*Declaracao de variaveis*/
    while (numero != 0) {                             /*Loop diferente de 0*/
        numeroInvertido = numeroInvertido * 10 + numero % 10; /*Inverte o numero digitado, desloca para esquerda e */
        numero = numero / 10;                         /*Divide por 10 e remove o ultimo digito*/
    }
    return numeroOriginal == numeroInvertido;
}

int main() {
    int maiorPalindromo = 0;

    for (int i = 100; i < 1000; i++) {
        for (int j = i; j < 1000; j++) {
            int produto = i * j;
            if (Palindromo(produto) && produto > maiorPalindromo) {
                maiorPalindromo = produto;
            }
        }
    }

    printf("O maior palíndromo produto de dois números de três dígitos é: %d\n", maiorPalindromo);

    return 0;
}
