#include <stdio.h>

#define M 4
#define N 4
#define k 3

int konvolusyon_islemi(int goruntu[M][N], int filtre[k][k], int x,  int y, int filtre_toplam);
void matrisi_bastir(int dondurulmus_matris[M - k + 1][N - k + 1]);

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

    int filtre_matrisinin_elemanlar_toplami = 0;

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            filtre_matrisinin_elemanlar_toplami += filtre_matrisi[i][j];
        }
    }

    if (filtre_matrisinin_elemanlar_toplami == 0) 
    {
        filtre_matrisinin_elemanlar_toplami = 1;
    }

    for (int i = 0; i < M - k + 1; i++) 
    {
        for (int j = 0; j < N - k + 1; j++) 
        {
            sonuc_matrisi[i][j] = konvolusyon_islemi(goruntu_matrisi, filtre_matrisi, i, j, filtre_matrisinin_elemanlar_toplami);
        }
    }

    matrisi_bastir(sonuc_matrisi);

    return 0;
}

int konvolusyon_islemi(int goruntu[M][N], int filtre[k][k], int x, int y, int filtre_toplam)
{
    int degerler_toplami = 0;

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            degerler_toplami += goruntu[i + x][j + y] * filtre[i][j];
        }
    }

    int nokta = degerler_toplami / filtre_toplam;

    return nokta;
    
}

void matrisi_bastir(int dondurulmus_matris[M - k + 1][N - k + 1])
{
    for (int i = 0; i < M - k + 1; i++) 
    {
        for (int j = 0; j < N - k + 1; j++) 
        {
            printf("%d ", dondurulmus_matris[i][j]);
        }
        printf("\n");
    }
}
