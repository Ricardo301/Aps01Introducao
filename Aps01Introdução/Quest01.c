#include <stdio.h>
#include<stdlib.h>

int main(){
	char nome[20],endereco[40],telefone[10],celular[11];
	int idade;
	char sexo;
	float nota;
	
	printf("Digite seu nome :");
	gets(nome);
	
	printf("Digite seu endereco :");
	gets(endereco);
	
	printf("Digite sua idade :");
	scanf("%d",&idade);
	
	printf("Digite seu sexo (M/F) :");
	scanf(" %c",&sexo);
	
	printf("Digite seu telefone :");
	scanf(" %s",&telefone);
	
	printf("Digite seu celular :");
	scanf(" %s",&celular);
	
	printf("Digite sua nota :");
	scanf("%f",&nota);
	
	printf("============================================================================\n");
     
	printf("Nome = %s\n",nome);
	printf("Idade = %d\n",idade);
	printf("Sexo = %c\n",sexo);
	printf("Endereco = %s\n",endereco);
	printf("Telefone = %s\n",telefone);
	printf("Celular = %s\n",celular);
	printf("Nota = %.2f\n",nota);
	
	return 0;
}
