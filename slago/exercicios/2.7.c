/**
 * Usando a função _strdup(), declarada em string.h, corrija o exercício anterior.
 * Essa função copia a cadeia s para uma área da memória, alocada dinamicamente pela
 * função malloc(), e devolve o endereço dessa área. Depois de usada, essa cópia
 * pode ser destruída com a função free();
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "../../libs/pilha.h"


int main(void) {
  Pilha P = pilha(5);
  char s[11];
  for (int i = 1; i<= 3; i++) {
    printf("Cadeia: ");
    gets(s);
    empilha(_strdup(s), P);
  }
  while (!vaziap(P)) puts(desempilha(P));
  destroip(&P);
  return 0;
}
