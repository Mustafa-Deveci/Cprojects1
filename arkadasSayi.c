#include <stdio.h>

/*
220 1 2 4 5 10 11 20 22 44 55 110  = 284

284 1 2 4 71 142= 220

Not: İki sayı birbirinin kendisi hariç bölenleri toplamına eşitse bu
sayılara arkadaş sayılar denir.

*/

int tamBolenlerinToplami(int sayi);
int arkadasSayimi(int sayi1, int sayi2);

int main()
{
    int sayi1 , sayi2;
    printf("iki sayı giriniz :\n");
    scanf("%d %d" , &sayi1,&sayi2);
    if(arkadasSayimi(sayi1,sayi2)){
        printf("arkadaş sayılardır.");
    }else{
        printf("bu iki sayi arkadas degildir.");
    }
    return 0;
}

int tamBolenlerinToplami(int sayi)
{

    int toplam = 0 ;
    for (int i = 1; i <= sayi / 2; i++)
    {
        if (sayi % i == 0)
            toplam += i;
    }
    return toplam;
}
int arkadasSayimi(int sayi1, int sayi2){
    return tamBolenlerinToplami (sayi1) == sayi2 && tamBolenlerinToplami(sayi2) == sayi1;
}
