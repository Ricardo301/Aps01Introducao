#include <stdio.h>

int quadrado(int n)
{
    return n * n;
}

int main()
{
    int num;
    printf("Entre com um numero inteiro nao nulo: ");
    scanf("%d", &num);
    printf("O quadrado do numero %d e %d", num, quadrado(num));
    return 0;
}