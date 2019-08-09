#include <stdio.h>
float Media(float n1, float n2, float n3)
{
    return (n1 + n2 + n3) / 3;
}
int main()
{
    float n1, n2, n3;
    printf("Entre com a nota 1: \n");
    scanf("%f", &n1);
    printf("Entre com a nota 2: \n");
    scanf("%f", &n2);
    printf("Entre com a nota 3: \n");
    scanf("%f", &n3);
    printf("A media e %.2f", Media(n1, n2, n3));
    return 0;
}