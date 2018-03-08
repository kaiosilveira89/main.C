#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char nomeProduto;
	float quantidade;
	float preco;
	float total;
	float desconto5 = total*0.02;
    float desconto9 = total*0.03;
    float desconto10 = total*0.05;
    float totalPagar;
	
	printf("Digite o nome do produto: \n");
	scanf("%c", &nomeProduto);
	
	printf("Digite o preço do produto: \n");
	scanf("%f", &preco);
	
	printf("Digite a quantidade que deseja adquirir: \n");
	scanf("%f", &quantidade);
	
	total = preco*quantidade;
	
	if (quantidade > 5){
            if ( quantidade <= 10){
                totalPagar=total-desconto9;
                printf("Total a pagar por %0.0f unid. de %c: \n %0.2f", quantidade, nomeProduto, totalPagar);
                }
            else {
                totalPagar=total-desconto10;
                printf("Total a pagar por %0.0f unid. de %c: \n %0.2f", quantidade, nomeProduto, totalPagar);
            }
	    }
	else {
	    totalPagar=total-desconto5;
        printf("Total a pagar por %0.0f unid. de %c: \n %0.2f", quantidade, nomeProduto, totalPagar);
		}

	return 0;
}
