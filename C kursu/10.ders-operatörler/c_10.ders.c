#include <stdio.h>
//                    SCANF             
        
// ÖRNEK -1 - SCANF'te input parametresi türü dışıdna giriş yapma
/*
int main()
{
    int x;
    char buf[1000];
    printf("bir tam sayi girin: ");

    for(;;){
        int n = scanf("%d",&x);
        if (n==1)
            break;
        if ( n==EOF){
            printf("giris yapilamadi tekrar deneyin\n");
            continue;
        }
        scanf("%s", buf);
        printf("[%s] gecerli bir tam sayi degil. Tekrar deneyin\n", buf);
    }
    printf("\n giris basarili girilen tam sayi %d\n",x);
}
*/


//                   OPERATÖRLER       
 
// ÖRNEK - 2 - fonksiyon veya değişken çağırma önceliği
/*
int f1(void)
{
    printf("f1 çagirildi\n");
    return 5;
}
int f2(void)
{
    printf("f2 çagirildi\n");
    return 10;
}

int main()
{
    int x = f1 () + f2 () * 5 ;
    // bu işlemde öncelik f2 * 5 
    // fakat bunun için f2 fonksiyonu daha önce mi çağırılır?
    // Hayır öncelikle yine f1 çağırılır sonra f2 çağırılır.
    
    printf("x=%d\n",x); 
    
}
*/


// ÖRNEK - 3 - % operatörü detay
/*
int main() 
{
    
    int x=5;
    int y=3;
    printf(" %d %%  %d = %d\n" , x, y,  x%y);
    //işlem içinde % yi belirtmek için 2 kere ayzmak gerekiyor
    


}
*/

// ÖRNEK - 4 - BİNLER, YÜZLER, ONLAR VE BİRLER BASAMAĞI BULMA 
/*
int main()
{
  int x;
   printf("4 basamakli sayi girin: ");
   scanf("%d",&x);

   printf("%d sayisinin binler basamagi %d\n"   ,x , x / 1000);
   printf("%d sayisinin yuzler basamagi %d\n"   ,x , x / 100  % 10);
   printf("%d sayisinin yuzler basamagi %d\n"   ,x , x % 1000 / 100);
   printf("%d sayisinin onlar basamagi %d\n"    ,x , x / 10   % 10);
   printf("%d sayisinin onlar basamagi %d\n"    ,x , x % 100  / 10);
   printf("%d sayisinin birler basamagi %d\n"   ,x , x % 10);
   printf("%d sayisinin basamaksal tersi %d\n"  ,x , x /1000 + (x / 100 % 10) * 10 + (x / 10 % 10)*100 + (x % 10)*1000 );
}
*/


// ÖRNEK - 5 - 
/*
int main() 
{
    int hour,n;
    printf("saat kac? ");
    scanf("%d", &hour);

    printf("kac saat sonra ");
    scanf("%d",&n);

    printf("saat %d ve %d saat sonra %d olacak",hour,n, (hour + n) % 12);

}
*/

// ÖRNEK - 6 - ++ ve --
/*
int main()
{
    int x = 5;
    --x;
    printf("x= %d\n",x);
    x--;
    printf("x= %d\n",x);
    x= x-1 ;
    printf("x= %d\n",x);
    x -= 1; // hepsi x değerini bir azaltır.
    printf("x= %d\n",x);

    ++x;
    printf("x= %d\n",x);
    x++;
    printf("x= %d\n",x);
    x= x+1 ;
    printf("x= %d\n",x);
    x += 1; //hepsi x'i bir arttırır.
    printf("x= %d\n",x);
}
*/

// ÖRNEK - 7 - ++x ve x++ farkı

int main()
{
    int x=5;
    int y=5;

    printf("%d\n",++x); //output: 6
    printf("%d\n",y++); //output: 5
}
