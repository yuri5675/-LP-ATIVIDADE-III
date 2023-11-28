#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int i;
    int numeros[5];
    int pares = 0;
    int impares = 0;
    int somaImpar = 0;
    int positivos = 0;
    int negativos = 0;
    float mediaPares = 0;
    int somaPares = 0;
    float mediaTodos = 0;
    int somaTodos = 0;
    int maiorNumero = 0;
    int menorNumero = 99999;
    int quantidade = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);

        quantidade++;
        somaTodos += numeros[i];

        if (numeros[i] % 2 == 0)
        {
            pares++;
            somaPares += numeros[i];
        }
        else
        {
            impares++;
            somaImpar += numeros[i];
        }

        if (numeros[i] > 0)
        {
            positivos++;
        }
        else
        {
            negativos++;
        }

        maiorNumero = numeros[i] > maiorNumero ? numeros[i] : maiorNumero;
        menorNumero = numeros[i] < menorNumero ? numeros[i] : menorNumero;
    }

    if (pares > 0)
    {
        mediaPares = somaPares / (float) pares;
    }

    mediaTodos = somaTodos / (float) i;

    for (i = 0; i < 5; i++)
    {
        printf("%dº número: %d\n", i + 1, numeros[i]);
    }

    system(" cls || clear");

    printf("\nQuantidade de numeros impares: %d\n", impares);
   
    printf("Quantidade de numeros negativos: %d\n", negativos);
  
    printf("Maior numero: %d\n", maiorNumero);
    printf("Menor numero: %d\n", menorNumero);

    printf("Media de numeros pares: %.1f\n", mediaPares);

    printf("Media dos numeros inseridos: %.1f\n", mediaTodos);

    return 0;
}