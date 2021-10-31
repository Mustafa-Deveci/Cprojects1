#include <stdio.h>

int main()
{
    int ort, total, counter, not ;
    counter = 1;
    total = 0;
    while (counter <= 10)
    {
        printf("notunuzu giriniz :");
        scanf("%d", &not );
        total = total + not ;
        counter = counter + 1;
    }
    ort = total / 10;
    printf("sınıf ortalaması %d\n :", ort);
    return 0;
}