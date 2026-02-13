#include<stdio.h>
#include<string.h>
    typedef struct {
        int id;
        char titulo[100];
        char autor[100];
        int ano;
        int disponivel;
    }Livro;

    int main(){

        Livro livro1;

        livro1.id = 1;
        strcpy(livro1.titulo, "Hora da Estrela");
        strcpy(livro1.autor,"Clarice Lispector");
        livro1.ano = 1974;
        livro1.disponivel = 1;

        printf("ID: %d\n",livro1.id);
        printf("Autor: %s\n",livro1.autor);
        printf("Ano: %d\n",livro1.ano);
        printf("Disponivel: %d\n",livro1.disponivel);

        return 0;

    }
