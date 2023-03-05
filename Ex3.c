
#include <stdio.h>
#include <stdlib.h>



int exercicio_03(){

    system("cls");
    printf("Exercicio 03\n\n");


    int l = 0;
    int c = 0;
    int soma = 0;

    printf("Quantas linhas terá a matriz: ");
    scanf("%d", &l);

    printf("Quantas colunas terá a matriz: ");
    scanf("%d", &c);

    int **p = (int **)malloc(l * sizeof(int *));

    for (int i = 0; i < l; i++)
    {
        p[i] = (int *)malloc(c * sizeof(int));
        for (int j = 0; j < c; j++)
        {
            p[i][j] = 2;

            soma += p[i][j];
        }
    }

    int quantElem = l * c;

    printf("\nA soma dos valores é de: %d", soma);
    printf("\nA média final dos valores é de: %d\n", soma / quantElem);



    system("pause");
    return 0;
}
