#include <stdio.h>

//                  SWITCH KONTROL DEYİMİ


//      ÖRNEK    -    1      -  SWITCH 1. ÖRNEK
/* 
int main()
{
    int n;

    printf("haftanin kacinci gunu: ");
    scanf("%d",&n);

    switch (n){
    case 1: printf("pazartesi  gunu\n"); break;
    case 2: printf("sali  gunu\n"); break;
    case 3: printf("carsamba  gunu\n"); break;
    case 4: printf("persembe  gunu\n"); break;
    case 5: printf("cuma  gunu\n"); break;
    case 6: printf("cumartesi  gunu\n"); break;
    case 7: printf("pazar  gunu\n"); break;
    default: printf("gecersiz gun\n"); break;
    }
    printf("switch deyimi yurutuldu\n");
}
*/


//      ÖRNEK    -    2      - switch deyimi ile tarih basma

void print_date(int d, int m, int y)
{
    printf("%d",d);

    switch (d){
    case 1: 
    case 21: 
    case 31: printf("st "); break;
    case 2:
    case 22: printf("nd "); break;
    case 3: 
    case 23: printf("rd "); break; 
    default: printf("th "); break;
    }

    switch(m){
    case 1: printf("JAN "); break;
    case 2: printf("FEB "); break;
    case 3: printf("MAR "); break;
    case 4: printf("APR "); break;
    case 5: printf("MAY "); break;
    case 6: printf("JUN "); break;
    case 7: printf("JUL "); break;
    case 8: printf("AUG "); break;
    case 9: printf("SEP "); break;
    case 10: printf("OCT "); break;
    case 11: printf("NOV "); break;
    case 12: printf("DEC "); break;
    }

    printf("%d",y);
}

int main()
{
    int day,month,year;
    printf("gun ay yil olarak tarih girin: ");
    scanf("%d%d%d",&day,&month,&year);

    print_date(day,month,year);

}