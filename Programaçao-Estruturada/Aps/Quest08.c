#include <stdio.h>

int Fatorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * Fatorial(n - 1);
}

int main()
{
    int num;
    printf("Digite o valor do fatorial a ser calculado: ");
    scanf("%d", &num);
    printf("Fatorial = %d", Fatorial(num));

    return 0;
}