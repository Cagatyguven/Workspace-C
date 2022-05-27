#include <stdio.h>

//-----------------------------------------------------------------
// a) unspecified behavior
// (derleyiciye kalıyor. Ve derleyici üreteciği kodu belirtmiyor)
    //  a.1. implementation defined
    //  (derleyicinin belirtme zorunluluğu varsa implementation defined)


/*örnek:
int main()
{
    char x; 

    //3 çar türü vardı:
    //signed,unsigned,normal
    //sadece char yazdığımızda bu işaretli de olabilir işaretsiz de
    //bu implementation definied bir özellik
}

int main()
{

    a=f1()+f2();

    +burada 2 fonksiyonun çıktısı başka yerde toplanıyor.
    +derleyici kodu üretti diyelim, hangi fonksiyon önce çağırılacak?
    +bunu bilemeyiz, işte bu unspecified behavior.

}
*/
//---------------------------------------------------------------------------


// çöp değere sahip değişkeni bu değerle kullanmak tanımsız davranıştır.

// mümkün olan her yerde değişkenlere ilk değer verilmeli( initialize etme )


//-------------------------------------------------------------------------------------


// BİLDİRİM VE TANIMLAMA
/* 
int main(){


    int x=22;
    int y;
    int z=55;
    
    int q=10,v,s=50;

}
*/

/*
int x =10;
int y=x;   --- bu hatalı 
çünkü statik ömürlü(global değişkenler ve statik etiketli yerel değişkenler)
sabit değer ile initialize edilmelidir.

int main()
{
    signed/unsigned  double x; -> geçersiz(double zaten işaretlidir)
    signed x; ->  geçerli
}
*/

// ADLANDIRMA KURALLARI
// a-z, 0-9 ve _ ile parametreler yazılabilir
// rakam ile başlayamaz, _ ile başlayabilir
 // Scope: bir ismin kullanılabilidği kod aralığına o ismin "kapsamı(scope)" denir.

/* örnek(tanımlama alakalı)
int main(){
    //otomatik ömürlülerde sabit değer verme zorunluluğu yoktur.

    int x = 10;
    int y= x+10;
    int z= x+y+10; //gibi. Bu şekilde yazmada sorun yok.


    static q= y+10; //bu static ömürlü bu yüzden hata verir.
}

int t=10;
int u= t+10; //burda da statik ömürlü yine hata verir.

*/


/* SCOPE (KAPSAM)

KAPSAM KATEGORİLERİ
--------------------
1- File Scope (Dosya kapsamı)
2- Block Scope (Blok kapsamı)
3- Function Prototype Scope (Fonksiyon prototip kapsamı)
4-  Funciton Scope (Fonksiyon Kapsamı)


+ File ve Block scope en önemli iki tanesi.
+ Global namespace'te tanımlanan değişkenler(global variable) dosya kapsamındadır. Bunlar her yerde kullanılabilir.
+ File Scope, bir global variable'ın tanıldığı noktadan dosya sonuna kadar kullanılmasıdır.
+ Block Scope, bir blok içinde tanıtılan isim ( blok = {} ) tanıtıldığı noktadan  tanıtıldığı bloğun sonuna kadar kullanılmasıdır.

*/

int y=10;

void func(void)
{
    static int x= 10;
}
int main()
{
    // x ve y statik ömürlü fakat y dosya kapsamında
    // x ise blok kapsamında
    // bu yüzden main'de sadece y kullanılabilir.
}


//aynı scopeda birden fazla değişkene aynı isim verilemez. 

int x=20;

int main()
{
    int x = 30;
    // bu x ile diğer x farklı değişkendir.
}