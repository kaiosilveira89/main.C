#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int multiplicando;
	int multiplicador;
	int produto;

	printf("Digite qual tabuada de multiplicação você deseja visualidar: \n");
	scanf("%d", &multiplicador);
	
	
    while (multiplicador > 10) // Testando a condição
    {
        printf("Digite novamente qual tabuada de multiplicação você deseja visualidar: \n");
	    scanf("%d", &multiplicador);
    }
    
	printf("Tabuada de %d:\n", multiplicador);
    for(multiplicando = 1; multiplicando <= 10; multiplicando++){
        produto = multiplicando * multiplicador;
        printf("%d x %d = %d \n", multiplicando, multiplicador, produto);
        }
        
	return 0;
}
