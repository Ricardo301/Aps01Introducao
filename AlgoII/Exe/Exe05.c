#include <stdio.h>
float Prest(float v)
{
    return v / 5;
}
int main()
{
    float valor;
    printf("Entre com o valor do produto: ");
    scanf("%f", &valor);
    printf("Valor das prestacoes: R$%.2f", Prest(valor));
}