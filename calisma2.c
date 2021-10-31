#include <stdio.h>

int main()
{
    int sayi1, sayi2;
    printf("iki tane int sayi giriniz: \n");
    scanf("%d%d", &sayi1, &sayi2);

    if (sayi1 == sayi2)
    {
        printf("sayi1 %d ve sayi2 %d birbirine eşittir\n ", sayi1, sayi2);
    }
    if (sayi1 != sayi2)
    {
        printf("%d eşit değildir %d ye \n", sayi1, sayi2);
    }
    if (sayi1 < sayi2)
    {
        printf("%d küçüktür %d den \n", sayi1, sayi2);
    }
    if (sayi1 > sayi2)
    {
        printf("%d büyüktür %d den \n", sayi1, sayi2);
    }
    if (sayi1 <= sayi2)
    {
        printf("%d küçük esittir %d den\n", sayi1, sayi2);
    }
    if (sayi1 >= sayi2)
    {
        printf("%d büyük eşittir %d den \n", sayi1, sayi2);
        return 0;
    }
}