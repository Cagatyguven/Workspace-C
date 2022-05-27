#include<stdio.h>

//               FONKSİYONEL MACROLAR


//     ÖRNEK -   1  - FONKSİYONEL MACROLAR
/*
#define max2(a,b) ((a)>(b)? (a):(b))

int main()
{
     int x,y;   

     printf("iki tam sayi girin: ");
     scanf("%d%d",&x,&y);

     int max= max2(x,y);
     printf("%d",max);
     //x ve y yi yukarıdaki fonksiyon makcrosunda şartta deniyoruz
}
*/


//     ÖRNEK -   2  - define

/*
#define square(a) a*a
int main()
{
     
     int x,y;

     printf("bir sayi girin: ");
     scanf("%d",&x);

     y= square(x);

     printf("y=%d\n",y);

}
*/

  
//     ÖRNEK -   3  - define  - parantez kullanımı 
/*
#define square(a) a*a
int main()
{
     
     int x,y;

     printf("bir sayi girin: ");
     scanf("%d",&x);

     y= square(x+1);
     //derleyicinin gördüğü kod : y= x+1*x+1
     //yani 5+ 5*1 + 1 = 11
     //a'ları paranteze alsak 36 çıkardı
     printf("y=%d\n",y);
     
}
*/


//     ÖRNEK -   4   - define parantez kullanımı
/*
#define square(a) (a)*(a) // diğer örneğe nazaran burada parantez kullandık 
int main()
{
     
     int x,y;

     printf("bir sayi girin: ");
     scanf("%d",&x);

     y= square(x+1);
     
     printf("y=%d\n",y);
     
}
*/


//     ÖRNEK -   5   - define parantez kullanımı
/*
#define square(a) ((a)*(a)) //ekstra bir parantez daha ekledik
int main()
{
     
     int x,y;

     printf("bir sayi girin: ");
     scanf("%d",&x);

     y= 100/square(x+1);
     
     printf("y=%d\n",y);
     
}
*/


//     ÖRNEK -   6  -  Define örnekleri
/*
#define ISUPPER(c) ( (c) >= 'A' && (c) <= 'Z' )
#define ISLOWER(c) ( (c) >= 'a' && (c) <= 'z' )
//ascii tablosuna göre kontrol yapılıyor.
int main()
{
     int ch;

     printf("bir karakter girin: ");
     ch=getchar();

     if (ISUPPER(ch))
          printf("evet buyuk harf\n");
     else
          printf("hayir buyuk harf degil");
}
*/


//     ÖRNEK   -    7     -  syntax hatasının nedeni nedir?   
/*
#define max2 (a,b)  ( (a) > (b) ? (a) : (b) )
// max2(a,b) arasında boşluk olmamalı
//böyle olursa fonksiyonel makro olmaz başka tür bir makro olur

int main()
{
     int x,y;

     printf("iki tam sayi girin: ");
     scanf("%d%d",&x,&y);

     int z = max2(x,y);
} 
*/



//                  PREPROCESSOR OPERATOR

//    ÖRNEK    -    8     -   # operatörü
/*
#define str(a)  #a

int main()
{
     printf(str(furkan));
     //output : furkan
}
*/


//    ÖRNEK    -    9     -   # operatörü
/*
//normalde yayzdığımız

#define iprint(x) printf("x=%d\n",x)

int main()
{
     int a=10;
     int b= 7;
     int c= 21;

     iprint(a);
     iprint(a+b);
     iprint( a*a + b*b + c*c ); 
     //output:
     //x=10
     //x=17
     //x=590
}

// # ile yazılan

#define iprint(x) printf(#x "= %d\n",x)

int main()
{
     int a=10;
     int b= 7;
     int c= 21;

     iprint(a);
     iprint(a+b);
     iprint( a*a + b*b + c*c );
     //output:
     //a= 10
     //a+b= 17
     //a*a + b*b + c*c= 590 
}
*/


//    ÖRNEK    -    10    -   ## operatörü

#define uni(a,b)   a##b

int main()
{
     int counter = 0;

     uni(co,unter) = 20;
     //counter = 20;
}