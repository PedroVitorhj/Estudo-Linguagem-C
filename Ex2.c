
#include <stdio.h>
#include <stdlib.h>



int exercicio_02(){

    system("cls");
    printf("Exercicio 02\n\n");


    int l = 0;
    int c = 0;
    int somaTotal = 0;

    printf("Quantas linhas terá a matriz: ");
    scanf("%d", &l);

    printf("Quantas colunas terá a matriz:");
    scanf("%d", &c);

    int **p = (int **)malloc(l * sizeof(int *));

    for (int i = 0; i < l; i++)
    {
        p[i] = (int *)malloc(c * sizeof(int));
        for (int j = 0; j < c; j++)
        {
            p[i][j] = i + 1;

            somaTotal += p[i][j];
        }
    }

    printf("A soma final dos valores é de: %d\n", somaTotal);


    system("pause");
    return 0;
}
