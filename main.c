#include <stdio.h>

#define M 4
#define N 4
#define k 3

konvolusyon_islemi(int G[M][N], int F[k][k], int i,  int j, int FT);

int main() 
{
    int goruntu_matrisi[M][N] =
    {{0, 1, 2, 0},
     {3, 4, 5, 2},
     {6, 7, 1, 1},
     {1, 2, 3, 4}};

    int filtre_matrisi[k][k] =
    {{0, 1, 0},
     {2, 3, 1},
     {0, 1, 2}};

    int sonuc_matrisi[M - k + 1][N - k + 1];

    int filtre_matrisinin_elemanlar_toplami;

    for (int i = 1, i <= k; i++)
    {
        for (int j = 1, j <= k; j++)
        {
            filtre_matrisinin_elemanlar_toplami += filtre_matrisi[i][j];
        }
    }

    for (int i = 1; i <= M - k + 1; i++) 
    {
        for (int j = 1; j <= N - k + 1; j++) 
        {
            sonuc_matrisi[i][j] = konvolusyon_islemi(goruntu_matrisi, filtre_matrisi, i, j, filtre_matrisinin_elemanlar_toplami);
        }
    } 

    return 0;
}

konvolusyon_islemi(int G[M][N], int F[k][k], int i,  int j, int FT)
{
    
}