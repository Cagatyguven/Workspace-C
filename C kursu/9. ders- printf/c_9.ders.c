#include<stdio.h>
#include<ctype.h>
#include<math.h>
//                            PRINTF          
//                      ----------------------
// ÖRNEK - 1 - Kontrol karakterlerini txt dosyasına basma ( İLK 32 KARAKTER + 127. KARAKTER)
/*
int main()
{
    FILE* f = fopen("ascii.txt","w");
    if (!f){
        fprintf(stderr,"dosya oluşturalamadi\n");
        return 1;
    }

    for (int i=0; i< 128; ++i){

        if(iscntrl(i)){ // KONTROL KARAKTERİ Mİ SORGULAMASI YAPILIYOR.
            fprintf(f,"%3d %3x KONTROL KARAKTERI\n",i, i); 
        }

        else{
            fprintf(f,"%3d %3x %c\n", i,i,i);
        }

    }
    fclose(f);
}
*/


// ÖRNEK - 2 - Özel karakterleri basma(escape)
/*
int main()
{
    printf("alert(bell)      %d\n",  '\a'); // alert karakteri(veya bell karakteri) \a ile ifade ediliyor.
    printf("horizontal  tab  %d\n",  '\t');
    printf("vertical    tab  %d\n",  '\v');
    printf("newline          %d\n",  '\n');
    printf("carriage return  %d\n",  '\r');
    printf("from feed        %d\n",  '\f');
    printf("backspace        %d\n",  '\b');
    printf("null character   %d\n",  '\0');
    printf("single quote     %d\n",  '\'');
    printf("double quote     %d\n",  '\"');
    printf("double quote     %d\n",  '"' );
    printf("backslash        %d\n",  '\\');
    printf("question mark    %d\n",  '\?');
    printf("question mark    %d\n",  '?' );
}
*/

//  ÖRNEK - 3 - printf içinde % ile format belirleme
/*
int main()
{
    int x = 32314;
    // % ile başlayan değerler format belirler
    printf(" %d\n", x); //decimal       (onluk)     sayı sistemi
    printf(" %o\n", x); //octal         (sekizlik)  sayı sistemi
    printf(" %x\n", x); //hexadecimal   (onaltılık) sayı sistemi

}
*/


// ÖRNEK - 4 - TEK PRİNTFTE ÇARPMA
/*
int main()
{
    int x = 13;
    int y = 25;

    printf(" %d * %d = %d \n", x , y , x*y); 
    // burada printfe 4 adet argüman verildi, 1 string + 3 int
 
}
*/


// ÖRNEK - 5 
/*
int main() {

    int x,y;

    printf("iki deger girin:");
    scanf("%d%d", &x, &y);

    printf("%d * %d + %d * %d = %d\n", x, x, y, y, x*x+y*y );
    printf("decimal %d \noctal %o \n hexadecimal %x \n",x,x,x);
}
*/
// ÖRNEK - 6 - 0'DAN 100E SAYILARIN KAREKÖKÜNÜ ALMA
/*
int main(){

    for(int i=0; i<100; ++i){
        printf("%d %.3f\n",i,sqrt(i));
    }
 
}
*/

// ÖRNEK - 7 - SAYILARIN KUVVETİNİ HESAPLAMA
/*
int main()
{
    double dx,dy;

    printf(" iki gercek sayi girin:  ");
    scanf("%lf%lf", &dx,&dy);

    printf("%f =============> %f = %f\n",dx,dy,pow(dx,dy));
}
*/


// ÖRNEK - 8 - PRINTF İÇİNDE YAZILAN DEĞERİN KARAKTER SAYISI DEĞİŞKENE ATANABİLİR.
/*
int main()
{
    int x = 8937;
    int retval;

    retval = printf("furkan"); 

    printf("\n retval = %d\n",retval);
     // output 6

    int y= 987123;

    printf("%d",printf("%d",printf("%d",y)));
    // output 98712361
}
*/


// ÖRNEK - 9 - DÖNGÜ İLE ASC2 KARAKTERLERİNİ BASMA (%c)
/*
int main()
{
    //printf("%c",65); // A

    //for ( int i=0 ; i < 26 ;++i)
        //printf("%d %c\n", i,'0'+i);

    //for ( int i='0' ; i <= '9' ;++i)//asc2deki sayı karakterlerinin kullandık
        //printf("%d %c \n", i, i);

    //asc2 karakterlerinin kod numarlarını ve görüntülerini basma
    
    for (int i= 33 ; i < 127 ; ++i) //asc2 33 ten başlayıp 127'de bitiyor
        printf(" %d %c\n",i,i);
    

}
*/


//                        SCANF        
//                ----------------------

int main()
{
    int x;
    printf("bir sayi girin: ");
    scanf("%x",&x); //8 lik sayı sisteminde input alıyoruz

    printf("x= %d\n",x);//onluk cinsinden bastık
    //aa->170
    //bb->187
} 











//gcc deneme.c -o main
//  ./main