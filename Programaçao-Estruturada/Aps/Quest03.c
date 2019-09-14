#include <stdio.h>

int main()
{
    int i, tab;
    printf("Digite o valor da tabuada a ser exibida: ");
    scanf("%d", &tab);
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", tab, i, tab * i);
    }

    return 0;
}