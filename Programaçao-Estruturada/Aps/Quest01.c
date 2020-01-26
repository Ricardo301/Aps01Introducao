#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1,n2,n3,n4;
	int q1,q2,q3,q4,soma;
	printf("Digite um numero: ");
	scanf("%d",&n1);
	printf("Digite um numero: ");
	scanf("%d",&n2);
	printf("Digite um numero: ");
	scanf("%d",&n3);
	printf("Digite um numero: ");
	scanf("%d",&n4);
	q1 = n1*n1;
	q2 = n2*n2;	
	q3 = n3*n3;	
	q4 = n4*n4;	
	soma = q1+q2+q3+q4;
	if(q3>=1000){
		printf("Quadrado do terceiro = %05d",q3);
	}else{
		printf("Soma = %010d",soma);
	}
	
	
	
	
	
	return 0;
}
