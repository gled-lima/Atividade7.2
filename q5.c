# L5. Medir o padding com sizeof e offsetof

#include <stdio.h>
#include <stddef.h>

struct Ruim 
{
    char a;
    int b;
    char c;
};
struct Bom 
{
    int b;
    char a;
    char c;
};

int main(void)
{
    printf("Struct Ruim\n");
    printf("Tamanho:%zu bytes\n", sizeof(struct Ruim));
    printf("Offset a:%zu\n", offsetof(struct Ruim, a));
    printf("Offset b:%zu\n", offsetof(struct Ruim, b));
    printf("Offset c:%zu\n", offsetof(struct Ruim, c));

    printf("\nStruct Bom\n");
    printf("Tamanho:%zu bytes\n", sizeof(struct Bom));
    printf("Offset b:%zu\n", offsetof(struct Bom, b));
    printf("Offset a:%zu\n", offsetof(struct Bom, a));
    printf("Offset c:%zu\n", offsetof(struct Bom, c));

    return 0;
}
