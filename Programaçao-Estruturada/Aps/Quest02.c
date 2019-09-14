#include <stdio.h>
#include <stdlib.h>

int main()
{

    int soma = 0, x, i;
    float media = 0;

    for (i = 1; i <= 10; i++)
    {
        printf("Digite o valor [%d] ", i);
        scanf("%d", &i);
        soma += i;
    }
    media = soma / 10.0;
    printf("Soma = %d\nMedia = %.2f\n", soma, media);

    return 0;
}