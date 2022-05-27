#include<stdio.h>
#include "nutility.h"
//                                      switch kontrol deyimi


//         örnek    -   1     -       switch ile yılın kaçıncı günü olduğunu bulma
/*
int day_of_year(int d, int m, int y)
{
    int sum = d;

    switch (m-1){
    case 11: sum += 30;//fallthrough(bilerek break kullanmadım demek)
    case 10: sum += 31;//fallthrough
    case 10: sum += 31;//fallthrough
    case 9: sum += 30;//fallthrough
    case 8: sum += 31;//fallthrough
    case 7: sum += 31;//fallthrough
    case 6: sum += 30;//fallthrough
    case 5: sum += 31;//fallthrough
    case 4: sum += 30;//fallthrough
    case 3: sum += 31;//fallthrough
    case 2: sum += isleap(y) ? 29 : 28;//fallthrough
    case 1: sum += 31;//fallthrough
    }

    return sum;

}

int main()
{
    int day,month,year;

    printf("gun ay yil olarak tarih girin: ");
    scanf("%d%d%d",&day,&month,&year);

    printf("yilin %d. gunu",day_of_year(day,month,year));
   
}
*/


//                                   TÜR DÖNÜŞÜMLERİ( TYPE CONVERSIONS)

//         örnek    -   2     -  implicit tür dönüşümü ilk bakış
/*
int main()
{
    int x= -1;
    unsigned int y= 1;

    if(x>y)
        printf("dogru\n");
    else   
        printf("yanlis\n");
    // normalde yanlış basmasını bekleriz fakat output doğru şeklinde oluyor.
    //  x'in bellekte tutulma karşılığı 1111 1111 1111 1111
    // y'nin bellekte tutulma karşılığı 0000 0000 0000 0001
}
*/


//         örnek    -   3    -  koşul operatörü ile tür dönüşümü
/* 
int main()
{
    int x = 10;
    int y = 20;

    double dval=(y > 10 ? x : 3.) / 3;
    // koşul operatörü de tür değiştirmeye dahil 
    // X: 3. 'da biri double biri int olduğu için rank karşılaştırmasından ikisi de double oluyor. Bu yüzden sonuç 3.33
    printf("dval = %f\n",dval);
    // output:3.33

}
*/


//         örnek    -   3    -  {tür değiştirme operatörü 

int main()
{
    int x =10,y=3;

    double dval;

    dval = x / y ;
    printf("dval = %f\n",dval); //3.000000

    dval = (double)x / y ;
    printf("dval = %f\n",dval); //3.333333

    dval = x / (double)y ;
    printf("dval = %f\n",dval); //3.333333

    dval = (double) (x / y) ;
    printf("dval = %f\n",dval); //3.00000

   //kalıcı değişiklik yok
}

