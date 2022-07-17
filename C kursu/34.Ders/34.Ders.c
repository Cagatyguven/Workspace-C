#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<time.h>
#include "nutility.h"

#define SIZE 100

//                                          NULL POINTER


//            ÖRNEK       -         1           -  fonksiyon işlemde başarısız olursa NULL  döndürmesi örnek
/*
int main(){

    FILE* f = fopen("yok.txt","r");

    if(!f){//f==NULL ile aynı anlamda

      printf("boyle bir dosya bulunamadi");
      return 1;
    }

}
*/




//            ÖRNEK       -         2           - Arama fonksiyonlarında NULL pointer kullanımı(linear search yapan fonksiyon tasarımı)
/*
#define SIZE  100

int*  search(const int* ptr, size_t size,int value){

  for (size_t i = 0; i < size; ++i){
    if (ptr[i]==value){
      return (int *)&ptr[i];
    }
  }
  return NULL;
}

int main(){

  int a[SIZE];
  int ival;
  int* p;

  randomize();
  set_array_random(a,SIZE);
  print_array(a,SIZE);

  printf("aranacak sayiyi girin: ");
  scanf("%d",&ival);

  
  p=search(a,SIZE,ival);

  if (!p){
    printf("deger bulunamadi");
    return 1;
  }
  else 
    printf("deger bulundu, %d indisli elemani",p-a);

}
*/




//            ÖRNEK       -         3           - Reverse arama fonksiyonu(yani aramayı tersten yapacak)  
/*
#define SIZE  1000

int*  search(const int* ptr, size_t size,int value){

  for (size_t i = size; 0 < i; --i){
    if (ptr[i]==value){
      return (int *)&ptr[i];
    }
  }
  return NULL;
}

int main(){

  int a[SIZE];
  int ival;
  int* p;

  randomize();
  set_array_random(a,SIZE);
  print_array(a,SIZE);

  printf("aranacak sayiyi girin: ");
  scanf("%d",&ival);

  
  p=search(a,SIZE,ival);

  if (!p){
    printf("deger bulunamadi");
    return 1;
  }
  else 
    printf("deger bulundu, %d indisli elemani",p-a);

}
*/


 

//                                  YAZILAR ÜSTÜNDE İŞLEM YAPAN FONKSİYONLAR



//            ÖRNEK       -         4           -   
/*
#define SIZE 100
void myputs(const char *p){

    for (int i = 0; p[i] != '\0' ; ++i){
      putchar(p[i]);
    }
    putchar('\n');
}
int main(){

  char str[SIZE]="ÇAĞATAY GÜVEN";

  puts(str);
  myputs(str); 

}
*/




//            ÖRNEK       -         5           -   pointer ile puts kullanımı
/*
int main(){

  char str[SIZE]="CAGATAY GUVEN";

  puts(str);   //  CAGATAY GUVEN

  puts(str+6); // Y GUVEN
}
*/



   
//            ÖRNEK       -         6            - nutility.h dosyasıdaki sgets fonksiyonu yazımı
/*
void sgets(char *p){

  int ch;

  while((ch=getchar()) != '\n'){
    *p++ = ch; 
  }
  *p = '\0';
}
 
int main(){

  char str[SIZE];

  printf("bir yazi giriniz: ");
  sgets(str);

  printf("girdiginiz yazi: (%s)\n", str); 
}
*/





//                                        C Standart string.h Kütüphanesi

#include<string.h>

//            ÖRNEK       -         7            - strlen fonksiyonu basit kod - 1
/*
int main(){

  char str[100];

  printf("bir yazi girin: ");
  sgets(str);

  size_t len=strlen(str);
  printf("%d",len);
}
*/




//            ÖRNEK       -         8            - strlen fonksiyonu basit kod - 2 - stringi tersten yazdıma
/*
int main(){

  char str[100];

  printf("bir yazi girin: ");
  sgets(str);

  for(int i = (int)strlen(str)-1; i >=0; --i){
      putchar(str[i]);
  }
   putchar('\n');
}
*/




//            ÖRNEK       -         9           - strlen normal biçimde fonksiyonu yazma
/*
size_t mystrlen(const char* p){

  size_t len=0;



  while( *p++ != '\0')
    ++len;

  //while(*p != '\0'){
  //  ++len;
  //  ++p;
  // }

  return len;
}


int main(){

  char str[100];
  
  printf("bir yazi girin: ");
  sgets(str);


  size_t len = mystrlen(str);
  printf("uzunluk = %zu\n", len);

}
*/




//            ÖRNEK       -         10           - strlen normal biçimde fonksiyonu yazma - 2 
/*
size_t mystrlen(const char* p){
  const char *ps=p;//ilk durumdaki konumunu bir başka pointer'a atıyoruz
  while( *p );
    ++p;//dizi sonundaki null'ı gösterir son durumda

  return p-ps;// son durumundan ilk durumunu çıkarıyoruz ve elde edilen sayı tam sayı ve len değeri oluyor.
}


int main(){

  char str[100];
  
  printf("bir yazi girin: ");
  sgets(str);


  size_t len = mystrlen(str);
  printf("uzunluk = %zu\n", len);

}
*/




//            ÖRNEK       -         11           - strchr fonksiyon kullanımı
/*
int main(){
  
  char s[SIZE];

  printf("bir yazi giriniz: ");
  sgets(s);
  // bu yazıda a karakterini arayalım

  char* ptr= strchr(s,'a');


  if ( ptr != NULL){

    printf("bulundu.... yazinin %d indisli elemani\n",ptr-s);
  }

}
*/

 

//            ÖRNEK       -         12           - bir karakterden bir yazıda kaç tane olduğunu sayma (standart c fonksiyonu değil)

size_t count_char(const char* ptr,int c){

  int cnt=0;

  while(*ptr){
    if(*ptr==c)
      ++cnt;
    ++ptr;
  }
  return cnt;
  
}

int main(){
  
  char s[SIZE];
  int find;
  printf("bir yazi giriniz: ");
  sgets(s);
  printf("aranacak karakteri giriniz: ");
  find=getchar();

  printf("%d kadar var",count_char(s,find));

} 
  

