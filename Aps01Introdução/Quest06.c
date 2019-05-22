#include <stdio.h>
#include <stdlib.h>

int main(){
	int num,mult2=0,mult5=0;
	
	for(;;){
		printf("Numero: ");
		scanf("%d",&num);
		 if(num==0){
			break;
		}else if (num<0){
			continue;
		}
		
		
		if(num%2==0){
			mult2++;
		}
		 if(num%5==0){
			mult5++;
		}
	
		
		
	}
	printf("Multiplos de 2 = %d \n",mult2);
	printf("Multiplos de 5 = %d ",mult5);
	
	
	
	return 0;
}
