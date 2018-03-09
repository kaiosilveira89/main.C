#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char produto[20];
	int quantidade;
	float preco;
	float total;
	float desconto5;
	float desconto9;
	float desconto10;
	float totalPagar;
		
	printf("--------------------------------\n");
			
	printf("Digite o nome do produto: ");
	scanf("%s", &produto); 
		
	printf("Digite a quantidade que deseja adquirir: ");
	scanf("%d", &quantidade);
		
	printf("Digite o preço do produto: R$");
	scanf("%f", &preco);
		
	printf("--------------------------------\n");
		
	total = preco*quantidade;
	desconto5 = total*0.02;
	desconto9 = total*0.03;
	desconto10 = total*0.05;
	
   if (quantidade > 5){
       	if (quantidade > 10){
	   	totalPagar = total - desconto10;
            	printf("Total a pagar por %d unid. de %s: R$%.2f.\nSeu desconto foi de: R$%.2f", quantidade, produto, totalPagar, desconto10);
         	}

   	else {
		totalPagar = total - desconto9;
    		printf("Total a pagar por %d unid. de %s: R$%.2f.\nSeu desconto foi de: R$%.2f", quantidade, produto, totalPagar, desconto9);
 		}
	}
   else	{
	totalPagar = total - desconto5;
        printf("Total a pagar por %d unid. de %s: R$%.2f.\nSeu desconto foi de: R$%.2f", quantidade, produto, totalPagar, desconto5);
	}

	return 0;
}
