#include <stdio.h>

int main(){
	float num;
	int num20_50=0,menor4=0;
	
	for(;;){
		printf("Digite numeros reais: ");
		scanf("%f",&num);
		if((num>20) && (num<50)){
			num20_50++;
		}else if((num>=0) && (num<4 )){
			menor4++;
		} 
		if(num<0){
			break;
		}
		
	}
	printf("Entre 20 e 50 %d \n",num20_50);
	printf("Menor que 4 %d \n",menor4);
	
	
}
