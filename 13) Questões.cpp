#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num = 0;

	for (int i = 0; i < 10; i++)
	{
	    num++;
        printf("%d", num);
	}
	
	return 0;
}
