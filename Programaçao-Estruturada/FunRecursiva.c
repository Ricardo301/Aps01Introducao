#include <stdio.h>

int fun(int n){
	if (n == 0)
		return 2;
	else
		return 2*fun(n-1);
	return n;
}
int main(){
	
	printf("%d",fun(4));
	return 0;
}
