#include <stdio.h>
#include <stdlib.h>



int exercicio_01(){

    system("cls");
    printf("Exercicio 01\n\n");


    int l = 0;
    int c = 0;

    printf("Quantas linhas tera a matriz: ");
    scanf("%d", &l);

    printf("Quantas colunas tera a matriz: ");
    scanf("%d", &c);

    int **p = (int **)malloc(l * sizeof(int *));
    for (int i = 0; i < l; i++){

        p[i] = (int *)malloc(c * sizeof(int));

    }


    system("pause");
    return 0;
}
