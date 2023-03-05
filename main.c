#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Lista alocação matriz\n");

    int x=0;

   do{
        system("cls");
        printf("Escolha uma opção abaixo:\n");
        printf("\n01- Exercicio 01");
        printf("\n02- Exercicio 02");
        printf("\n03- Exercicio 03");
        printf("\n04- Exercicio 04");
        printf("\n05- Exercicio 05");

        printf("\nEscolha uma das opções anteriores: ");
        scanf("%d",&x);

        switch(x){
            case 0: printf("\nSair do programa\n"); break;
            case 1: exercicio_01(); break;
            case 2: exercicio_02(); break;
            case 3: exercicio_03(); break;
            case 4: exercicio_04(); break;
            case 5: exercicio_05(); break;
            default: printf("\nOpção inválida.\n");
         }

    }while(x != 0);

    return 0;
}
