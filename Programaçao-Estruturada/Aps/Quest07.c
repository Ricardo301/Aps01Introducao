#include <stdio.h>
int Soma(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + Soma(n - 1);
    }
}
int main()
{
    int num;
    printf("Digite o valor até onde deve ser somado: ");
    scanf("%d", &num);

    printf("%d", Soma(num));

    return 0;
}