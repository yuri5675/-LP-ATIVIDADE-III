#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{

    

    char nomeProduto[99][200];
    float preco[99];
    int quantidade[99];
    int i = 0;
    int j = 0;
    int escolha = 0;
    float total = 0;

    do
    {
        printf("1. mais uma venda\n");
        printf("2. sair do menu\n");
        scanf("%d", &escolha);
        

        if (escolha == 1)

        {
            printf("Digite o nome do produto: ");
            scanf("%s", &nomeProduto[i]);

            printf("Digite o valor do produto: ");
            scanf("%f", &preco[i]);

            printf("Digite a quantidade do produto: ");
            scanf("%d", &quantidade[i]);
            total = total + preco[i];
            i = i + 1;
        }

    } while (escolha == 1);

    printf("Total de R$ %.1f\n", total);

    return 0;
}