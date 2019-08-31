#include <stdio.h>

int main()
{
    float vet[10], maior=0;
    int po, i;

    for (i = 0; i <= 9; i++)
    {
        printf("Digite o salario na posicao [%d] R$ ", i);
        scanf("%f", &vet[i]);
    }

    for (i = 0; i <= 9; i++)
    {
        if (i == 0)
        {
            maior = vet[i];
            po = i;
        }
        else if (vet[i] > maior )
        {
            maior = vet[i];
            po = i;
        }
    }
    printf("Maior = R$%.2f e na possica [%d] \n", maior, po);
    return 0;
}
