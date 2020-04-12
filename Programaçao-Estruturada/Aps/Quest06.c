#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592
float volume(float alt,float raio){
	return PI * (raio * raio) * alt;
}
int maior(int x,int y){
	if(x>y)
		return x;
	else if(y>x)
		return y;
}
int main(){
	float altura,raio;
	int n1,n2;
	printf("Digite o valor da altura: ");
	scanf("%f",&altura);
	printf("Digite o valor do raio: ");
	scanf("%f",&raio);
	printf("Volume do cilindro = %f\n",volume(altura,raio));
	printf("---------------------------------------------\n");
	printf("Digite um numero: ");
	scanf("%d",&n1);
	printf("Digite um numero: ");
	scanf("%d",&n2);
	printf("Maior = %d",maior(n1,n2));
	
	
	
	return 0;
}
