#include <stdio.h>

int main()
{
    int num, soma;

    printf("Soma de numeros negativos: \n");
    while (1)
    {

        printf("Digite o valor a ser somado: ");
        scanf("%d", &num);
        if (num < 0)
        {
            soma += num;
        }
        if (num > 0 && num % 2 == 1)
            break;
    }

    printf("Soma = %d", soma);
    return 0;
}