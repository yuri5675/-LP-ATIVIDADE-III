#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    char nomes[5][500];
    int idade[5];
    float peso[5];
    float altura[5];
    float alto = 0;
    float baixo = 999;
    int idoso = 0;
    int jovem = 999;
    float gordo = 0;
    float magro = 999;
    int pessoaAlta = 0;
    int pessoaBaixa = 0;
    int pessoaidosa = 0;
    int pessoajovem = 0;
    int pessoaGorda = 0;
    int pessoaMagra = 0;

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
            pessoaidosa = i;
        }
        if (idade[i] < jovem)
        {
            jovem = idade[i];
            pessoajovem = i;
        }

        if (peso[i] > gordo)
        {
            gordo = peso[i];
            pessoaGorda = i;
        }
        if (peso[i] < magro)
        {
            magro = peso[i];
            pessoaMagra = i;
        }

        if (altura[i] > alto)
        {
            alto = altura[i];
            pessoaAlta = i;
        }
        if (altura[i] < baixo)
        {
            baixo = altura[i];
            pessoaBaixa = i;
        }
    }

    system("cls || clear");

    printf("\n Resultados:\n");

    printf("Pessoa mais alta: %s, Altura: %.2f\n", nomes[pessoaAlta], alto);
    printf("Pessoa mais baixa: %s, Altura: %.2f\n", nomes[pessoaBaixa], baixo);
    printf("Pessoa mais pesada: %s, Peso: %.2f\n", nomes[pessoaGorda], gordo);
    printf("Pessoa mais leve: %s, Peso: %.2f\n", nomes[pessoaMagra], magro);
    printf("Pessoa mais velha: %s, Idade: %d\n", nomes[pessoaidosa], idoso);
    printf("Pessoa mais nova: %s, Idade: %d\n", nomes[pessoajovem], jovem);

    return 0;
}