#include<stdio.h>
int main(){
   /* 2D array declaration*/
   int disp[2][3];
   float media1,media2;
   /*Counter variables for the loop*/
   int i, j;
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("Entre com o valor da media da turma[%d][%d]:", i, j);
         scanf("%d", &disp[i][j]);
      }
   }
   //Displaying array elements
   printf("Matriz de medias das turmas:\n");
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("%d ", disp[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
   media1=(disp[0][0]+disp[0][1]+disp[0][2])/3.0;
   media2=(disp[1][0]+disp[1][1]+disp[1][2])/3.0;
   
   printf("A media das turmas da unidade 0 eh %.2f\n",media1);
   printf("A media das turmas da unidade 1 eh %.2f\n",media2);
}
    
