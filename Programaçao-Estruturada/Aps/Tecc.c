#include <stdio.h>

int main()
{
    int num, soma;

    printf("Soma de numeros negativos: \n");
    do
    {

        printf("Digite o valor a ser somado: ");
        scanf("%d", &num);
        if (num < 0)
        {
            soma += num;
        }

    } while (num < 0 || num % 2 == 0);

    printf("Soma = %d", soma);
    return 0;
}