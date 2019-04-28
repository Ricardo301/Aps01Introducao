#include <stdio.h>
#include <stdlib.h>

int main (){
	float num,cont10_50=0,cont60_110=0,cont120_150=0;
	int i;
	for( i = 0;i <5;i++){
		printf("Digite um numero: ");
		scanf("%f",&num);
		
		if((num>=10) && (num<=50) ){
			cont10_50++;
		}else if(((num>=60) && (num<=110.5) )){
			cont60_110++;
		}else{
			cont120_150++;
		}
	}
	printf("Faixa 1 : 10-50 %d\n",cont10_50);
	printf("Faixa 1 : 60-110 %d\n",cont60_110);
	printf("Faixa 1 : 120-150.5 %d\n",cont120_150);
	
	return 0;
}
