#include <stdio.h>
#include "../../libs/pilha.h"

int main(void){
  Pilha P = pilha(256);
  char str[256];
  printf("Digite a frase: ");
  gets(str);
  for (int i = 0; str[i];i++) empilha(str[i], P);
  printf("Inverso: ");
  while (!vaziap(P)) printf("%c", desempilha(P));
  return 0;
}
