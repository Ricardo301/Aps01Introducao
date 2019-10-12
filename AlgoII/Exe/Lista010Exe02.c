#include <stdio.h>
#include <stdlib.h>
struct endereco{
	int numero;
	char rua[30],comp[30],cep[15];
	
};
struct contato{
	char telefone[15],celular[15];
	char email [40];
	
};
struct ficha{
	struct endereco end;
	struct contato conta;
	char nome[50];
	char sexo;
	float renda;
	char estadoCivil[30];
	int codigo;
	float compras[3];
	char data[10];
	
	
};

int main(){
	
	struct ficha cliente[1];
	int i;
	printf("***********************************\n");
	printf("      Cadastro de Clientes:        \n");
	printf("***********************************\n");
	for(i=0 ;i<1;i++){
		printf("Codigo: "); scanf("%d",&cliente[i].codigo);
		setbuf(stdin,NULL);
		printf("Digite o nome do cliente: "); gets(cliente[i].nome);
		
		printf("Digite a data de nascimento do cliente: ");	scanf("%s",cliente[i].data);
		setbuf(stdin,NULL);
		printf("Digite o sexo[F-M] do cliente: ");	scanf(" %c",&cliente[i].sexo);
		setbuf(stdin,NULL);
		printf("Digite o estado civil do cliente: ");	scanf("%s",cliente[i].estadoCivil);
		printf("Digite a reda  do cliente: ");	scanf("%f",&cliente[i].renda);
		setbuf(stdin,NULL);
		printf("Digite a rua  do cliente: ");	gets(cliente[i].end.rua);
		printf("Digite o numero da rua do cliente: ");	scanf("%d",&cliente[i].end.numero);
		setbuf(stdin,NULL);
		printf("Digite o completo da rua do cliente: ");	gets(cliente[i].end.comp);
		printf("Digite o cep da rua do cliente: ");	gets(cliente[i].end.cep);
	}
	printf("***********************************\n");
	printf("     Fichas de Clientes:        \n");
	printf("***********************************\n");
	for(i=0 ;i<1;i++){
		printf("Codigo: %d		",cliente[i].codigo);
		printf("Nome: %s		",cliente[i].nome);
		printf("Data de Nascimento: %s		\n\n",cliente[i].data);
		printf("Sexo: %c	",cliente[i].sexo);
		printf("Estado civil: %s		",cliente[i].estadoCivil);
		printf("Renda: %f		\n\n",cliente[i].renda);
		printf("Endereco:\n");
		printf("Rua: %s		",cliente[i].end.rua);
		printf("Nº: %d		",cliente[i].end.numero);
		printf("Complemento: %s		",cliente[i].end.comp);
		printf("Cep: %s		\n\n",cliente[i].end.cep);
		
	}
	
	
	
	
	return 0;
}
