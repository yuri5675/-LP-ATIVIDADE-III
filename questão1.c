#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

char nomes[5][500];
    int idade[5];
    float peso[5];
    float altura[5];
    float Maior = 0;
    float Menor = 999;
    int idoso = 0;
    int jovem = 999;
    float gordo = 0;
    float magro = 999;
    int maioraltura = 0;
    int menoraltura = 0;
    int maioridade = 0;
    int menoridade = 0;
    int maiorpeso = 0;
    int menorpeso = 0;
    int i;

    
    for (i = 0; i < 5; i++)
    {
        printf("\nDigite seu nome:");
        gets(nomes[i]);

        printf("Digite sua idade: ");
        scanf("%d", &idade[i]);

        printf("Digite seu peso: ");
        scanf("%f", &peso[i]);

        printf("Digite sua altura: ");
        scanf("%f", &altura[i]);

        fflush(stdin);

        if (idade[i] > idoso)
        {
            idoso = idade[i];
            maioridade = i;
        }
        if (idade[i] < jovem)
        {
            jovem = idade[i];
            menoridade = i;
        }

        if (peso[i] > gordo)
        {
            gordo = peso[i];
            maiorpeso = i;
        }
        if (peso[i] < magro)
        {
            magro = peso[i];
            menorpeso = i;
        }

        if (altura[i] > Maior)
        {
            Maior = altura[i];
            maioraltura = i;
        }
        if (altura[i] < Menor)
        {
            Menor= altura[i];
            menoraltura = i;
        }
    }

    system("cls || clear");

    printf("\n Resultados:\n");

    printf("maior altura: %s, Altura: %.2f\n", nomes[maioraltura], Maior);
    printf(" menor altura: %s, Altura: %.2f\n", nomes[menoraltura], Menor);
    printf("maior peso: %s, Peso: %.2f\n", nomes[maiorpeso], gordo);
    printf("menor peso: %s, Peso: %.2f\n", nomes[menorpeso], magro);
    printf("maior idade: %s, Idade: %d\n", nomes[maioridade], idoso);
    printf(" menor idade: %s, Idade: %d\n", nomes[menoridade], jovem);

    return 0;


}