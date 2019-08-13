#include <stdio.h>
float Real(float dolar, float cdolar)
{
    return dolar * cdolar;
}

int main()
{
    float Vdolar, Cdolar;
    printf("Entre com a quantidade de dolares: ");
    scanf("%f", &Vdolar);
    printf("Entre com a cotacao do dolar: ");
    scanf("%f", &Cdolar);
    printf("O valor em reais eh: R$%.2f\n", Real(Vdolar, Cdolar));

    return 0;
}