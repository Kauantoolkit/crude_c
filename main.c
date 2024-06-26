#include <stdio.h>
#include <string.h>
#include "produtos.h"
#include "servicos.h"
#include "animal.h"
#include "carrinho.h"
#include "cliente.h"


//menus
void menuProdutos() {
    int opcao;

    do {
        printf("\n==============================\n");
        printf("||      MENU DE PRODUTOS    ||\n");
        printf("==============================\n");
        printf("|| 1 | Cadastrar produto    ||\n");
        printf("|| 2 | Listar produtos      ||\n");
        printf("|| 3 | Editar produto       ||\n");
        printf("|| 4 | Excluir produto      ||\n");
        printf("|| 0| Sair                  ||\n");
        printf("==============================\n");
        printf("||Escolha uma opcao: ");
        scanf(" %i", &opcao);

        switch (opcao) {
            case 1:
                cadastro_produto();
                break;
            case 2:
                listar_produtos();
                break;
            case 3:
                editar_produto();
                break;
            case 4:
                excluir_produto();
                break;
            case 0:
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);
}

void menuAnimais() {
    int opcao;

    do {
    printf("\n==============================\n");
    printf("||      MENU DE ANIMAIS     ||\n");
    printf("==============================\n");
    printf("|| 1 | Cadastrar animal     ||\n");
    printf("|| 2 | Listar animais       ||\n");
    printf("|| 3 | Editar animal        ||\n");
    printf("|| 4 | Excluir animal       ||\n");
    printf("|| 0 | Voltar               ||\n");
    printf("==============================\n");
    printf("||Escolha uma opcao: ");
    scanf(" %i", &opcao);

        switch (opcao) {
            case 1:
                cadastro_animal();
                break;
            case 2:
                listar_animais();
                break;
            case 3:
                editar_animal();
                break;
            case 4:
                excluir_animal();
                break;
            case 0:
                break;
            default:
                printf("||==================||\n");
        printf("|| opcao invalida! ||\n");
        printf("||==================||\n");
        }
    } while (opcao != 0);
}

void menuServicos() {
    int opcao;

    do {
        printf("\n==============================\n");
        printf("||      MENU DE SERVICOS    ||\n");
        printf("==============================\n");
        printf("|| 1 | Cadastrar servico    ||\n");
        printf("|| 2 | Listar servicos      ||\n");
        printf("|| 3 | Editar servico       ||\n");
        printf("|| 4 | Excluir servico      ||\n");
        printf("|| 0 | Voltar               ||\n");
        printf("==============================\n");
        printf("||Escolha uma opcao: ");
        scanf(" %i", &opcao);

        

        switch (opcao) {
            case 1:
                cadastro_servico();
                break;
            case 2:
                listar_servicos();
                break;
            case 3:
                editar_servico();
                break;
            case 4:
                excluir_servico();
                break;
            case 0:
                break;
            default:
                printf("||==================||\n");
                printf("|| Opcao invalida! ||\n");
                printf("||==================||\n");
                }
    } while (opcao != 0);
}

void menuCarrinho() {
    int opcao;

    do {
     printf("\n================================\n");
    printf("||      MENU DE CARRINHO      ||\n");
    printf("================================\n");
    printf("|| 1 | Adicionar ao carrinho  ||\n");
    printf("|| 2 | Listar carrinho        ||\n");
    printf("|| 3 | Remover do carrinho    ||\n");
    printf("|| 4 | Finalizar compra       ||\n");
    printf("|| 0 | Voltar                 ||\n");
    printf("================================\n");
    printf("||Escolha uma opcao: ");
        scanf(" %i", &opcao);
      

        switch (opcao) {
            case 1:
                adicionar_ao_carrinho();
                break;
            case 2:
                listar_carrinho();
                break;
            case 3:
                remover_do_carrinho();
                break;
            case 4:
                finalizar_compra();
                break;
            case 0:
                break;
            default:
                printf("||==================||\n");
        printf("|| opcao invalida! ||\n");
        printf("||==================||\n");
        }
    } while (opcao != 0);
}


void menuCliente() {
    int opcao;

    do{
       printf("\n==============================\n");
    printf("||      MENU DE CLIENTES     ||\n");
    printf("==============================\n");
    printf("|| 1 | Cadastrar Cliente     ||\n");
    printf("|| 2 | Listar Clientes       ||\n");
    printf("|| 3 | Editar Cliente        ||\n");
    printf("|| 4 | Excluir Cliente       ||\n");
    printf("|| 0 | Voltar                ||\n");
    printf("==============================\n");
    printf("||Escolha uma opcao: ");
    scanf(" %i", &opcao);

        switch (opcao) {
            case 1:
                cadastro_cliente();
                break;
            case 2:
                listar_clientes();
                break;
            case 3:
                editar_cliente();
                break;
            case 4:
                excluir_cliente();
                break;
            case 0:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("||===================================||\n");
         printf("|| Escolha invalida. tente novamente.||\n");
         printf("||===================================||\n");
        }
    }while(opcao != 0);

}




int main() {
    int opcao;

    do {
        printf("\n==============================\n");
        printf("||                          ||        /\\_____/\\             \n");
        printf("||                          ||       /   o o   \\            \n");
        printf("||     MENU DE CARRINHO     ||      (     ^     )              \n");
        printf("||                          ||       \\   (_)   /                \n");
        printf("||                          ||        \\_______/                  \n");
        printf("==============================\n");
        printf("|| 1 | Menu Produtos        ||        /\\_____/\\    \n");
        printf("|| 2 | Menu Animais         ||       /   o o   \\        \n");
        printf("|| 3 | Menu Servicos        ||      |     ^     |      \n");
        printf("|| 4 | Menu Carrinho        ||       \\   (W)   /          \n");
        printf("|| 5 | Menu Cliente         ||        \\_______/        \n");
        printf("|| 0 | Sair                 ||\n");
        printf("==============================\n");
        printf("||Escolha uma opcao: ");
        scanf(" %i", &opcao);
    

        switch (opcao) {
            case 1:
                menuProdutos();
                break;
            case 2:
                menuAnimais();
                break;
            case 3:
                menuServicos();
                break;
            case 4:
                menuCarrinho();
                break;
            case 5:
                menuCliente();
                break;
            case 0:
                printf("||===========||\n");
                printf("|| Saindo... ||\n");
                printf("||===========||\n");
                break;
            default:
                printf("||==================||\n");
                printf("|| opcao invalida! ||\n");
                printf("||==================||\n");
        }
    } while (opcao != 0);

    return 0;
}
