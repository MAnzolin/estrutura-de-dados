/**
 * Usando pilha, crie uma função para verificar se uma expressão composta apenas
 * por chaves, colchetes e parênteses, representada por uma cadeia, está ou não
 * balanceada. Por exemplo, as expressões "[{()()}{}]" e "{[([{}])]}"
 * estão balanceadas, mas as expressões " {[(}])" e " {[)()(]}" não estão.
 */


#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "../../libs/pilha.h"


int balanceada(char *exp){
  Pilha p = pilha(strlen(exp));
  for (int i = 0; exp[i]; i++) {
    char l = exp[i];
    if ( strchr("({[", l))
      empilha(l, p);
    else if (vaziap(p)) {
      destroip(&p);
      return 0;
    }
    else if ( l == ')' && topo(p) == '(') desempilha(p);
    else if ( l == '}' && topo(p) == '{') desempilha(p);
    else if ( l == ']' && topo(p) == '[') desempilha(p);
    else break;
  }
  int x = vaziap(p);
  destroip(&p);
  return x;
}


int main(void){
  char exp[256];
  printf("Informe a expressao:");
  gets(exp);
  int b = balanceada(exp);
  printf("%s\n", b?"A expressao esta balanceada":"A expressao nao esta balanceada");
  system("pause");
  return 0;
}
