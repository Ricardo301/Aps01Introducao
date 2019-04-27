#include <stdio.h>
#include<stdlib.h>


int main(){
	int num,i,j;

	printf("Numero: ");
	scanf("%d",&num);
	for(i=num;i>0;i--){
	
		printf("%d\n",num);
		
			for(j=i;j>0;j--){
				printf("%d",i);
			
			}
	}
	return 0;
}
