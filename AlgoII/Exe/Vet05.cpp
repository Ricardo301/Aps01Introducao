#include<stdio.h>

int main(){
	int vet[40];
	
	
	for(int i = 0;i<=39;i++){
		printf("Digite o valor do vet na possicao [%d]",i);
		scanf("%d",&vet[i]);
		if (vet[i]<0 ){
			vet[i]=0;
		}
	}
	for(int i = 0;i<=39;i++){
		printf("%d ",vet[i]);
	}
	return 0;
}
