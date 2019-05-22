#include<stdio.h>
#include <stdlib.h>

int main(){
	int num[9], soma,i;

	
	for( i = 0; i<10;i++){
		printf("Digite um numero : ");
		scanf("%d",&num[i]);
	}
	printf("\n");
	printf("=============================================\n");
	printf("\n");
	
	for(i =0; i<10;i++){
		printf("Numero %d = %d\n",i+1,num[i]);
		soma += num[i];
		
		
	}
	printf("\n");

	printf("Soma = %d\n",soma);
	printf("Media = %.2f",(float)soma/10);
	
	return 0;
	
	
	
	
}
