#include <stdio.h>
#include <stdlib.h>
struct pessoa{
	char nome[50],telefone[10];
	int idade;
	float altura;
};
int main(){
	FILE *arquivo;
	arquivo = fopen("amigos.txt","w");
	struct pessoa amigos[5];
	int i;
	if(arquivo == NULL){
		printf("Erro ao criar/abrir arquivo \n");
		exit(1);
	}

	for(i=0;i<5;i++){
	printf("-------------- Dados do amigo %d ------------------\n",i+1);
	printf("Digite o nome :");
	setbuf(stdin,NULL);
	gets(amigos[i].nome);
	fputs(amigos[i].nome,arquivo);
	fputs("\t",arquivo);
	printf("Digite o Telefone :");
	setbuf(stdin,NULL);
	gets(amigos[i].telefone);
	fputs(amigos[i].telefone,arquivo);
	fputs("\t",arquivo);	
	printf("Digite a Idade :");
	scanf("%d",&amigos[i].idade);
	setbuf(stdin,NULL);
	fprintf(arquivo,"%d",amigos[i].idade);
	fputs("\t",arquivo);	
	printf("Digite a Altura :");
	scanf("%f",&amigos[i].altura);
	setbuf(stdin,NULL);
	fprintf(arquivo,"%.2f",amigos[i].altura);
	fputs("\n",arquivo);	
	}
	fclose(arquivo);
	
	
	
	
	
	
	return 0;
}
