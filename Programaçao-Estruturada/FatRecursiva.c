#include <stdio.h>
#include <locale.h>
int fat(int n)
{ 
if (n==0)
return 1;
else
return n*fat(n-1);
}

int main()
{
int A;
/* Set the locale to the environment default */
    setlocale (LC_ALL, "");

printf("Forneça um número inteiro não negativo\n");
scanf("%d",&A);
printf ("O fatorial de %d é %d",A,fat(A));
}
