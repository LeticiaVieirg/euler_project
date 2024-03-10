#include <stdio.h>  /*entrada e saida*/

int main () {

  int x;      /*declaracao das variaveis*/
  int sum=0;

  for (x=1, x<1000; x++){           
    if (((x % 3) == 0) || ((x % 5) == 0)) {  /*verifica se o numero é divisivel por 3 e 5*/
      sum+=x;                                /*valor adicionado*/
    }
  }
  printf("A soma dos números divisíveis por 3 ou 5 até 999 é: %d\n", sum);
  return 0;
}
