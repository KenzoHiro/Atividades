#include <stdio.h>
#include <cstring>
#include <stdlib.h>

#define Max_fabricantes 5
#define Max_produtos 50

struct Fabricante
{
    char nome[50];
    char site[50];
    int telefone;
    char uf[10];
};

struct Produto
{
    char descricao[50];
    char peso[20];
    float valorc;
    float valorv;
    float valorl;
    float percl;
    struct Fabricante fabricante;
};

int menuPrincipal()
{
    int opcao;

    printf("==== MENU ====\n");
    printf("[1] Listar fabricantes\n");
    printf("[2] Listar produtos\n");
    printf("[3] Listar produtos de um estado (UF)\n");
    printf("[4] Listar produtos por marca\n");
    printf("[5] O estado com o produto mais caro\n");
    printf("[6] Marca com o produto mais barato\n");
    printf("[7] Listar todos os produtos em ordem crescente de valor\n");
    printf("[8] Listar todos os produtos em ordem crescente de maior 'valor do lucro'\n");
    printf("[9] Listar todos os produtos em ordem crescente de maior 'percentual de lucro'\n");
    printf("[0] Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    return opcao;
}

int obterQuantidadeFabricantes()
{
    int quantidade;

    do
    {
        printf("\n+==============================================================================================+\n| OBTER QUANTIDADE DE FABRICANTES \n+==============================================================================================+\n");
        printf("| Digite a quantidade de fabricantes (2 a 5): ");
        scanf("%d", &quantidade);

        if (quantidade < 2 || quantidade > 5)
        {
            printf("| Quantidade invalida. Tente novamente.\n");
        }
    } while (quantidade < 2 || quantidade > 5);

    return quantidade;
}

void cadastrarFabricantes(struct Fabricante fabricantes[], int quantidade)
{
    printf("\n+==============================================================================================+\n| CADASTRO DE FABRICANTES \n+==============================================================================================+\n");
    for (int i = 0; i < quantidade; i++)
    {
        printf("|Fabricante %d\n", i + 1);
        printf("+==============================================================================================+\n");

        printf("| Nome: ");
        scanf("%s", fabricantes[i].nome);

        printf("| Site: ");
        scanf("%s", fabricantes[i].site);

        printf("| Telefone: ");
        scanf("%d", &fabricantes[i].telefone);

        printf("| UF: ");
        scanf("%s", fabricantes[i].uf);

        printf("\n");
    }
}



int obterQuantidadeProdutos()
{
    int quantidade;

    printf("\n+==============================================================================================+\n| QUANTIDADE DE PRODUTOS \n+==============================================================================================+\n");
    do
    {
        printf("| Digite a quantidade de produtos (5 a 50): ");
        scanf("%d", &quantidade);

        if (quantidade < 5 || quantidade > 50)
        {
            printf("| Quantidade invalida. Tente novamente.\n");
        }
    } while (quantidade < 5 || quantidade > 50);

    return quantidade;
}


void cadastrarProdutos(struct Produto produtos[], int quantidade, struct Fabricante fabricantes[], int quantidade_fabricantes)
{
    printf("\n+==============================================================================================+\n| CADASTRO DE PRODUTOS \n+==============================================================================================+\n");
    for (int i = 0; i < quantidade; i++)
    {
        printf("| Produto %d\n", i + 1);
        printf("+==============================================================================================+\n");

        printf("| Descricao: ");
        scanf("%s", produtos[i].descricao);

        printf("| Peso (ex: 100g): ");
        scanf("%s", produtos[i].peso);

        printf("| Valor de compra: ");
        scanf("%f", &produtos[i].valorc);

        printf("| Valor de venda: ");
        scanf("%f", &produtos[i].valorv);

        produtos[i].valorl = produtos[i].valorv - produtos[i].valorc;
        produtos[i].percl = (produtos[i].valorl / produtos[i].valorc) * 100;

        printf("| Fabricante (escolha o numero correspondente):\n");
        for (int j = 0; j < quantidade_fabricantes; j++)
        {
            printf("| %d. %s\n", j + 1, fabricantes[j].nome);
        }
        int fabricante_escolhido;
        scanf("%d", &fabricante_escolhido);

        if (fabricante_escolhido >= 1 && fabricante_escolhido <= quantidade_fabricantes)
        {
            produtos[i].fabricante = fabricantes[fabricante_escolhido - 1];
        }
        else
        {
            printf("| Opcao invalida. Fabricante nao existe.\n");
        }

        printf("+==============================================================================================+\n");
        printf("\n");
    }
}


void listarFabricantes(struct Fabricante fabricantes[], int quantidade)
{
	int x;
	do{
    printf("\n+===============================================================================================+\n| RELATORIO 1 - LISTA DE TODAS AS MARCAS \n+===============================================================================================+\n");
    printf("| %-10s | %-20s | %-12s | %-10s |\n", "Marca", "Site", "Telefone", "UF");
    printf("+===============================================================================================\n");
    
    for (int i = 0; i < quantidade; i++)
    {
        printf("| %-10s | %-20s | %-12d | %-10s |\n", fabricantes[i].nome, fabricantes[i].site, fabricantes[i].telefone, fabricantes[i].uf);
    }
    printf("+===============================================================================================\n\n");
    printf("\n[0] Voltar para o menu principal\n");
    printf("\n[9] Para encerrar o programa\n");
        scanf("%d", &x);

        switch (x)
        {
            case 0:
                printf("Voltando para o menu principal...\n");
                break;
            case 9:
                printf("Encerrando...\n");
                exit(0);
            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }
    } while (x != 0);

}

void listarProdutos(struct Produto produtos[], int quantidade)
{
	int x;
	
	do{
    printf("\n+===================================================================================================+\n| RELATÓRIO 2 - LISTA DE TODOS OS PRODUTOS \n+===================================================================================================+\n");
    printf("| %-10s | %-20s | %-20s | %-15s | %-15s | %-10s | %-10s |\n", "Produto", "Descricao", "Peso", "Valor de compra", "Valor de venda", "Lucro", "Percentual de lucro");
    printf("+===================================================================================================+\n");
    for (int i = 0; i < quantidade; i++)
    {
        printf("| %-10d | %-20s | %-20s | %-15.2f | %-15.2f | %-10.2f | %-10.2f%% |\n", i + 1, produtos[i].descricao, produtos[i].peso, produtos[i].valorc, produtos[i].valorv, produtos[i].valorl, produtos[i].percl);
    }
    printf("+===================================================================================================+\n\n");
    printf("\n[0] Voltar para o menu principal\n");
    printf("\n[9] Para encerrar o programa\n");
        scanf("%d", &x);

        switch (x)
        {
            case 0:
                printf("Voltando para o menu principal...\n");
                break;
            case 9:
                printf("Encerrando...\n");
                exit(0);
            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }
    } while (x != 0);
}

void listarProdutosPorUF(struct Produto produtos[], int quantidade)
{
	int x;
	
	do{
    char uf[10];
    printf("\nDigite o UF (estado) para listar os produtos: ");
    scanf("%s", uf);

    printf("\n+===================================================================================================+\n| RELATÓRIO 3 - LISTA DE PRODUTOS DO ESTADO %s\n+===================================================================================================+\n", uf);
    printf("| %-10s | %-20s | %-20s | %-15s | %-15s | %-10s | %-10s |\n", "Produto", "Descricao", "Peso", "Valor de compra", "Valor de venda", "Lucro", "Porcentagem de lucro");
    printf("+===================================================================================================+\n");
    for (int i = 0; i < quantidade; i++)
    {
        if (strcmp(produtos[i].fabricante.uf, uf) == 0)
        {
            printf("| %-10d | %-20s | %-20s | %-15.2f | %-15.2f | %-10.2f | %-10.2f%% |\n", i + 1, produtos[i].descricao, produtos[i].peso, produtos[i].valorc, produtos[i].valorv, produtos[i].valorl, produtos[i].percl);
        }
    }
    printf("+===================================================================================================+\n\n");
    printf("\n[0] Voltar para o menu principal\n");
    printf("\n[9] Para encerrar o programa\n");
        scanf("%d", &x);

        switch (x)
        {
            case 0:
                printf("Voltando para o menu principal...\n");
                break;
            case 9:
                printf("Encerrando...\n");
                exit(0);
            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }
    } while (x != 0);
}

void listarProdutosPorMarca(struct Produto produtos[], int quantidade, struct Fabricante fabricantes[], int quantidade_fabricantes)
{
	int x;
	
	do{
    char nome_fabricante[50];
    printf("\n| Digite o nome da fabricante para listar os produtos: ");
    scanf("%s", nome_fabricante);

    printf("\n+===================================================================================================+\n| RELATORIO 4 - LISTA DE PRODUTOS DA FABRICANTE %s \n+===================================================================================================+\n", nome_fabricante);
    printf("| %-10s | %-20s | %-20s | %-10s | %-10s | %-10s | %-10s |\n", "Produto", "Descricao", "Peso", "Valor de compra", "Valor de venda", "Lucro", "Percentual de lucro");
    printf("+===================================================================================================+\n");
    for (int i = 0; i < quantidade; i++)
    {
        if (strcmp(produtos[i].fabricante.nome, nome_fabricante) == 0)
        {
            printf("| %-10d | %-20s | %-20s | %-10.2f | %-10.2f | %-10.2f | %-10.2f%% |\n", i + 1, produtos[i].descricao, produtos[i].peso, produtos[i].valorc, produtos[i].valorv, produtos[i].valorl, produtos[i].percl);
        }
    }
    printf("+===================================================================================================+\n\n");
    printf("\n[0] Voltar para o menu principal\n");
    printf("\n[9] Para encerrar o programa\n");
        scanf("%d", &x);

        switch (x)
        {
            case 0:
                printf("Voltando para o menu principal...\n");
                break;
            case 9:
                printf("Encerrando...\n");
                exit(0);
            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }
    } while (x != 0);
}

void mostrarUFMaiorValorVenda(struct Produto produtos[], int quantidade, struct Fabricante fabricantes[], int quantidade_fabricantes)
{
	int x;
	
	do{
    float maior_valorvenda = produtos[0].valorv;
    int indice_maior_valorvenda = 0;

    for (int i = 1; i < quantidade; i++)
    {
        if (produtos[i].valorv > maior_valorvenda)
        {
            maior_valorvenda = produtos[i].valorv;
            indice_maior_valorvenda = i;
        }
    }

    char uf_maior_valorvenda[10];
    strcpy(uf_maior_valorvenda, produtos[indice_maior_valorvenda].fabricante.uf);
    struct Fabricante fabricante = produtos[indice_maior_valorvenda].fabricante;

    printf("\n+=======================================================+\n| RELATORIO 5 - UF DO MAIOR VALOR DE VENDA\n+=======================================================+\n");
    printf("| %-10s | %-20s |\n", "UF", "Fabricante");
    printf("+=======================================================+\n");
    printf("| %-10s | %-20s |\n", fabricante.uf, fabricante.nome);
    printf("+=======================================================+\n\n");
    printf("\n[0] Voltar para o menu principal\n");
    printf("\n[9] Para encerrar o programa\n");
        scanf("%d", &x);

        switch (x)
        {
            case 0:
                printf("Voltando para o menu principal...\n");
                break;
            case 9:
                printf("Encerrando...\n");
                exit(0);
            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }
    } while (x != 0);
}

void mostrarFabricanteProdutoMaisBarato(struct Produto produtos[], int quantidade, struct Fabricante fabricantes[], int quantidade_fabricantes)
{
	int x;
	
	do{
    float menor_valorvenda = produtos[0].valorv;
    int indice_menor_valorvenda = 0;

    for (int i = 1; i < quantidade; i++)
    {
        if (produtos[i].valorv < menor_valorvenda)
        {
            menor_valorvenda = produtos[i].valorv;
            indice_menor_valorvenda = i;
        }
    }

    char nome_fabricante[50];
    strcpy(nome_fabricante, produtos[indice_menor_valorvenda].fabricante.nome);


    printf("\n+========================================+\n| RELATORIO 6 - FABRICANTE DO PRODUTO MAIS BARATO\n+========================================+\n");
    printf("| %-10s | %-20s |\n", "Fabricante", "Produto Mais Barato");
    printf("+========================================+\n");
    printf("| %-10s | %-20s |\n", produtos[indice_menor_valorvenda].fabricante.nome, produtos[indice_menor_valorvenda].descricao);
    printf("+========================================+\n\n");
    printf("\n[0] Voltar para o menu principal\n");
    printf("\n[9] Para encerrar o programa\n");
        scanf("%d", &x);

        switch (x)
        {
            case 0:
                printf("Voltando para o menu principal...\n");
                break;
            case 9:
                printf("Encerrando...\n");
                exit(0);
            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }
    } while (x != 0);
}

void ordenarProdutosPorValor(struct Produto produtos[], int quantidade)
{
	int x;
	
	do{
    for (int i = 0; i < quantidade - 1; i++)
    {
        for (int j = 0; j < quantidade - i - 1; j++)
        {
            if (produtos[j].valorv > produtos[j + 1].valorv)
            {
                struct Produto temp = produtos[j];
                produtos[j] = produtos[j + 1];
                produtos[j + 1] = temp;
            }
            else if (produtos[j].valorv == produtos[j + 1].valorv && produtos[j].valorc > produtos[j + 1].valorc)
            {
                struct Produto temp = produtos[j];
                produtos[j] = produtos[j + 1];
                produtos[j + 1] = temp;
            }
        }
    }

    printf("\n+===========================================================+\n| RELATORIO 7 -LISTA DE PRODUTOS ORDENADOS POR VALOR\n+===========================================================+\n");
    printf("| %-10s | %-20s | %-15s | %-15s |\n", "Produto", "Descricao", "Valor de compra", "Valor de venda");
    printf("+===========================================================+\n");
    for (int i = 0; i < quantidade; i++)
    {
        printf("| %-10d | %-20s | %-15.2f | %-15.2f |\n", i + 1, produtos[i].descricao, produtos[i].valorc, produtos[i].valorv);
    }
    printf("+===========================================================+\n\n");
    printf("\n[0] Voltar para o menu principal\n");
    printf("\n[9] Para encerrar o programa\n");
        scanf("%d", &x);

        switch (x)
        {
            case 0:
                printf("Voltando para o menu principal...\n");
                break;
            case 9:
                printf("Encerrando...\n");
                exit(0);
            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }
    } while (x != 0);
}

void ordenarProdutosPorLucro(struct Produto produtos[], int quantidade)
{
	int x;
	
	do{
    for (int i = 0; i < quantidade - 1; i++)
    {
        for (int j = 0; j < quantidade - i - 1; j++)
        {
            if (produtos[j].valorl > produtos[j + 1].valorl)
            {
                struct Produto temp = produtos[j];
                produtos[j] = produtos[j + 1];
                produtos[j + 1] = temp;
            }
        }
    }

    printf("\n+===========================================================+\n| RELATORIO 8 - LISTA DE PRODUTOS ORDENADOS POR VALOR DO LUCRO\n+===========================================================+\n");
    printf("| %-10s | %-20s | %-10s |\n", "Produto", "Descricao", "Valor do Lucro");
    printf("+===========================================================+\n");
    for (int i = 0; i < quantidade; i++)
    {
        printf("| %-10d | %-20s | %-10.2f |\n", i + 1, produtos[i].descricao, produtos[i].valorl);
    }
    printf("+===========================================================+\n\n");
    printf("\n[0] Voltar para o menu principal\n");
    printf("\n[9] Para encerrar o programa\n");
        scanf("%d", &x);

        switch (x)
        {
            case 0:
                printf("Voltando para o menu principal...\n");
                break;
            case 9:
                printf("Encerrando...\n");
                exit(0);
            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }
    } while (x != 0);
}

void ordenarProdutosPorPercentualLucro(struct Produto produtos[], int quantidade)
{
	int x;
	
	do{
    for (int i = 0; i < quantidade - 1; i++)
    {
        for (int j = 0; j < quantidade - i - 1; j++)
        {
            if (produtos[j].percl > produtos[j + 1].percl)
            {
                struct Produto temp = produtos[j];
                produtos[j] = produtos[j + 1];
                produtos[j + 1] = temp;
            }
        }
    }

    printf("\n+===============================================================================================+\n| RELATÓRIO 9 - LISTA DE PRODUTOS EM ORDEM CRESCENTE DE PERCENTUAL DE LUCRO \n+===============================================================================================+\n");
    printf("| %-10s | %-20s | %-15s |\n", "Produto", "Descricao", "Percentual de Lucro");
    printf("+===============================================================================================+\n");
    for (int i = 0; i < quantidade; i++)
    {
        printf("| %-10d | %-20s | %-15.2f%% |\n", i + 1, produtos[i].descricao, produtos[i].percl);
    }
    printf("+===============================================================================================+\n\n");
    printf("\n[0] Voltar para o menu principal\n");
    printf("\n[9] Para encerrar o programa\n");
        scanf("%d", &x);

        switch (x)
        {
            case 0:
                printf("Voltando para o menu principal...\n");
                break;
            case 9:
                printf("Encerrando...\n");
                exit(0);
            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }
    } while (x != 0);
}


int main()
{
    struct Fabricante fabricantes[Max_fabricantes];
    struct Produto produtos[Max_produtos];
    int quantidade_fabricantes, quantidade_produtos;

    quantidade_fabricantes = obterQuantidadeFabricantes();
    cadastrarFabricantes(fabricantes, quantidade_fabricantes);

    quantidade_produtos = obterQuantidadeProdutos();
    cadastrarProdutos(produtos, quantidade_produtos, fabricantes, quantidade_fabricantes);

    int opcao;

    do
    {
        opcao = menuPrincipal();

        switch (opcao)
        {
             case 1:
            listarFabricantes(fabricantes, quantidade_fabricantes);
            break;
        case 2:
            listarProdutos(produtos, quantidade_produtos);
            break;
        case 3:
            listarProdutosPorUF(produtos, quantidade_produtos);
            break;
        case 4:
            listarProdutosPorMarca(produtos, quantidade_produtos, fabricantes, quantidade_fabricantes);
            break;
        case 5:
            mostrarUFMaiorValorVenda(produtos, quantidade_produtos, fabricantes, quantidade_fabricantes);
            break;
        case 6:
            mostrarFabricanteProdutoMaisBarato(produtos, quantidade_produtos, fabricantes, quantidade_fabricantes);
	        break;
        case 7:
            ordenarProdutosPorValor(produtos, quantidade_produtos);
            break;
        case 8:
            ordenarProdutosPorLucro(produtos, quantidade_produtos);
            break;
        case 9:
            ordenarProdutosPorPercentualLucro(produtos, quantidade_produtos);
            break;
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("Opcao invalida. Tente novamente.\n");
            break;
        }
    } while (opcao != 0);

    return 0;
}
