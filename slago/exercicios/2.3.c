/**
 * Usando pilha, crie um programa para inverter a ordem das letras nas palavras
 * de uma frase digitada pelo usuário. Por exemplo, se for difitada a frase
 * "apenas um teste", o programa deverá exibir a frase "sanepa mu etset".
 */

#include <stdio.h>
#include "../../libs/pilha.h"

int main(void){
  char frase[256];
  Pilha P = pilha(256);
  printf("Digite a frase: ");
  gets(frase);
  for(int i = 0; frase[i]; i++){
    if (frase[i] != ' ') empilha(frase[i], P);
    else {
      while (!vaziap(P)) printf("%c", desempilha(P));
      printf(" ");
    }
  }
  while (!vaziap(P))
    printf("%c", desempilha(P));
  destroip(&P);
  return 0;
}

