#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
   

    char nomes[99][100];
    char telefones[99][100];
    int i = 0;
    int j = 0;
    int resposta = 0;

    do
    {
        printf("1 - Para continuar cadastrando\n");
        printf("2 - Para  mostrar os numeros\n");
        scanf("%d", &resposta);
        

        if (resposta == 1)
        {
            printf("Digite o  nome: ", i + 1);
            scanf("%s", &nomes[i]);

            printf("Digite o telefone: ", i + 1);
            scanf("%s", &telefones[i]);

            fflush(stdin);

            i = i + 1;
        }

    } while (resposta == 1);

    system ("cls || clear");

    for (j = 0; j <= i; j++)
    {
        printf("%d° Cadastro\n", j + 1);
        printf("Nome: %s\n", nomes[j]);
        printf("Telefone: %s\n", telefones[j]);

        printf("\n");
    }

    return 0;
}
