#include <stdio.h>

void main () {

  //declaracao das variaveis
  int x;
  int sum;

  for (x=1, x<1000; x++){
    if (((x%3)==0) || ((x%5)==0)) {
      sum=sum+x;
    }
  }
  printf("%d \n, sum);
