#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a;
	int b;
	
	printf("Digite um número: \n");
	scanf("%d", &a);
	printf("Digite outro número: \n");
	scanf("%d", &b);
	
	if (a > b){
		printf("A ordem crescente é: %d, %d.", b, a);
		}	
	else {
		printf("A ordem crescente é: %d, %d.", a, b);
		}
	return 0;
}
