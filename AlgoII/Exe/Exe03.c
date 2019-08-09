#include <stdio.h>
float Desconto(float n)
{
    return n * 9 / 100;
}
float Nvalor(float n, float desc)
{
    return n - desc;
}

int main()
{
    float valor, desconto;
    printf("Entre com o valor do produto: ");
    scanf("%f", &valor);
    desconto = Desconto(valor);
    printf("Desconto  = %.2f\n", desconto);
    printf("Valor com desconto = %.2f\n", Nvalor(valor, desconto));
    return 0;
}