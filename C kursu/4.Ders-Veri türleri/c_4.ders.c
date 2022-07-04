#include<stdio.h>
/* printf ile ilk kod */
/*
int main(){


    printf("merhaba\n");

}
*/


/* fonksiyon ile ilgili bilgiler */
/*

functional decomposition(işlevsel ayrıştırma)
yapılacak işleri fonsiyon/işlevlere ayırıyoruz


to define a function // a function definition
implement ettim demek // fonksiyonu tanımlamak demek


to call a function   // a function call


to declare a function // a function declarat



*/


/* veri türleri */
/*

data types
a)basic types (1byte )
b)user-defined types-> kullanıcılar tarafından oluşturulan değişkenler

_Bool(1byte)

karakter türleri
char(2 byte)
signed char
unsigned char 

kısa tam sayı türleri
signed short int(2 byte)
unsigned short int

uzun tam sayı türleri
signed long int(4-8 byte)
unsigned long int

çok uzun tam sayı t.
signed long long int(8 byte)
unsigned long long type


signed int(2-4-8 byte)
unsigned int

*/


/* floating types */
/*
float -> 4 byte
double -> 8 byte
long double -> 8-10-12-16 byte(çok kullanılmaz)
*/


/* data typelarının kapladığı yerler */
/*
int main(){

printf("size of (char)= %zu\n",sizeof(char));
printf("size of (_Bool)= %zu\n",sizeof(_Bool));
printf("size of (short)= %zu\n",sizeof(short)); 
printf("size of (int)= %zu\n",sizeof(int));
printf("size of (long )= %zu\n",sizeof(long));
printf("size of (long long)= %zu\n",sizeof(long long));
printf("size of (float )= %zu\n",sizeof(float));
printf("size of (double )= %zu\n",sizeof(double));
printf("size of (long double )= %zu\n",sizeof(long double));
}
*/

 
/* declaration and definition( bildirim ve tanımlama) */
/* 
int main()
{
    int x;
    int y= 5; buna değer atama denmiyor, initialize etmek deniyor.
    y= 34; bu atamadır, assign yani. Ama burada bir bildirim yok
    -----------------------------------------------------------
    unsigned char x;
    char unsigned x; ikisi de kullanılabilir.

    ------------------------------------------------
    signed int ve int aynı şey. Default olarak signed olarak kabul ediliyor.
    signed int x = signed x = int x ; kısaca. Hepsi aynı şey

    unsigned int/ unsigned  x ; bu diğerlerinden farklı

    -----------------------------------------------------

    signed long(long) int = long(long) int = signed long(long) = long(long)

    unsigned long(long) int = unsigned long(long)

    ----------------------------------------------------------

} 
*/


/*    STORAGE DURATION  */
/*



    ömür( değişkenin bellekte kapladığı yeri tutma süresi)

    
    Storage Classes
    ----------------
    1)automatic storage class  
    2)static storage class
    3)dynamic storage class    

-------------------------------------------
ÖRNEK;

int g; 
Bu bir global değişkendir.(Global namespacedeki değişkenler global değişkendir)
Ve global değişkenler statik ömürlü olmak zorundadır.
Otomatik ömürlü yapma şansınız yok

int main()
{

}
-----------------------------------------------
ÖRNEK;

void func(){
    int x; bu bir yerel değişkendir(local variable)
    Otomatik ömürlü veya statik ömürlü olabilirler.



    int x=10; mesela bu otomatik ömürlüdür.

    printf("x=%d\n", x);
    x += 10; x'i sürekli 10 arttırıyorum
    20 oldu ama fonksiyon sonu ve x bellekten silindi.
    yukarıda tekrar 10 değeri ile yaratıldı.
}
int main()
{
    func(); x=10
    func(); x=10
    func(); x=10
    func(); x=10
    func(); x=10
    func(); x=10 şeklinde çıktılar görürdük
} 

------------------------------------------------
ÖRNEK;

void func(){
    static int x=10; 
    printf("x=%d\n", x);
    x += 10; statik olduğu için x=20 olucak 
    ve sıfırlanmayacak.

}
int main()
{
    func(); x=10
    func(); x=20
    func(); x=30
    func(); x=40
    func(); x=50
    func(); x=60 şeklinde çıktılar görürdük.
} 
-----------------------------------------------------
*/


/*   örnek kod       */
/*
int g;
void func(void)
{
    static int x;
    printf("x= %d\n",x);
}

int main ()
{
    printf("g= %d\n",g); 
    g için otomatik 0 atanır 
    func();


    int x;  tanımsız davranış  
}
*/


/* Tanımsız Davranış Nedir? */
/*

(well)DEFINED - behavior nedir?
-------------------
örnek
int main(){
    int x=10;
    ++x;
    printf("x =%d\n", x);
    Burada 11 basılacğını biliyoruz. Bu garanti
    Bu yüzden defined behavior
}
----------------------------------------------
----------------------------------------------
----------------------------------------------

UNDEFINED behavior (tanımsız davranış) nedir?
-----------------------------------
runtimeda her şey olabilir demektir.
Ne ile sonuçlanacağı bilinmeyen kod.
undefined behavior kesinlikle kullanılmamalı!!!!!!!!!!!!
---------------------------------
*/

int x; // bu 0 alır çünkü global value ve statik ömürlü
int main()
{
    int x; //indetermined or garbage value.
    //otomatik ömürlü
    // bu 0 almaz. Bunu ilerde kullanırsan undefined behavior olur
    static int x; //bu ilk başta 0 alır
    //statik ömürlü
//özet 
//global valueler her zaman statiktir
//statik ömürlüler 0 alır
//local valuelar normalde otomatiktir ama statik de olabilir
//otomatikler başta 0 almaz
//

}