#include <stdio.h>
#include <string.h>
#define true 1
#define false 0

typedef struct {
    int codigo;
    char nome[20];
    char autor[20];
    char editora[20];
    int numPaginas;
    int doado;
}livroExatas;

typedef struct {
    int codigo;
    char nome[20];
    char autor[20];
    char editora[20];
    int numPaginas;
    int doado;
}livroHumanas;

typedef struct {
    int codigo;
    char nome[25];
    char autor[20];
    char editora[20];
    int numPaginas;
    int doado;
}livroBiomedicas;


void main(void) {
    livroExatas exatas[500];
    livroHumanas humanas[500];
    livroBiomedicas biomedicas[500];
    int i, check = false, eDoado, codigoPesquisar, areaPesquisar, qntdExatas, qntdHumanas, qntdBiomedicas;


    while (check == false) {
        printf("Digite quantos livros de exatas voce gostaria de cadastrar:\n");
        scanf("%d", &qntdExatas);
        if(qntdExatas<=500) {
            for (i=0;i<qntdExatas;i++) {
                printf("=======Livro %d======\n", i+1);
                printf("Digite o codigo do livro:\n");
                scanf("%d", &exatas[i].codigo);
                fflush(stdin);

                printf("Digite o nome do livro:\n");
                fgets(exatas[i].nome,23,stdin);
                fflush(stdin);

                printf("Digite o autor do livro:\n");
                fgets(exatas[i].autor,18,stdin);
                fflush(stdin);

                printf("Digite a editora do livro:\n");
                fgets(exatas[i].editora,18,stdin);
                fflush(stdin);

                printf("Digite o numero de paginas do livro:\n");
                scanf("%d", &exatas[i].numPaginas);
                fflush(stdin);

                printf("Digite se o livro foi doado(1 pra sim ou 0 pra nao):\n");
                scanf("%d", &eDoado);
                if (eDoado == 1) {
                    exatas[i].doado = true;
                } else {
                    exatas[i].doado = false;
                }
            }
            check = true;
        } else {
            printf("Por favor digite um numero ate 500\n");
            check = false;
        }
    }

    check = false;
    while (check == false) {
        printf("Digite quantos livros de humanas voce gostaria de cadastrar:\n");
        scanf("%d", &qntdHumanas);
        if(qntdHumanas<=500) {
            for (i=0;i<qntdHumanas;i++) {
                printf("=======Livro %d======\n", i+1);
                printf("Digite o codigo do livro:\n");
                scanf("%d", &humanas[i].codigo);
                fflush(stdin);

                printf("Digite o nome do livro:\n");
                fgets(humanas[i].nome,23,stdin);
                fflush(stdin);

                printf("Digite o autor do livro:\n");
                fgets(humanas[i].autor,18,stdin);
                fflush(stdin);

                printf("Digite a editora do livro:\n");
                fgets(humanas[i].editora,18,stdin);
                fflush(stdin);

                printf("Digite o numero de paginas do livro:\n");
                scanf("%d", &humanas[i].numPaginas);
                fflush(stdin);

                printf("Digite se o livro foi doado(1 pra sim ou 0 pra nao):\n");
                scanf("%d", &eDoado);
                if (eDoado == 1) {
                    humanas[i].doado = true;
                } else {
                    humanas[i].doado = false;
                }
            }
            check = true;
        } else {
            printf("Por favor digite um numero ate 500\n");
            check = false;
        }
    }

    check = false;
    while (check == false) {
        printf("Digite quantos livros de biomedicas voce gostaria de cadastrar:\n");
        scanf("%d", &qntdBiomedicas);
        if(qntdBiomedicas<=500) {
            for (i=0;i<qntdBiomedicas;i++) {
                printf("=======Livro %d======\n", i+1);
                printf("Digite o codigo do livro:\n");
                scanf("%d", &biomedicas[i].codigo);
                fflush(stdin);

                printf("Digite o nome do livro:\n");
                fgets(biomedicas[i].nome,23,stdin);
                fflush(stdin);

                printf("Digite o autor do livro:\n");
                fgets(biomedicas[i].autor,18,stdin);
                fflush(stdin);

                printf("Digite a editora do livro:\n");
                fgets(biomedicas[i].editora,18,stdin);
                fflush(stdin);

                printf("Digite o numero de paginas do livro:\n");
                scanf("%d", &biomedicas[i].numPaginas);
                fflush(stdin);

                printf("Digite se o livro foi doado(1 pra sim ou 0 pra nao):\n");
                scanf("%d", &eDoado);
                if (eDoado == 1) {
                    biomedicas[i].doado = true;
                } else {
                    biomedicas[i].doado = false;
                }
            }
            check = true;
        } else {
            printf("Por favor digite um numero ate 500\n");
            check = false;
        }
    }

    /// Pesquisar:
    printf("Digite respectivamente o codigo e o numero correspondente a area (1-exatas, 2-humanas ou 3-biomedicas) do livro a ser pesquisado:\n");
    scanf("%d%d", &codigoPesquisar, &areaPesquisar);
    fflush(stdin);
    check = 2;


    if ((areaPesquisar == 1) || (areaPesquisar == 2) || (areaPesquisar == 3)) {
        switch (areaPesquisar) {
            case 1:
                for (i=0;i<qntdExatas;i++) {
                    if (codigoPesquisar == exatas[i].codigo) {
                        printf("Essa obra existe!");
                        check = 1;
                    }
                    if ((i==qntdExatas-1) && (check != 1)){
                        check = 0;
                    }
                }
                if (check == 0) {
                    printf("Essa obra nao existe!");
                }
            break;

            case 2:
                            for (i=0;i<qntdHumanas;i++) {
                    if (codigoPesquisar == humanas[i].codigo) {
                        printf("Essa obra existe!");
                        check = 1;
                    }
                    if ((i==qntdHumanas-1) && (check != 1)){
                        check = 0;
                    }
                }
                if (check == 0) {
                    printf("Essa obra nao existe!");
                }
            break;

            case 3:
                for (i=0;i<qntdBiomedicas;i++) {
                    if (codigoPesquisar == biomedicas[i].codigo) {
                        printf("Essa obra existe!");
                        check = 1;
                    }
                    if ((i==qntdBiomedicas-1) && (check != 1)){
                        check = 0;
                    }
                }
                if (check == 0) {
                    printf("Essa obra nao existe!");
                }
            break;
        }
    } else {
        printf("Numero Incorrespondente!\n");
    }

    ///Todas os livros doados:
    printf("======= Livros Doados: =======\n");
    for (i=0;i<qntdExatas;i++) {
        if (exatas[i].doado == 1) {
            printf("%s\n", exatas[i].nome);
        }
    }
    for (i=0;i<qntdHumanas;i++) {
        if (humanas[i].doado == 1) {
            printf("%s\n", humanas[i].nome);
        }
    }
    for (i=0;i<qntdBiomedicas;i++) {
        if (biomedicas[i].doado == 1) {
            printf("%s\n", biomedicas[i].nome);
        }
    }


    /// livros que sejam comprados e o numero de paginas se encontre entre 100 e 300:
    printf("======= Livros comprados com o numero de paginas entre 100 e 300: =======\n");
    for (i=0;i<qntdExatas;i++) {
        if ((exatas[i].doado == 0) && (exatas[i].numPaginas > 100) && (exatas[i].numPaginas < 300)) {
            printf("%s com %d paginas\n", exatas[i].nome, exatas[i].numPaginas);
        }
    }
    for (i=0;i<qntdHumanas;i++) {
        if ((humanas[i].doado == 0) && (humanas[i].numPaginas > 100) && (humanas[i].numPaginas < 300)) {
            printf("%s com %d paginas\n", humanas[i].nome, humanas[i].numPaginas);
        }
    }
    for (i=0;i<qntdBiomedicas;i++) {
        if ((biomedicas[i].doado == 0) && (biomedicas[i].numPaginas > 100) && (biomedicas[i].numPaginas < 300)) {
            printf("%s com %d paginas\n", biomedicas[i].nome, biomedicas[i].numPaginas);
        }
    }


    /// Alteração de um registro:
    printf("======= Mudar o registro de um livro: =======\n");
    printf("Digite respectivamente o codigo e o numero correspondente a area (1-exatas, 2-humanas ou 3-biomedicas) do livro a ser mudado:\n");
    scanf("%d%d", &codigoPesquisar, &areaPesquisar);
    fflush(stdin);
    check = 2;
    switch (areaPesquisar) {
        case 1:
            for (i=0;i<qntdExatas;i++) {
                    if (codigoPesquisar == exatas[i].codigo) {
                        printf("Digite o novo codigo do livro:\n");
                        scanf("%d", &exatas[i].codigo);
                        fflush(stdin);

                        printf("Digite o novo nome do livro:\n");
                        fgets(exatas[i].nome,23,stdin);
                        fflush(stdin);

                        printf("Digite o novo autor do livro:\n");
                        fgets(exatas[i].autor,18,stdin);
                        fflush(stdin);

                        printf("Digite a nova editora do livro:\n");
                        fgets(exatas[i].editora,18,stdin);
                        fflush(stdin);

                        printf("Digite o novo numero de paginas do livro:\n");
                        scanf("%d", &exatas[i].numPaginas);
                        fflush(stdin);

                        printf("Digite se o livro foi doado(1 pra sim ou 0 pra nao):\n");
                        scanf("%d", &eDoado);
                        if (eDoado == 1) {
                            exatas[i].doado = true;
                        } else {
                            exatas[i].doado = false;
                        }

                        check = 1;
                    }
                    if ((i==qntdExatas-1) && (check != 1)){
                        check = 0;
                    }
                }
                if (check == 0) {
                    printf("Essa obra nao existe!");
                }
        break;
        case 2:
            for (i=0;i<qntdHumanas;i++) {
                    if (codigoPesquisar == humanas[i].codigo) {
                        printf("Digite o novo codigo do livro:\n");
                        scanf("%d", &humanas[i].codigo);
                        fflush(stdin);

                        printf("Digite o novo nome do livro:\n");
                        fgets(humanas[i].nome,23,stdin);
                        fflush(stdin);

                        printf("Digite o novo autor do livro:\n");
                        fgets(humanas[i].autor,18,stdin);
                        fflush(stdin);

                        printf("Digite a nova editora do livro:\n");
                        fgets(humanas[i].editora,18,stdin);
                        fflush(stdin);

                        printf("Digite o novo numero de paginas do livro:\n");
                        scanf("%d", &humanas[i].numPaginas);
                        fflush(stdin);

                        printf("Digite se o livro foi doado(1 pra sim ou 0 pra nao):\n");
                        scanf("%d", &eDoado);
                        if (eDoado == 1) {
                            humanas[i].doado = true;
                        } else {
                            humanas[i].doado = false;
                        }

                        check = 1;
                    }
                    if ((i==qntdHumanas-1) && (check != 1)){
                        check = 0;
                    }
                }
                if (check == 0) {
                    printf("Essa obra nao existe!");
                }
        break;
        case 3:
            for (i=0;i<qntdBiomedicas;i++) {
                    if (codigoPesquisar == biomedicas[i].codigo) {
                        printf("Digite o novo codigo do livro:\n");
                        scanf("%d", &biomedicas[i].codigo);
                        fflush(stdin);

                        printf("Digite o novo nome do livro:\n");
                        fgets(biomedicas[i].nome,23,stdin);
                        fflush(stdin);

                        printf("Digite o novo autor do livro:\n");
                        fgets(biomedicas[i].autor,18,stdin);
                        fflush(stdin);

                        printf("Digite a nova editora do livro:\n");
                        fgets(biomedicas[i].editora,18,stdin);
                        fflush(stdin);

                        printf("Digite o novo numero de paginas do livro:\n");
                        scanf("%d", &biomedicas[i].numPaginas);
                        fflush(stdin);

                        printf("Digite se o livro foi doado(1 pra sim ou 0 pra nao):\n");
                        scanf("%d", &eDoado);
                        if (eDoado == 1) {
                            biomedicas[i].doado = true;
                        } else {
                            biomedicas[i].doado = false;
                        }

                        check = 1;
                    }
                    if ((i==qntdBiomedicas-1) && (check != 1)){
                        check = 0;
                    }
                }
                if (check == 0) {
                    printf("Essa obra nao existe!");
                }
        break;
        default:
            printf("Numero Incorrespondente!\n");
    }

}
