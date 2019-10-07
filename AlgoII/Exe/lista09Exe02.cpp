#include <stdio.h>
#include <stdlib.h>

struct lojas{
	char nome[30];
	char telefone[30];
	float preco;
};
int main(){
	int i;
	float media,soma;
	struct lojas loja[5];

	for(i=0;i<5;i++){
		printf("Nome da loja [%d]",i+1);
		setbuf(stdin,NULL);
		gets(loja[i].nome);
		
		printf("Telefone da loja [%d]",i+1);
		setbuf(stdin,NULL);
		gets(loja[i].telefone);
	
		printf("Preco do produto [%d]",i+1);
		scanf("%f",&loja[i].preco);
	}	
	for(i=0;i<5;i++){
		soma+=loja[i].preco;
	}
	media = soma/5;
	printf("Media = %f\n",media);
		printf("Lojas abaixo da media: \n");
	for(i=0;i<5;i++){
	
		if(loja[i].preco < media){
			printf("Nome: %s\n",loja[i].nome);
			printf("Telefone: %s\n",loja[i].telefone);
		}
	}
	
		
	
	
	return 0;
}
