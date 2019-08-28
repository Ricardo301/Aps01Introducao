#include <stdio.h>

int main(){
	int vet[12];
	int x,y,soma;
	for(int i = 0;i<=11;i++){
		printf("Digite o valor de vet na posicao [%d] ",i);
		scanf("%d",&vet[i]);
		
	}
	printf("Digite o valor de x: ");
	scanf("%d",&x);
	printf("Digite o valor de y: ");
	scanf("%d",&y);
	
	soma = vet[x] + vet[y];
	printf("%d",soma);
	
	
	return 0;
}
