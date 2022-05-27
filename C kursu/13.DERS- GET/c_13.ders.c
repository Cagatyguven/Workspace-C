#include<stdio.h>

//                 KONTROL DEYİMLERİ   

//   ÖRNEK - 1 - DENKLEM KÖKLERİ BULMA
/*
#include<math.h>
int main()
{
    int a,b,c;
    double delta;
    printf("x^2, x ve tam sayi katlarini sirayla yazin: ");
    scanf("%d%d%d",&a,&b,&c);
    delta = (b*b) - (4*a*c);
    double root_delta=sqrt(delta);// print içinde iki kere sqrt fonksiyonunu çağırmak bir maliyet tekte çağırıp değişkene atamak daha iyi

    if( delta < 0){
        printf("kok yok");
    }
    else if ( delta== 0){
        printf(" kok = %f\n", -b/(2*a));
    }
    else
        printf(" kokler= %f, %f",(-b-root_delta)/(2*a),(-b+root_delta)/(2*a));

}
*/



//               GETCHAR-PUTCHAR İŞLEVLERİ


//   ÖRNEK - 2 - getchar kullanımı
/*
int main()
{
    int c;

    printf("bir karakter girin: ");
    c=getchar();


    printf("c=%d\n",c);


    int c1,c2,c3;
    printf("uc karakter girin: ");
    c1=getchar();
    c2=getchar();
    c3=getchar();

    printf("%d%d%d",c1,c2,c3);
}
*/


//   ÖRNEK - 3 - getchar-scanf buffer kullanımı
/*
int main()
{
    int x,y;
    int c;

    printf("iki tam sayi girin: ");
    scanf("%d",&x);
    c=getchar();
    scanf("%d",&y);

    printf("x=%d\n",x);
    printf("y=%d",y);
}
*/

//   ÖRNEK - 4 - scanf olmadan uzun string değeri alma 
/*
int main()
{
    int c;
    printf("uzun sayi/kelime gir: ");
    while ((c=getchar()) != '\n')
    {
        printf("%d",c-'0');
        //sayının aski tablosundaki karşılığından 0'ın aski tanlosundaki karşılığını çıkarırsanız sayıyı bulursunuz
    }
    
}
*/

//   ÖRNEK - 5 - Büyük basamaklı bir sayının 3'e bölünmesini kontrol etme
/*
int main()
{
    int c;
    int sum=0;
    printf("bir tam sayi giriniz: ");

    while ((c=getchar()) != '\n')// çok büyük basamaklı bir sayıda bu yöntemi kullanabiliriz
    {
        sum += c - '0';


    }
    if(sum % 3 == 0 && sum != 0)
        printf("tam bolunur");
    else
        printf("hayir tam bolunmez");

}
*/

//   ÖRNEK - 6 - _GETCH KULLANIMI - gizli input
/*
#include<conio.h>
int main()
{
    int c1,c2,c3,c4;

    printf("parolayi girin: ");
    c1=_getch();
    printf("*");
    c2=_getch();
    printf("*");
    c3=_getch();
    printf("*");
    c4=_getch();
    printf("*");
    // _getch inputu göstermez girilirken
    //yani siz abcd yazdığınızde ilk başta ekranda sadece
    //**** gözükür dha sonra parola abcd yazar
    printf("\nparola: %c%c%c%c",c1,c2,c3,c4); 
}
*/


//   ÖRNEK - 7 - Artık yıl(leap year) testi( şartlar 4e tam bölünecek ve 100e tam bölünmeyecek veya   400e tam bölünecek )
// örnek 1977 artk yıl değil. 1984 artık yıl. 2000 artık yıl
/*
int isleap(int y)
{
    return y % 4 == 0 && (y%100 != 0 || y %400 == 0 );

}


int main()
{
    int year;
    printf("bir yil girin: ");
    scanf("%d",&year);

    if (isleap(year))
        printf(" %d artik yildir",year);

    else
        printf("%d artik yil degil",year);
}
*/

//                          CTYE.h


//   ÖRNEK - 8 - hazır fonksiyonlar
#include<ctype.h>

int main()
{
    int c;
    
    printf("bir karakter girin: ");
    c=getchar();

    printf("%d kodlu karakter\n");
    
    if (isupper(c))
        printf("buyuk harf karakteri\n");
    else
        printf("buyuk harf karakteri degil\n");


    if (islower(c))
        printf("kucuk harf karakteri\n");
    else
        printf("kucuk harf karakteri degil\n");


    if (isalpha(c))
        printf("harf karakteri\n");
    else
        printf("harf karakteri degil\n");


    if (isdigit(c))
        printf("sayi karakteri\n");
    else
        printf("sayi degil\n");


    if (isalnum(c))
        printf("alfanumerik karakteri\n");
    else
        printf("alfanumerik karakteri degil\n");


    if (isxdigit(c))
        printf("hex karakteri\n");
    else
        printf("hex degil\n");

        
    if (ispunct(c))
        printf("punctuation karakteri\n");
    else
        printf("punctuation karakteri degil\n");

}


