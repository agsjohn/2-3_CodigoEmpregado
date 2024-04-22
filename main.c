#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    int codigo;
    do{
        printf("Digite o código do empregado: ");
        scanf("%i", &codigo);
        getchar();
        if(codigo != 0){
            switch(codigo){
            case 1:
                printf("Gerente\n\n");
                break;
            case 2:
                printf("Supervisor\n\n");
                break;
            case 3:
                printf("Contador\n\n");
                break;
            case 4:
                printf("Digitador\n\n");
                break;
            case 5:
                printf("Auxiliar administrativo\n\n");
                break;
            default:
                printf("Código inválido\n\n");
            }
        }
    }while(codigo != 0);
  printf("Programa finalizado");
  getchar();
}
