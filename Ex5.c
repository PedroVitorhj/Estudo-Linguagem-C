#include <stdio.h>
#include <stdlib.h>

int **retPont (int **pA, int **pB, int lA, int lB, int cA, int cB)
{

    int **pC = malloc(0 * sizeof(int *));

    if (lA != lB && cA != cB)
    {
        printf("Error: Nao foi possivel alocar a matriz");
        free(pC);
        pC = NULL;
        return pC;
    }

    pC = realloc(pC, lA * sizeof(int *));

    for (int i = 0; i < lA; i++)
    {
        pC[i] = (int *)malloc(cA * sizeof(int));
        for (int j = 0; j < cA; j++)
        {
            pC[i][j] = pA[i][j] * pB[i][j];
        }
    }

    return pC;
}

int **AlocMatriz(int lin, int col)
{

    int **p = (int **)malloc(lin * sizeof(int *));

    for (int i = 0; i < lin; i++)
    {
        p[i] = (int *)malloc(col * sizeof(int));
    }

    return p;
}


int **iniMatriz(int **mat, int lin, int col)
{
    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            mat[i][j] = 2;
        }
    }

    return mat;
}

void printMatriz(int **mat, int lin, int col, char nomeMatriz[1])
{
     printf("       Matriz %c: -\n", nomeMatriz);
    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }
}



int exercicio_05(){

    system("cls");
    printf("Exercicio 05\n\n");

    int lA, lB = 0;
    int cA, cB = 0;

    printf("Digite quantas linhas terá a matriz 1: ");
    scanf("%d", &lA);

    printf("Digite quantas colunas terá a matriz 1: ");
    scanf("%d", &cA);

    printf("Digite quantas linhas terá a matriz 2: ");
    scanf("%d", &lB);

    printf("Digite quantas colunas terá a matriz 3: ");
    scanf("%d", &cB);

    // Aloca matriz
    int **pA = Matriz(lA, cA);
    int **pB = Matriz(lB, cB);

    // Inicializa matriz
    pA = iniMatriz(pA, lA, cA);
    pB = iniMatriz(pB, lB, cB);

    int **newMatriz = retPont(pA, pB, lA, lB, cA, cB);

    printMatriz(pA, lA, cA, 'A');
    printMatriz(pB, lB, cB, 'B');
    printMatriz(newMatriz, lA, cA, 'N');


    system("pause");
    return 0;
}

