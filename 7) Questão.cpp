#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int x;
	int a;
	int b;
	
	printf("Digite a: \n");
	scanf("%d", &a);
	printf("Digite b: \n");
	scanf("%d", &b);
	printf("Digite x: \n");
	scanf("%d", &x);

	if (a<b){
		if (a<x){
				if (x<b){
					printf("%d est� entre %d e %d. (A < X < B) \n", x, a, b);
					}
				else{
					printf("%d N�O est� entre %d e %d. (X > B) \n", x, a, b);
					}
		}
		else{
			printf("%d N�O est� entre %d e %d. (A > X) \n", x, a, b);
			}
		}
	else{
		printf("O teste n�o pode ser realizado pois %d N�O � NAIOR que %d. (A > B) \n", a, b);
		}
	return 0;
}
