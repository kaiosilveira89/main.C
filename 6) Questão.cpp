#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a;
	int b;
	
	printf("Digite um n�mero: \n");
	scanf("%d", &a);
	printf("Digite outro n�mero: \n");
	scanf("%d", &b);
	
	if (a > b){
		printf("A ordem crescente �: %d, %d.", b, a);
		}	
	else {
		printf("A ordem crescente �: %d, %d.", a, b);
		}
	return 0;
}
