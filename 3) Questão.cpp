#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float notas[4] = {0}; 		// 	estamos criando um vetor para alocar 4 notas.		//
					// 	nota[1] , nota[2], nota[3], nota[4].			//
					// 	{0} significa que o vetor vázio, ou seja,		//
					//	sem nenhum valor inserido.				//
	float soma_total = 0;
	float media = 0;
	
	printf("Digite 4 notas: \n");
	for (int i = 0; i < 4; i++){
		scanf("%f", &notas[i]);
	}
	
	for (int i = 0; i < 4; i++){
		soma_total += notas[i]; // 	para a= a + a, fazemos a++.				//
					// 	para a = a + b, fazemos: a +=b.				//
	}				// 	nesta operação, estamos fazendo:			//
					// 	soma_total = nota[1] + nota[2] + nota[3] + nota[4]	//
	
	media = soma_total/4;

	printf("A média aritimetica é: %.2f", media);
	
	return 0;
	}
