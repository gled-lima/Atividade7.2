# L4. Ver os bytes de um int com uma union

#include <stdio.h>
union bytes
{
    int i;
    unsigned char b[4];
};
int main(void) 
{
    union bytes t;
    t.i = 0x01020304;
    printf("Bytes na memoria:\n");

    for (int i = 0; i < 4; i++) 
    {
        printf("%02X ", (unsigned int)t.b[i]);
    }
    printf("\n");
    return 0;
}
