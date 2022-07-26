#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"nutility.h"

#define SIZE  100

//                                        STRING.H KÜTÜPHANESİ



//                ÖRNEK     -       1       -       strrchr fonksiyon yazımı
/*
char* my_strrchr(const char* p,int c){

    const char* pfound= NULL;
    
    while(*p){
        if(*p==c)
          pfound=p;
        ++p;
    }

    return (char *)pfound;
}


int main(){

  char a[SIZE];  
  int chr;

  printf("yaziyi girin: ");
  sgets(a);

  printf("aranacak karakteri girin: ");
  chr=getchar();


  char* ptr=my_strrchr(&a[0],chr);


  if(ptr){
    printf("bulundu, %d indisli elemani",ptr-a);
  }
  else
    printf("bulunamadi");
}
*/




//                ÖRNEK     -       2       -  