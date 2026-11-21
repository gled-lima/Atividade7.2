# L1. Distância entre dois pontos.
# Criar uma estrutura com coordenadas x e y, ler dois pontos e calcular a distância entre eles.

#include <stdio.h>
#include <math.h>

struct ponto 
{
    double x, y;
};

int main(void) 
{
    struct ponto A, B;
    double distancia;
    printf("Digite as Coordenadas de A:");
    scanf("%lf %lf", &A.x, &A.y);
    printf("Digite as Coordenadas de B:");
    scanf("%lf %lf", &B.x, &B.y);

    distancia = sqrt(pow(B.x - A.x, 2) +
                      pow(B.y - A.y, 2));
    printf("Distancia = %.2f\n", distancia);
    return 0;
}
