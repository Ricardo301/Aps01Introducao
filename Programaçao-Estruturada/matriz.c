#include <stdio.h>
#include <locale.h>

int main()
{
int M[2][3]={4,7,9,11,12,5};
/* Set the locale to the environment default */
    setlocale (LC_ALL, "");
printf("A componente M[1,1]=%d\n",M[1][1]);
printf("A componente M[0,2]=%d\n",M[1][2]);
printf("A componente M[2,1]=%d\n",M[2][1]);

}
