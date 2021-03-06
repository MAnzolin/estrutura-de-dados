#include <stdio.h>
#include <ctype.h>
#include "../../libs/pilha.h"

void limpa(char *exp){
	int j = 0;
	for (int i = 0; exp[i]; i++){
		if (exp[i] != ' ') exp[j++] = exp[i];
	}
	exp[j] = '\0';
}

int palindromo(char *exp){
	Pilha p = pilha(256);
	for (int i = 0; exp[i]; i++) empilha(exp[i], p);
	int i = 0;
	while(!vaziap(p) && toupper(exp[i++]) == toupper(desempilha(p)));
	return vaziap(p);
}

int main(void){
	char exp[256];
	printf("Informe a frase: ");
	gets(exp);
	limpa(exp);
	int p = palindromo(exp);
	printf("%s\n", p?"Palindromo": "Nao eh palindromo");
	return 0;
}
