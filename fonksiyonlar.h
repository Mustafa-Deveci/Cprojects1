/*
Yazmış olduğunuz mükemmel sayı, güçlü sayı, Armstrong sayısı
ve arkadaş sayılar metotlarını bir kütüphane içerisine aktarınız
•
Bu metotların hepsini içeren tek bir kütüphane oluşturunuz
•
Oluşturduğunuz kütüphaneyi farklı bir sınıftan çağırarak test
ediniz.

header olşturdum .h uzantısı ile 

*/

#ifndef FUNCTIONS
#define FUNCTIONS

//FONKSİYONLARIN PROTOTYPLERİNİ ALDIM 
int isPalindrome(int sayi);
int usAl(int taban, int us);
int basamakHesapla(int sayi);
int armstrongSayiMi(int sayi);
int tamBolenlerinToplami(int sayi);
int arkadasSayimi(int sayi1, int sayi2);

#endif

//header oluşturdum şimdi bi c fonksiyon isimli dosya oluşturucam bu headerı kullanıcam.