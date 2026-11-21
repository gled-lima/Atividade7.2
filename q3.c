# L3. Mover um ponto por ponteiro ( -> ).

#include <stdio.h>

struct Ponto 
{
    int x, y;
};
void move(struct Ponto *pont, int dx, int dy) 
{
    pont->x = pont->x + dx;
    pont->y = pont->y + dy;
}
int main(void) 
{
    struct Ponto pont = {1, 1};
    move(&pont, 4, 2);
    printf("(%d, %d)\n", pont.x, pont.y);
    return 0;
}
