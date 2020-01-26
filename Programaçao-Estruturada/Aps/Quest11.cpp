#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	FILE *arquivo;
	char c;
	int	n=0;
	
	arquivo = fopen("C:/Users/ricar/Desktop/Teste.txt","r");
	if (arquivo == NULL){
		printf("Erro ao abrir! \n");
	}
	do{
		c =getc(arquivo);
		if(c == '\n')
			continue;
		else
			n++;
		
	}while(c != EOF);
	n--;
	printf("Quantidade de caracteres = %d",n);
	
	
	
}
