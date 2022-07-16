#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<time.h>
#include "nutility.h"



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