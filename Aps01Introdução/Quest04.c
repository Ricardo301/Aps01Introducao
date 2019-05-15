#include <stdio.h>
#include <stdlib.h>

main(){
	float produto;
	float lucro;
	printf("Digite o valor do produto : RS ");
	scanf("%f",&produto);
	
	if(produto<300){
		lucro = produto*0.35;
	}
	else{
		lucro = produto*0.5;
	}
	
	printf("Valor da venda RS %.2f",lucro+produto);
	
	
}
	
	
