#include <stdio.h>

int main(){
    int opcao;

    printf("Menu principal\n");
    printf("1 - Logar\n");
    printf("2 - Cadastrar\n");
    printf("3 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao){
        case 1: {
            printf("\nLogando...\n");
            break;
        }
        case 2: {
            printf("\nCadastrando...\n");
            break;
        }
        case 3: {
            printf("\nSaindo...\n");
            break;
        }
        default: {
            printf("\nDigite uma opcao valida\n");
            break;
        }
    }

    return 0;
}