#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int x[3];
	int i, j, temp;
	/* Leitura do Vetor */
	for (i = 0; i<3; i++)
	
	{
		printf("Digite um número: ");
		scanf("%d",&x[i]);
	}
	//ordenando o vetor
	for (i=0;i<3; i++)
	for(j=i+1;j<3;j++)
	{
		if (x[i]>x[j])
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
	}
	
	/* Impressão do Vetor Ordenado */
	printf("Valores em ordem crescente: \n");
	for(i=0;i<3;i++)
	printf(" %d",x[i]); 
	
	return 0;
}
