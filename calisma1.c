#include <stdio.h>

int main()
{

    int sayi1, sayi2, sonuc;
    printf("birinci sayiyi giriniz :\n");
    scanf("%d", &sayi1);

    printf("ikinci sayiyi giriniz :\n");
    scanf("%d", &sayi2);

    sonuc = sayi1 + sayi2;
    printf("girilen sayinin toplamlari: %d\n", sonuc);

    sonuc = sayi1 + sayi2;
    printf("sayi1 %d + sayi2 %d = sonuc %d", sayi1, sayi2, sonuc);
    return 0;
}
