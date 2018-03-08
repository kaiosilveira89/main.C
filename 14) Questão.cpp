#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num = 11;

	for (int i = 10; i > 0; i--)
	{
	    num--;
        printf("%d ", num);
	}
	
	return 0;
}
