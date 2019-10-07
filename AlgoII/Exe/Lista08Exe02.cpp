#include <stdio.h>
#include <stdlib.h>
enum valor{
	A=30,B=60,C=90,D=100
};
struct matriAluno{
	int matri;
	char tparti;
	int socio;
};
int main(){
	enum valor p;
	struct matriAluno aluno[3];
	int i;
	int contA=0,contB=0,contC=0,contD=0;
	int total=0;
	int valorPag[3]={0,0,0};
	for(i=0;i<3;i++){
		printf("Digite a matricula do aluno: ");
		scanf("%d",&aluno[i].matri);
		printf("Digite o tipo de participacao [A,B,C ou D]: ");
		scanf(" %c",&aluno[i].tparti);
		printf("Socio? [Sim-1], [Nao-0]");
		scanf("%d",&aluno[i].socio);
	}
	for(i=0;i<3;i++){
		if(aluno[i].tparti == 'A'){
			valorPag[i]=A;
			contA++;
		}
		else if(aluno[i].tparti == 'B'){
			valorPag[i]=B;
			contB++;
		}
		else if(aluno[i].tparti == 'C'){
			valorPag[i]=C;
			contC++;
		}
		else if(aluno[i].tparti == 'D'){
			valorPag[i]=D;
			contD++;
		}
		
		if(aluno[i].socio==1){
			valorPag[i]=valorPag[i]*0.5;
		}
		total+=valorPag[i];
	}
	
		printf("\nTotal arrecadado %d\n",total);
		printf("Quantidade de A: %d\n",contA);
		printf("Quantidade de B: %d\n",contB);
		printf("Quantidade de C: %d\n",contC);
		printf("Quantidade de D: %d\n",contD);
	
	
}
