#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int idade;
	
	printf("Digite sua idade: \n");
	scanf("%d", &idade);
	
	if (idade>=18){
		if (idade>=65){
					printf("Pessoa idosa.\n");
					}
						
		else{
			printf("Maior de idade.\n");
			}
		}
	else{
		printf("Menor de idade\n");
		}
	return 0;
}
