#include<stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a;
	
	printf("Digite um número para saber se ele é PAR ou IMPAR: ");
	scanf("%d", &a);
	
	if( a%2 == 0){
		printf("%d é um número PAR.", a);
	}
	else{
		printf("%d é um número IMPAR.", a);
	}	
	
	return 0;
}
