/**
 * Crie um programa que usa duas pilhas A e B para ordenar uma sequencia de n
 * números reais dados pelo usuário. A ideia é organizar a pilha A de modo que
 * nenhum item seja empilhado sobre outro menor (use a pilha B apenas como espaço
 * de manobra), depois descarregue e exiba os itens da pilha A.
 */

#include <stdio.h>
#include "../../libs/pilha.h"

int main(void){
  int n, x;
  Pilha A = pilha(256);
  Pilha B = pilha (256);
  printf("Informe o tamanho da lista: ");
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    printf("Informe o %do. item da lista: ", i+1);
    scanf("%d", &x);
    if(vaziap(A)) empilha(x, A);
    else if(topo(A) > x) empilha(x, A);
    else {
      while (topo(A) < x && !vaziap(A)) empilha(desempilha(A), B);
      empilha(x, A);
      while (!vaziap(B)) empilha(desempilha(B), A);
    }
  };
  while (!vaziap(A)) printf("%d ", desempilha(A));
  destroip(&A);
  destroip(&B);
  return 0;
}
