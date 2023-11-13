#include <stdio.h>
#include <stdlib.h>

int main()
{
    // matriz de 5 x 10
    // o +1 é por causa que no final ele vai ler um espaço  
    char mapa[5][10+1];

    FILE *f;
    f = fopen("mapa.txt", "r");
    if (f == 0)
    {
        printf("Erro na leitura do mapa \n");
        exit(1);
    }

    //para percorrer as linhas
    for (int i = 0; i < 5; i++)
    {
        fscanf(f, "%s", mapa[i]);
    }

    //para printar as linhas
     for (int i = 0; i < 5; i++)
    {
        printf("%s\n", mapa[i]);
    }

    fclose(f);
}