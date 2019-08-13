#include <stdio.h>
float Venda(float cust, float perc)
{
    return cust + (cust * perc / 100);
}

int main()
{
    float custo, percentual;
    printf("Entre com o preco de custo: ");
    scanf("%f", &custo);
    printf("Entre com o percentual: ");
    scanf("%f", &percentual);
    printf("Valor da venda = R$%.2f", Venda(custo, percentual));
}