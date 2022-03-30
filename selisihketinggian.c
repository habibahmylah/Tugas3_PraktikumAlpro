// Nama : Habibah Mylah Dalilah
// NIM : 24060121120028
// Lab Praktikum : B1

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
	int i,N, jarak, terKecil, terBesar;

    //Algoritma
    printf("Membuat Program Selisih Ketinggian \n");
    scanf("%d", &N);
    int T[N];

    for (i = 0; i < N; i++) scanf("%d", &T[i]);

    terBesar = T[0];
    terKecil = T[0];

    for (i = 0; i < N; i++) if (T[i] > terBesar) terBesar = T[i];

    for (i = 0; i < N; i++) if (T[i] < terKecil) terKecil = T[i];

    jarak = terBesar-terKecil;
    printf("%d", jarak);
    return 0;
}
