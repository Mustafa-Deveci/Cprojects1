#include <stdio.h>
// 371 = 3küpü + 7nin küpü + 1in küpü ne eşit armstrong sayıdır
int usAl(int taban, int us);
int basamakHesapla(int sayi);
int armstrongSayiMi(int sayi);

int main()
{
    int sayi;
    printf("bir sayı giriniz :");
    scanf("%d", &sayi);
    printf("%d" , armstrongSayiMi(sayi));
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
