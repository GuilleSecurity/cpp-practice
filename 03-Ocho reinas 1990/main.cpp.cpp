//El problema de las ocho reinas es: colocar ocho reinas en un tablero de ajedrez de tal manera que ninguna reina ataque a otra//
#include <stdio.h>

#define N 8

int tablero[N];

int esSeguro(int fila, int columna)
{
    int i;

    for (i = 0; i < fila; i++)
    {
        if (tablero[i] == columna)
            return 0;

        if (tablero[i] - i == columna - fila)
            return 0;

        if (tablero[i] + i == columna + fila)
            return 0;
    }

    return 1;
}

void imprimir()
{
    int i, j;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (tablero[i] == j)
                printf("Q ");
            else
                printf(". ");
        }
        printf("\n");
    }
    printf("\n");
}

void resolver(int fila)
{
    int columna;

    if (fila == N)
    {
        imprimir();
        return;
    }

    for (columna = 0; columna < N; columna++)
    {
        if (esSeguro(fila, columna))
        {
            tablero[fila] = columna;
            resolver(fila + 1);
        }
    }
}

int main()
{
    resolver(0);
    return 0;
}
