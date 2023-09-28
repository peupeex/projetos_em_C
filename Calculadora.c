#include <stdio.h>
#include <math.h>

int main()
{
    float a;
    float b;
    float resultado;
    int escolha;

    printf("escolha uma operacao:\n");
    printf("[ 1 ] Soma\n");
    printf("[ 2 ] subtracao\n");
    printf("[ 3 ] multiplicacao\n");
    printf("[ 4 ] divisao\n");
    printf("[ 5 ] potenciacao\n");
    printf("[ 6 ] radiciacao\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("Escolha um numero: ");
        scanf("%f", &a);
        printf("Escolha outro numero: ");
        scanf("%f", &b);

        resultado = a + b;

        printf("a soma entre %.2f e %.2f e igual a %.2f", a, b, resultado);

        break;

    case 2:
        printf("Escolha um numero: ");
        scanf("%f", &a);
        printf("Escolha outro numero: ");
        scanf("%f", &b);

        resultado = a - b;

        printf("a subtracao entre %.2f e %.2f e igual a %.2f", a, b, resultado);

        break;

    case 3:
        printf("Escolha um numero: ");
        scanf("%f", &a);
        printf("Escolha outro numero: ");
        scanf("%f", &b);

        resultado = a * b;

        printf("o produto entre %.2f e %.2f e igual a %.2f", a, b, resultado);

        break;

    case 4:
        printf("Escolha um numero: ");
        scanf("%f", &a);
        printf("Escolha outro numero: ");
        scanf("%f", &b);

        resultado = a / b;

        printf("a divisao entre %.2f e %.2f e igual a %.2f", a, b, resultado);

        break;

    case 5:
        printf("Escolha um numero: ");
        scanf("%f", &a);
        printf("Escolha outro numero: ");
        scanf("%f", &b);
        if (b < 0)
        {
            printf("expoente negativo nao e valido");
            return 1;
        }

        resultado = pow(a, b);

        printf("%.2f elevado a %.2f e igual a %.2f", a, b, resultado);

        break;

    case 6:
        printf("Escolha um numero: ");
        scanf("%f", &a);

        resultado = sqrt(a);

        printf("a raiz quadrada de %.2f e igual a %.2f", a, resultado);

        break;

    case 7:
        printf("Escolha um numero: ");
        scanf("%f", &a);

        resultado = log10(a);

        printf("o logaritimo de %.2f e igual a %.2f", a, resultado);

        break;

        return 0;
        break;
    }
}
