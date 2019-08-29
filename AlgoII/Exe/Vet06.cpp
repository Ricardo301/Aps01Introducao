#include <stdio.h>
#include <stdlib.h>

int main(){
	int vet1[20],vet2[20],vet3[20];
		
	for(int i = 0;i<=19;i++){
		printf("Digite o valor do vet na possicao vet1[%d] ",i);
		scanf("%d",&vet1[i]);
			printf("Digite o valor do vet na possicao vet2[%d] ",i);
		scanf("%d",&vet2[i]);
	}
	
	for(int i = 0;i<=19;i++){
		if (i%2==0)
			vet3[i]=vet1[i];
		else
			vet3[i]=vet2[i];
		
	}
	for(int i = 0;i<=9;i++)
		printf("%d ", vet3[i]);
	
}


