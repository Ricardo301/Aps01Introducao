#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, soma;
    int mat[10][10];

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    for (i = 1; i <= 9; i++)
    {
        for (j = 0; j < i; j++)
        {
            soma += mat[i][j];
        }
    }
    printf("Soma = %d", soma);

    return 0;
}