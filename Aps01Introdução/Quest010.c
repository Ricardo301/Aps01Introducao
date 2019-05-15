#include <stdio.h>
#include <stdlib.h>
float FunPot(float x,int y){
	float potencia = 1;

		for(int i = 0;i<y;i++){
			potencia*=x;
		}
		return potencia;
	}     

int main(){
	float base;
	int pot;
	
	printf("Digite a base: ");
	scanf("%f",&base);
	printf("Digite a potencia: ");
	scanf("%d",&pot);
	
	float resultado = FunPot(base,pot);
	printf("\n%.2f elevado a %d = %.2f",base,pot,resultado);
	
	
}
