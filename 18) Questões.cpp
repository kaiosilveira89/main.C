#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int multiplicador;
	int multiplicando;
	int produto;

	for (multiplicador = 1; multiplicador <= 10; multiplicador++){
        printf("\nTabuada de %d: \n", multiplicador);
        for(multiplicando = 1; multiplicando <= 10; multiplicando++){
            produto = multiplicando * multiplicador;
            printf("%d x %d = %d \n", multiplicando, multiplicador, produto);
        
        }
        printf("\n");

	}
	return 0;
}
