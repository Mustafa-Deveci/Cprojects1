#include <stdio.h>
#include "fonksiyonlar.h"

//kendi tanımladığım kütüphaneleri 2 tırnak arasında  c nin kendi kütüphanesinde tanımlı olanları <> bunla kullanıyorum.

int isPalindrome(int sayi)
{
    int temp = sayi;
    int ters = 0;
    while (sayi > 0)
    {
        ters = (ters * 10) + (sayi % 10);
        sayi = sayi / 10;
    }
    return temp == ters;
    //eşitse 1 değilse 0 dönecek
}
int usAl(int taban, int us)
{
    int sonuc = 1;
    for (int i = 0; i < us; i++)
    {
        sonuc = sonuc * taban;
    }
    return sonuc;
}
int basamakHesapla(int sayi)
{
    int basamakSayisi = 0;
    while (sayi > 0)
    {
        sayi = sayi / 10;
        basamakSayisi++;
    }
    return basamakSayisi;
}
int armstrongSayiMi(int sayi)
{
    int gecici = sayi;
    int basamak = basamakHesapla(sayi);

    int toplam = 0;
    while (sayi > 0)
    {
        toplam += usAl(sayi % 10, basamak);
        sayi = sayi / 10;
    }
    return gecici == toplam;
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
//headerların içinide doldurdum şimdi anabi main dosyasında bunları çağırabilirim.