#include <stdio.h>
//fonksiyon tanımladı

int isPalindrome(int sayi);
int main()
{
    int sayi;
    printf("bir sayi giriniz : ");
    scanf("%d", &sayi);

    if (isPalindrome(sayi))
        printf("palindrome");
    else
        printf("palindrome değil");
    return 0;
}
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