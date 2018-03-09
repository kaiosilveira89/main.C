#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	for (int i = 1; i <= 10; i++){
		int resultado;
		resultado = i * 8;
		printf("%d ", resultado);
	}
	
	return 0;
}
