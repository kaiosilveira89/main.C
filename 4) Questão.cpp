#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float notas[4] = {0};
	float soma_total = 0;
	float media = 0;
	
	printf("Digite 4 notas: \n");
	for (int i = 0; i < 4; i++){
		scanf("%f", &notas[i]);
	}
	
	for (int i = 0; i < 4; i++){
		soma_total += notas[i];
	}
	
	media = soma_total/4;

	printf("A média aritimetica foi: %.2f \n", media);
	
	if(media >= 6){
		printf("Aprovado");
	}
	else{
		printf("Reprovado");
	}
	
	return 0;
	}
