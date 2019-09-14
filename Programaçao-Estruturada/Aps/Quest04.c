#include <stdio.h>

int main()
{
    int x, soma = 0;
    do
    {
        printf("Digite o valor de X a ser somado: ");
        scanf("%d", &x);
        soma += x;
    } while (soma < 5000);
    printf("Soma = %d", soma);

    return 0;
}