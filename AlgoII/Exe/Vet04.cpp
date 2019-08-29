#include<stdio.h>

int main(){
	int vet[40];
	int pares=0;
	
	for(int i = 0;i<=39;i++){
		printf("Digite o valor do vet na possicao [%d]",i);
		scanf("%d",&vet[i]);
		if (vet[i]%2==0 ){
			pares++;
		}
	}
	printf("Numeros de pares = %d",pares);
	return 0;
}
