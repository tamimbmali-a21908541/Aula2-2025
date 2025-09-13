#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i = 8;
    printf ("Quantos minutos faltam?\n");
    scanf(" %d", &i);
    while ( i != 0)
    {
        printf("Faltam %i minutos para terminar teste\n", i);
        sleep(60);
        i--;
    }
    return 0;

}