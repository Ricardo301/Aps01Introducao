#include <stdio.h>

int main(){
	int vet[20];
	int x,po,vF=0;
	
	char msg[20];
	
	
	for(int i =0;i<=19;i++){
		
		printf("Digite o valor do vet na possicao [%d]",i);
		scanf("%d",&vet[i]);
	}
	
	printf("Digite o valor a ser verificado no vetor");
	scanf("%d",&x);
	
	for(int i = 0;i<=19;i++){
		if (x == vet[i]){
			vF=1;
			po = i;}
		
			
			
	}
	if (vF == 1)
		printf("Valor encontrado na posicao [%d]",po);
	else
		
	printf("Valor nao encontrado");
	
	
	
	return 0;
}
