/**
 * Supondo que o usuário digite as cadeias "um", "dois" e "tres", qual será a
 * saída exibida pelo programa a seguir? Por que?
 *
 *
 * RESPOSTA
 * A saída do programa é "tres tres tres". Isso ocorre porque a variável 's' é
 * um ponteiro para a cadeia de caracteres, e não a cadeia em si. Desse modo,
 * será exibido três vezes o conteúdo guardado na cadeia.
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "../../libs/pilha.h"


int main(void){
  Pilha P = pilha(5);
  char s[11];
  for (int i = 1; i<= 3; i++) {
    printf("Cadeia: ");
    gets(s);
    empilha(s, P);
  }
  while (!vaziap(P)) puts(desempilha(P));
  destroip(P);
  return 0;
}
