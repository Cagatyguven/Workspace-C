#include <stdio.h>

//                          ATAMA OPERATÖRLERİ

//  ÖRNEK - 1 - SEVİYE TESPİT SINAVLARINDA SORULAN NESNEYE ATANAN ATAMA OPERATÖRÜ SONUCU SORUSU
/*
int main()
{
    int x=10,y=24,t=5,z=7;

    x += y += t *= z %= 5;
    // sağ öncelikli her zaman
    // z=2 olur daha sonra t= t*2 'den 10
    // y= 24+10 =34 daha sonra x=x+34ten x=44

    printf_s("z=%d\n",z);
    printf_s("t=%d\n",t);
    printf_s("y=%d\n",y);
    printf_s("x=%d\n",x);
}
*/


//                            VİRGÜL OPERATÖRÜ


//  ÖRNEK - 2 - virgül operatörü 
/*
int main()
{
    int a=5, b= 10,c=20;
    ++a, b=a; 
    //b'ye atanan değer soldaki işlemin yapılmasından sonra gerçekleşir
    // yani b=6 olur.
    ++a,b=a,c=a+b;
    //c=12
}
*/


//  ÖRNEK - 3 -virgül operatörü  soldan sağa öncelik seviyesi
/*
int main()
{
    int a,b=10,c=20;

    a = (b,c);//20 değeridir.

    printf("%d\n",a);

    a = (c,b);//10 değeridir.}
    printf("%d",a);
}
*/


//  ÖRNEK - 4 - virgül operatörü  for döngüsü
/*
int main()
{

    int a[10]={(0,1,2,3,4,5,6,7,8,9)};
// tek bir ifade
//içindeki virgül operatör ve soldan sağa doğru kullanılıyo
//ve en son 9 olduğu için değer olarak 9 oluyo
    for (int i=0;i<10;++i)
        printf("%d",a[i]);
}
*/




//                 KONTROL DEYİMLERİ   

//  ÖRNEK - 5 -