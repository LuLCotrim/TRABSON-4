#include <stdio.h>
#include <string.h>
#define true 1
#define false 0
#define areaExatas "exatas"
#define areaHumanas "humanas"
#define areaBiomedicas "biomedicas"

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

int qntdExatas, qntdHumanas, qntdBiomedicas;

livroExatas exatas[500];
livroHumanas humanas[500];
livroBiomedicas biomedicas[500];

char areaPesquisar[10];

void pesquisar(int codigo, char area[]) {
    int i, check;

    if (area == areaExatas) {
        for (i=0;i<qntdExatas;i++) {
            if (codigo == exatas[i].codigo) {
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
    }

    if (area == areaHumanas) {
         for (i=0;i<qntdHumanas;i++) {
            if (codigo == humanas[i].codigo) {
                printf("Essa obra existe!");
                check = 1;
            } else if (check != 1) {
                check = 0;
            }
        }
        if (check == 0) {
            printf("Essa obra não existe!");
        }
    }

    if (area == areaBiomedicas) {
        for (i=0;i<qntdBiomedicas;i++) {
            if (codigo == biomedicas[i].codigo) {
                printf("Essa obra existe!");
                check = 1;
            } else if (check != 1) {
                check = 0;
            }
        }
        if (check == 0) {
            printf("Essa obra não existe!");
        }
    }

}


void main(void) {
    int i, check = false, eDoado, codigoPesquisar;


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

    printf("Digite respectivamente o codigo e a area (exatas, humanas ou biomedicas) do livro a ser pesquisado:\n");
    scanf("%d", &codigoPesquisar);
    fflush(stdin);
    fgets(areaPesquisar,8,stdin);
    fflush(stdin);
    check = 2;
    if (areaPesquisar == areaExatas) {
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
    }

    if (areaPesquisar == areaHumanas) {
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
    }

    if (areaPesquisar == areaBiomedicas) {
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
    }
}
