#include <stdio.h>
#include "fonksiyonlar.c"
//normalde yukarının .h olması lazım ama vscode hatasından dolayı burayı .c yaptığımızda kod çalışıyor

int main(){

    int sayi ;
    printf("bir sayi giriniz : ");
    scanf ("%d" , &sayi);
    printf("%d", isPalindrome(sayi));   
}