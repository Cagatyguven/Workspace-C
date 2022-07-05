#include<stdio.h>

// ÖRNEK - 1 - 
/*

int main()
{
    
    int x=7;

    printf("%d\n",x++);// 7
    printf("%d\n",++x);// 9 
    printf("%d\n",++x);// 10
    


   int x = 13;
   int y= 5;

   printf("%d\n",x++ %  --y); // 13%4=1
   printf("%d\n",++x %  y--); // 15%4=3

}
*/


//               KARŞILAŞTIRMA OPERATÖRLERİ   

// ÖRNEK - 2 - operatörlerin 0 veya 1 değeri vermesi
/*
int main()
{

    int x,y;
    printf("iki tam sayi girin: ");
    scanf("%d%d",&x,&y);
    //5 ve 6 için
    printf("%d > %d = %d\n",x,y,x>y);//0
    printf("%d => %d = %d\n",x,y,x>=y);//0
    printf("%d <= %d = %d\n",x,y,x<=y);//1
    printf("%d < %d = %d\n",x,y,x<y);//1
    printf("%d == %d = %d\n",x,y,x==y);//0
    printf("%d != %d = %d\n",x,y,x!=y);//1
    
}
*/

// ÖRNEK - 3 -  sayının pozitif negatif olduğunu bulma
/*
int main()
{
    int x;
    printf("bir tam sayi girin: ");
    scanf("%d",&x);
    // sign fonksiyonu sayı negatif ise -1 
    // pozitif ise 1, 0 ise 0 değeri üretir.
    printf("sign (%d)= %d", x, (x > 0) - (x < 0));

}
*/

// ÖRNEK - 4 -  neden '==' operatörü ile karşılaştırma yapmamalıyız 
/*
int main()
{
    int x= 0.;

    for(int i=0;i<10;i++)
        x += .1;
    
    if (x==1)
        printf_s("true");
    else
        printf_s("false");

// false çıktısı alırız çünkü
// ekleme yaparken her seferinde
// 0.1000000....52 gibi sayı ekleriz ve asla 1e eşit olamz sonda

}
*/


//                  LOJİK OPERATÖRLER    

// ÖRNEK - 5 - Lojik Değil (!) Operatörü
/*
int main()
{
    int x;
    printf("bir tamsayi girin: ");
    scanf("%d",&x);

    printf("!(%d)= %d\n",x,!x);
    // -7 veya + 7 girdisine 0 değeri basar.
    // 0'a 1 basar

    printf("!!(%d)= %d",x,!!x);
    
}
*/ 

// ÖRNEK - 6 - Lojik Ve (&&) Operatörü
/*
int main()
{
    int x,y;

    printf_s("iki tam sayi girin: ");
    scanf("%d%d",&x,&y);

    printf_s("(%d) && (%d) = %d\n",x,y,x&&y);
    // nonzero && nonzero = 1
    // zero && nonzero = 0
    // zero && zero = 0
}
*/

// ÖRNEK - 7 -  Lojik Veya (||) Operatörü
/*
int main()
{
    int x,y;

    printf_s("iki tam sayi girin: ");
    scanf("%d%d",&x,&y);

    printf_s("(%d) || (%d) = %d\n",x,y,x||y);
    // nonzero && nonzero = 1
    // zero && zero = 0
    // zero && nonzero = 1
}
*/

// ÖRNEK - 8 - orta değeri bulma sorusu
/*
int getmid(int a, int b, int c)
{
    // benim yaptığım
    
    int orta;
    if ((a>b && a<c) || a<b && a>c)
        orta=a;
    if ((c>b && c<a) || (c<b && c>a))
        orta=c;
    else;
        orta=b;
    return orta;
    

    if( !( a>b && a>c || a<b && a<c ) )
        return a;
    if( !( b>a && b>c || b<a && b<c ) )
        return b;
    else
        return c;

}
int main()
{

    int x,y,z;
    printf_s("3 tam sayi girin; ");
    scanf("%d%d%d",&x,&y,&z);

    printf_s("%d\n",getmid(x,y,z));

}
*/


//                  ATAMA OPERATÖRLERİ    


int main()
{
    int day,hour, min, sec;

    printf_s("gun saat dakika saniye olarak sure degerlerini girin: ");
    scanf("%d%d%d%d",&day,&hour,&min,&sec);


    min += sec/60;
    sec %= 60;

    hour += min/60;
    min  %= 60;

    day += hour/24;
    hour %= 24;

    printf_s("%d gun %d saat %d dakika %d saniye\n",day,hour,min,sec);
}