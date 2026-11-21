# L2. Array de structs com typedef — a maior média

#include <stdio.h>
typedef struct 
{
    char nome[30];
    float n1, n2, n3;
} Aluno;

int main(void) 
{
    Aluno alunos[3] = {
        {"Ana", 8.0, 9.0, 10.0},
        {"Carlos", 7.0, 8.0, 6.0},
        {"Maria", 9.0, 9.0, 8.0}
    };
    float media, maiorMedia = 0;
    int melhor = 0;
  
    for (int i = 0; i < 3; i++) 
    {

        media = (alunos[i].n1 +
                 alunos[i].n2 +
                 alunos[i].n3) / 3;
        if (media > maiorMedia) 
        {
            maiorMedia = media;
            melhor = i;
        }
    }

    printf("Maior media: %s (%.2f)\n",
           alunos[melhor].nome, maiorMedia);
    return 0;
}
