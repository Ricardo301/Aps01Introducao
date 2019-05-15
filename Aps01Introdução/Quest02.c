#include<stdio.h>
#include <stdlib.h>

main(){
	int num[9], soma,i;
	float media;
	
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
	media = (float)soma/10;
	printf("Soma = %d\n",soma);
	printf("Media = %.2f",media);
	
	
	
	
}
