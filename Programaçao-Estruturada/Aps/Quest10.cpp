#include <stdio.h>
#include <stdlib.h>

int main(){
	int i1,i2,i3;
	int *n1,*n2,*n3 ;
	printf("Digite um numero: ");
	scanf("%d",&i1);
	printf("Digite um numero: ");
	scanf("%d",&i2);	
	printf("Digite um numero: ");
	scanf("%d",&i3);
	n1=&i1;
	n2=&i2;
	n3=&i3;
	
	printf("Numero [1] = %d \t\tEndereco [1] = %p\n",*n1,n1);
	printf("Numero [2] = %d \t\tEndereco [2] = %p\n",*n2,n2);
	printf("Numero [3] = %d \t\tEndereco [3] = %p\n",*n3,n3);	
	
	
	
	
	return 0;
}
