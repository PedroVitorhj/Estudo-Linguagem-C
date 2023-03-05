
#include <stdio.h>
#include <stdlib.h>

int **Matriz(int lin, int col)
{

    int **p = (int **)malloc(lin * sizeof(int *));

    for (int i = 0; i < lin; i++)
    {
        p[i] = (int *)malloc(col * sizeof(int));
    }

    return p;
}

void Free(int **p)
{
    for (int i = 0; i < 5; i++)
    {
        free(p[i]);
    }
    free(p);
}



int exercicio_04(){

    system("cls");
    printf("Exercicio 04\n\n");

    int l = 0;
    int c = 0;
    int soma = 0;

    printf("Quantas linhas terá a matriz: ");
    scanf("%d", &l);

    printf("Digite quantas colunas terá a matriz: ");
    scanf("%d", &c);

    int **p = Matriz(l, c);

    // inicializa os valores da matriz
    for (int i = 0; i < l; i++)
    {
        p[i] = (int *)malloc(c * sizeof(int));
        for (int j = 0; j < c; j++)
        {
            p[i][j] = 2;

            soma += p[i][j];
        }
    }

    int quantEle = l * c;

    printf("\nA soma total dos valores é de: %d", soma);
    printf("\nA média valores é de: %d\n", soma / quantEle);

    Free(p);


    system("pause");
    return 0;
}

