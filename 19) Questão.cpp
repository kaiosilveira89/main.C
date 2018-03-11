#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
    char produto[15] = {0};
    float preco[15] = {0};
    float total = 0;
    float media = 0;
    int i, j;
    float aux = 0;
    
    //incrementando vetores
    for(i = 1; i < 16; i++){
        printf("Digite o nome do %d° produto: \n", i);
        scanf("%s", &produto[i]);
        printf("Digite o preço do %d° produto: \n", i);
        scanf("%f", &preco[i]);
    }

    //busca maior preço
    for(i = 1; i < 16; i++)
    for(j = i+1; j < 16; j++){
        if (preco[i]>preco[j]){
            aux = preco[i];   
        }
        else
        {
            aux = preco[j];
        }
    }
    
    //soma de vetores
    for(i = 1; i < 16; i++){
        total += preco[i];
    }

    media = total/15;

    
    //saida de dados
    
    printf("O preço total é: R$%.2f\n", total);
    printf("O maior preço encontrado foi: R$%.2f.\n", aux);
    printf("O preço médio é: R$%.2f\n", media);

	return 0;
}
