#include <stdio.h>
#include <stdlib.h>
struct nadadores{
	char nome[30];
	int idade;
};
int main(){
	int i;
	struct nadadores nad[3];
	
	for(i = 0;i<3;i++){
		printf("Digite o nome do nadador: ");
		setbuf(stdin,NULL);
		gets(nad[i].nome);
		printf("Digite a idade do nadador: ");
		scanf("%d",&nad[i].idade);
	}	
	for(i = 0;i<3;i++){
		if(nad[i].idade>=5 && nad[i].idade<=7){
			printf("Nadador: %s com %d anos esta na categoria Infantil A\n",nad[i].nome,nad[i].idade);
		}else if(nad[i].idade>=8 && nad[i].idade<=10){
			printf("Nadador: %s com %d anos esta na categoria Infantil B\n",nad[i].nome,nad[i].idade);
		}
		else if(nad[i].idade>=11 && nad[i].idade<=13){
			printf("Nadador: %s com %d anos esta na categoria Juvenil A\n",nad[i].nome,nad[i].idade);
		}else if(nad[i].idade>=14 && nad[i].idade<=17){
			printf("Nadador: %s com %d anos esta na categoria Juvenil B\n",nad[i].nome,nad[i].idade);
		}else if(nad[i].idade>=18){
			printf("Nadador: %s com %d anos esta na categoria Adulto\n",nad[i].nome,nad[i].idade);
		}
	}
	
}
