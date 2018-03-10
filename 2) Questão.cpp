#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int base;
	int altura;
	int area;
	int perimetro;
	
	printf("Digite quantos cm tem a base do retangulo: \n");
	scanf("%d", &base);
	printf("Digite quantos cm tem a altura do retangulo: \n");
	scanf("%d", &altura);
	
	area=base*altura;
	printf("A área é igual a: %d cm².", area);
 	perimetro= (base*2) + (area*2);
	printf("Perimetro é igual a: %d.", perimetro);
		
	return 0;
}
