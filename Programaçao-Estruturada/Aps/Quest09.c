#include <stdio.h>
#include <math.h>
int Cubo(int n)
{
    if (n == 1)
        return 1;
    else
        return pow(n, 3) + Cubo(n - 1);
}

int main()
{
    int num;
    printf("Digite o valor para ser calculado: ");
    scanf("%d", &num);
    printf("%d", Cubo(num));

    return 0;
}