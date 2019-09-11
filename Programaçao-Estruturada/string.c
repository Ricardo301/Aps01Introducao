#include <stdio.h>
#include <locale.h>
#include <string.h>
int main()
{
	char x[100];
	char y[100];
	
	int z;
	/* Set the locale to the environment default */
    setlocale (LC_ALL, "");
    
printf("Dê o valor da string x\n");
scanf("%s", x);

 
strcpy(y,"roberto");
z=strcmp(x,y);
if (z==0) 
printf ("As strings são iguais\n");
else
printf ("As strings são diferentes\n");

printf ("Concatenando fica %s",strcat(x,y));

}
