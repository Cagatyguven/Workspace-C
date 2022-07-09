#include<stdio.h>
#include<conio.h>

//                   DÖNGÜ DEYİMLERİ

// ÖRNEK - 1 - MAXIMUM MUNCH KURALI
/*
int main()
{
    int x= 5;
    int y= 9;
    int z = x+++y;

    printf("x=%d\n",x);//6
    printf("y=%d\n",y);//9
    printf("z=%d\n",z);//14
    //undefined behavior yok burada 
}
*/

//                  while
// ÖRNEK - 2 - while(n--) kullanımı ile sayının üssünü alma
/*
int power(int base,int exp)
{
    int result=1;

    while(exp--)
        result *=base;
    return result;
}
 
int main()
{   
    int x,y;

    printf("iki tam sayi girin: ");
    scanf("%d%d",&x,&y);

    printf("%d ussu %d = %d",x,y,power(x,y));

}
*/


// ÖRNEK - 3 - while(n--) kullanımı ile 2'nin 30 akadar üslerini alma
/*
int power(int base,int exp)
{
    int result=1;

    while(exp--)
        result *=base;
    return result;
}
 
int main()
{   
    int i=0;

    while(i<30){
        printf("%d\n",power(2,i++));
    }

}
*/

//                  break

// ÖRNEK - 4 vers 1  - break ile e yada h harfi kullandırma
/*
#include<conio.h>
int main()
{
    int ch;
    printf("evet mi hayir mi? ");
    //e yada h tusu dışındaki tuşlara basılmasını istemiyorum
    //diğer tuşlara tepki vermesin
    while(1){
        ch =_getch();
        if(ch=='e' || ch=='h')
            break;
    }
    putchar(ch);
    if (ch=='e')

    {
        printf("\nevet dediniz");
    }
    else
        printf("\nhayir dedniz");
    
}
*/


// ÖRNEK - 4 vers 2   - break ile e yada h harfi kullandırma
/*

int main()
{
    int ch;
    printf("evet mi hayir mi? ");
    
    while((ch= _getch()) != 'e' && ch!= 'h'){
    }
    if (ch=='e')
        printf("\nevet dediniz");
    else
        printf("\nhayir dedniz");
} 
*/


// ÖRNEK - 5 - //break- kullanıcı istediği kadar sayı giricek sayı adedi ve ortalamsı hesaplanacak
// max min sayisi da basilacak
/*
#include<stdlib.h>
int main()
{
    int c;
    int ival;
    int count = 0;
    int sum=0;
    int min,max;  // bunun alternetifi de var. en küçük sayıya en büyük sayı karakterini atamak gibi


    while(1){
        printf("tam sayi girecek misiniz? (e) or (h) ");

        while((c=_getch()) != 'e' && c != 'h')
        ;   

        printf("%c \n ",c);
        if(c == 'h')
            break;
        
        printf("bir tam sayi girin: ");
        ival= (rand() % 2  ? 1:-1) *rand(); // stdlib'e özel rastgele sayi oluşturma
        printf(" %d\n",ival);
        sum += ival;
        if(count==0)
            min=max=ival; 
        else if(ival>max)
            max=ival;
        else if(ival<min)
            min=ival;    
        ++count;       
    }
    if(count == 0)
        printf("hic sayi girilmedi\n");
    else
        printf("%d sayi girdiniz\n",count);
        printf("sayilarin oratalamasi %d\n",sum/count);
        printf("max sayi %d , min sayi %d\n", max,min); 
}
*/


//             


