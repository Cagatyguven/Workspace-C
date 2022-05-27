#include <stdio.h>
 
//--------------- FONKSİYONLAR --------------------------------------


// ÖRNEK - 1 - Büyük değer döndürme
/*
int max2(int a,int b)
{
    if (a > b)
        return a;
    
    return b;
}
*/

// ÖRNEK - 2 - ÜÇ  DEĞİŞKEN BÜYÜK DEĞER
/*
int max3(int a, int b, int c)
{
    int max =a ;

    if (b > max)
        max =b;
    if ( c> max)
        max =c;
    return max;
}

int main(void)
{
    int x , y , z;
    printf("3 buyuk sayi girin: ");
    scanf("%d%d%d", &x, &y , &z);

    printf("n büyük sayı: %d\n", max3(x,y,z));
    
    
}
*/

// ÖRNEK - 3 - FONKSİYON ÇAĞIRMA
/*
int get_abs(int val)
{
    if (val>=0)
        return val;
    return - val;
}
int main()
{
    int x=10;

    get_abs(x);
}
*/    

// ÖRNEK - 4 -Büyük değer döndürme 2
/*
int max2(int a, int b)
{
    if(a>b)
        return a;
    return b;
}
int main()
{
 int x=10, y= 45;

 int max = max2(x,y);

 printf("max = %d",max);
}
*/

// ÖRNEK - 5 - İç içe fonksiyon kullanma
int max2(int a, int  b)
{
    if (a>b)
        return a;
    return b;
}
int main()
{
    int x, y, z, t;

    printf("4 tam sayi girin:    ");
    scanf("%d%d%d%d", &x, &y, &z, &t);

    int max= max2(max2(x,y),max2(z,t));

    printf("en buyuk %d",max);
}







//gcc deneme.c -o main
//  ./main