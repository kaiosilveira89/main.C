#include<stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a;
	int b;
	int soma;
	
	
	printf("Digite primeiro número: \n");
	scanf("%d", &a);
	
	printf("Digite segunto número: \n");
	scanf("%d", &b);	
	
	soma = a+b;
	printf("Resultado da soma é: %d", soma);
	
	return 0;
}
