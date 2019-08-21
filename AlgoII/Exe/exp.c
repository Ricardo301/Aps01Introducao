#include <stdio.h>
int exp (int b,int e){
	if (e == 0)
		return 1;
	else 
		return b*exp(b,e-1);
	
}

int main(){
	int BASE,EXPOENTE;
	printf ("Entre com a base    : ");
	scanf("%d",&BASE);
	printf("\nEntre com o expoente: ");
	scanf("%d",&EXPOENTE);
	
	printf("Potencia = %d",exp(BASE,EXPOENTE));
	
	return 0;
}
