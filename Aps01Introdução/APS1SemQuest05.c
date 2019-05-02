#include <stdio.h>
#include<stdlib.h>


int main(){
	int num,j,i;

	printf("Numero: ");
	scanf("%d",&num);
    printf("\n");
	for(i=1;i<=num;i++){
		printf("%d ",num);
	  
	   
		for(j=num;j>i;j--){
			     
				printf("%d ",j-1);
				 		
		}
		printf("\n");
			
	}

	return 0;
}
