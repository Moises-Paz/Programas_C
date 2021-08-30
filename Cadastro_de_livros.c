

#include <stdio.h>
#include <string.h>
struct livro{
  char titulo[30];
  char autor[15];
  int pagina;
  int ano;
};
int main(){
    struct livro livros[5];
    char busca[30];
    int index[5] = {-1,-1,-1,-1,-1};

    for(int i=0; i < 5 ;i++)
    {
        printf(" Informe o Titulo do %dº livro: ", i+1);
        scanf("%[^\n]s",&livros[i].titulo);
        setbuf(stdin, NULL);
        printf(" Informe o Autor do %dº livro: ", i+1);
        scanf("%[^\n]s",&livros[i].autor);
        setbuf(stdin, NULL);
        printf(" Informe a quantidade de paginas do %dº livro :", i+1);
        scanf("%d", &livros[i].pagina);
        setbuf(stdin,NULL);
        printf(" Informe o Ano do %dº livro: ", i+1);
        scanf("%d", &livros[i].ano);
        setbuf(stdin, NULL);
    }
    printf("\n Informe o titulo do Livro que deseja pesquisar: ");
    scanf("%[^\n]s",&busca);
    setbuf(stdin, NULL);
    int x = 0;
    for(int i=0; i<5; i++)
{
       if(strcmp(livros[i].titulo, busca) == 0)
       {
           index[x] = i;
           x++;
       }
    }
    printf("\n\n LIVROS ENCONTRADOS:\n");
    for(int i=0; i<= x; i++)
    {
        if(index[0] != -1)
        {
            printf("titulo: %s\n", livros[index[i]].titulo);
            printf("autor: %s\n", livros[index[i]].autor);
            printf("pagina: %s\n", livros[index[i]].pagina);
            printf("ano: %d\n", livros[index[i]].ano);
        }
        else
        {
            printf("Nenhum livro foi encontrado.\n");
            break;
        }
    }
    return 0;
}
