#include <stdio.h>
#include <stdlib.h>
float base;
float result =1;
void Calc(){
	
	result*=base;
}

float FunPot( int y){
	
	
	for(int i = 0; i < y;i++){
		Calc();
	}
	return result;
	
}
	
	   
int main(){
	
	int pot;
	printf("Digite a base: ");
	scanf("%f",&base);
	printf("Digite a potencia: ");
	scanf("%d",&pot);
     float potencia = FunPot(pot);
     printf("\n%.2f elevado a %d =  %.2f\n",base,pot,potencia);
	
	
	
	
	
}
