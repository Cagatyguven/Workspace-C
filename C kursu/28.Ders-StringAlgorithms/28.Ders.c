#include<stdlib.h>
#include<stdio.h>
#include "nutility.h"
#include<ctype.h>

//                                                  STRINGLER İLE İLGİLİ ALGORİTMALAR


//            ÖRNEK       -         1         -       iki yazının eşitliğini sınamak
/*
#define SIZE  500
int main()
{

  char s1[SIZE];
  char s2[SIZE];

  printf("iki kelime girin: ");
  scanf("%s%s", s1, s2);

  int i = 0;
  int flag=0;
  while(s1[i] == s2[i]){
    if(s1[i] == '\0'){
       flag=1;
       break; 
    }
    ++i;
  } 
  if (flag){
    printf("yazilar esit");
  }
  else
    printf("yazilar esit degil");  
  


}
*/




//            ÖRNEK       -         2          -      0dan 9a tüm sayıları tek sefer  basma
/*
#define URAND_MAX 10 

int urand(void){
  
  static int cnt = 0;//kaç sayı tutulduğunu hesaplamak için. Her seferinde başa sarmaması için statik ömürlü olmak zorunda
  static int flags[URAND_MAX] = { 0 };
  int val; 

  if (cnt == URAND_MAX ){
    return -1;
  }
  while(flags[val= rand() % URAND_MAX])//flags dizinin val elemanının değeri 0 olmadığı sürece dönen bir while döngüsü
    continue;
  
  //for (;;){
  //  val = rand() % URAND_MAX;//val değeri üretiliyor. 10'a kalan işlemi yapılarak 0-9 aralığında sayı üretiliyor. 
  //  if(flags[val]==0)
  //    break;
  //}


  ++cnt;
  flags[val]=1;//1 deme nedenimiz o sayı üretildi sınıfına sokmak
  return val;


}
//urand her çağırıldığında 0 dahil 9 dahil rastgele sayı üretilmeli
//her sayi uniq olmalı. Örneğin ilk 5 üretirse bir daha 5 üretmemeli
//11.kez çağırıldığında hata kodu olarak -1 döndürmeli
int main(){

  randomize();

  for (int i = 0; i < URAND_MAX; ++i){
      printf("%d ", urand());
  }

  printf("\n"); 
  printf("hata degeri = %d\n", urand());

}
*/



//            ÖRNEK       -         3         -       REVERSE COPY ALGORTIHM
/*
#define   SIZE    100

int main(){
  
    char source[SIZE]="BUGUN C DERSINDE POINTERLAR BASLICAK";
    char dest[SIZE];
    int i;
    int k=0;


    for (i = 0; source[i] != 0; ++i)
      ;

    while (i){
      dest[k++] = source[--i]; 
    }
    dest[k]=0;

    printf("[%s]\n", dest);
    printf("[%s]\n", source);
}
*/



//            ÖRNEK       -         4(ödev)   -        BİR DİZİ İÇİNDEN BİR SAYIYI BULMA      
//NORMALDE BUNU 3*SIZE KADAR İŞLEM İLE YAPTIK. ÖDEV BUNU 2*SIZE İŞLEMİNE İNDİRMEK
/*
#define   SIZE    100

int main(){
  
  int a[SIZE];
  int sval;
  int i;

  set_array_random(a, SIZE);
  print_array(a, SIZE);

  printf("aranacak degeri girin: ");
  scanf("%d", &sval);

  for(i=0; i < SIZE; ++i){
    if(a[i] == sval)
      break;
  }

  if(i=SIZE){
    printf("bulunamadi");
  }
  else
    printf("bulundu....dizinin %d indisli elemani",i );



}
*/





//                                     YAZILARDAN SAYILARA, SAYILARDAN YAZILARA YAPILAN DÖNÜŞÜMLER.



//            ÖRNEK       -         5          -  girilen sayılar asciiye göre basımı
/*
#define SIZE  100

int main(){
  char str[SIZE];
  int ival=0;

  printf("bir yazi girin: ");
  sgets(str);

  for(int i=0; str[i] != 0; ++i){
    ival = ival * 10 + str[i] - '0';
  }

  printf("ival = %d\n", ival);

}
*/


//        ÖRNEK     -               6           - SAYIYI YAZIYO DÖNÜŞTÜRMEK
/*
#define SIZE   100

int main(){
  int x;
  char str[SIZE];


  printf("bir tam sayi girin: ");
  scanf("%d", &x);

  int i = 0;
  int temp=x;

  while (temp != 0){//ters çevirdik
    str[i++]= temp % 10 + '0';
    temp /= 10;
  }
  str[i]=0;


  for ( int k = 0 ; k < i/2 ; ++k){//ters çevirdik
    char temp = str[k];
    str[k]= str[i-k-1];
    str[i-k-1]=temp;
  }
  printf("[%s]\n",str);

}
*/





//                                                  