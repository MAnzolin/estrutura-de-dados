#include <stdio.h>
#include "../../libs/pilha.h"

int main(void){
  int n;
  Pilha P = pilha(32);
  printf("Decimal: ");
  scanf("%d", &n);
  int dec = n;
  do{
    empilha(n%2, P);
    n /= 2;
  } while (n!=0);
  printf("%d em binario = ", dec);
  while (!vaziap(P)) printf("%d", desempilha(P));
  return 0;
}
