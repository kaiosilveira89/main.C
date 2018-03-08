#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int valor1;
	int valor2;
	int resultado;
	
	printf("Digite 1º valor: \n");
	scanf("%d", &valor1);

    printf("Digite 2º valor: \n");
	scanf("%d", &valor2);

	while (valor2 == 0) {
    
         printf("Digite 2º valor: \n");
         scanf("%d", &valor2);

        }
        
    resultado = valor1/valor2;
    printf("Resultado da divisão é: %d", resultado);
		
	return 0;
}
