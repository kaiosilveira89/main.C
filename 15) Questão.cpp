#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	int cont=1;
		
	printf("Digite at� onde voc� deseja contar: ");
	scanf("%d", &n);
	
	for (cont; cont <= n; cont ++){
		printf("%d ", cont);
	
	}
	

	return 0;
}
