#include <stdio.h>

int main(){
	int vet[10];
	int pa=2;
	
	for(int i=0;i<=9;i++,pa+=2){
		vet[i]=pa;
	}
	for(int i = 0;i<=9;i++){
		printf("%d ",vet[i]);
	}
	
	
	return 0;
}
