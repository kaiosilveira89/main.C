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


	if (a<b){
		printf("%d MENOR %d. (A < B)\n", a, b);
		}
	else{
		printf("%d MAIOR %d. (A > B)\n", a, b);
		}
		
	return 0;
}
