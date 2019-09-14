#include <stdio.h>
#include <locale.h>

int main()
{
int x[6]={4,7,9,11,12,5};
/* Set the locale to the environment default */
    setlocale (LC_ALL, "");
printf("A componente x[1]=%d\n",x[1]);
printf("A componente x[4]=%d\n",x[4]);
printf("A componente x[5]=%d\n",x[2]);

}
