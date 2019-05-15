#include <stdio.h>
#include <stdlib.h>
int cont,maior,num,menor,soma;
void FunMaior(){
	if(cont==1){
	    maior=num;	
	}else if(num>maior){
		maior=num;
	}
}
void FunMenor(){
	if(cont==1){
	    menor=num;	
	}else if(num<menor){
		menor=num;
	}
}
void FunSoma(){
	soma+=num;
}
float FunMedia(){
	return (float)soma/cont;
}
int main(){
	
	for(;;){
		printf("Num: ");
		scanf("%d",&num);
	  if(num==0){
	  	break;
	  }	else{
	  	cont++;
	  	FunMaior();
	  	FunMenor();
	  	FunSoma();
	  }
	}
	printf("\n==========================================================================\n\n");
	printf("Maior = %d\n",maior);
	printf("Menor = %d\n",menor);
	printf("Soma = %d\n",soma);
	printf("Total = %d\n",cont);
	printf("Media = %.2f\n",FunMedia());
	
	return 0;
}

