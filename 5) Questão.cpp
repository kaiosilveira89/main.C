#include<stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a;
	
	printf("Digite um n�mero para saber se ele � PAR ou IMPAR: ");
	scanf("%d", &a);
	
	if( a%2 == 0){
		printf("%d � um n�mero PAR.", a);
	}
	else{
		printf("%d � um n�mero IMPAR.", a);
	}	
	
	return 0;
}
