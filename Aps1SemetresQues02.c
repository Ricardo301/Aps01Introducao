#include<stdio.h>

main(){
	int num[9];
	int soma;
	float media;
	int i;
	for(i = 0; i<10;i++){
		printf("Digite um numero : ");
		scanf("%d",&num[i]);
	}
	printf("========================\n");
	
	for(i =0; i<10;i++){
		printf("Numero %d foi = %d\n",i+1,num[i]);
		soma += num[i];
		
		
	}
	media = (float)soma/10;
	printf("Soma = %d\n",soma);
	printf("Media = %.2f",media);
	
	
	
	
}
