#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"nutility.h"

#define SIZE  100

//                                        STRING.H KÜTÜPHANESİ



//                ÖRNEK     -       1      - strrchr fonksiyon yazımı
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




//               ÖDEV       -       1      -  strstr fonksiyon kodu yazılması




//              ÖRNEK       -       2       - strstr fonksiyonu test kodu
/*
int main(){

  char str[SIZE];
  char searched[SIZE];

  printf("icinde arama yapilacak yaziyi girin: ");
  sgets(str);

  printf("aranacak yaziyi girin giriniz: ");
  sgets(searched);

  char *p = strstr(str,searched);

  if(p){
    printf("bulundu, dizinin %d indisli elemanindan basliyor\n ",p-str);
    puts(p);
  }
  else
    printf("bulunamadi");


} 
*/




//              ÖRNEK       -       3       - strstr ile bir dizi içinde aranan kelimeler yerine yıldız basmak
/*
int main(){


  char str[SIZE];
  char searched[SIZE];

  printf("icinde arama yapilacak yaziyi girin: ");
  sgets(str);

  printf("aranacak yaziyi girin giriniz: ");
  sgets(searched);

  char *p = strstr(str,searched);

  if(p){
    size_t len = strlen(searched);
    
    for (int i = 0; i < len; ++i){
      *(p+i)='*';
    }
    puts(p);
  }
  else
    printf("bulunamadi");

}
*/




//              ÖRNEK       -       4       - strpbrk için test kodu 
/*
int main(){


  char str[SIZE];
  char s[]= "aeou";

  printf("icinde arama yapilacak yaziyi giriniz: ");
  sgets(str);

  char* ptr = strpbrk(str,s);
  if(ptr){

    printf("%d indisli elemani",ptr-str);
  }
  else
    printf("bulunamadi     ");

}
*/




//              ÖRNEK       -       5       - strprbk fonksiyonunu yazma
/*
char* my_strpbrk(const char* psource,const char* pmain){

  while(*psource != '\0'){
    if(strchr(pmain,*psource) != NULL){
      return (char*)psource;
    }
    ++psource;
  }
  return NULL;
}


int main(){


  char str[SIZE];
  char s[]= "0123456789";

  printf("icinde arama yapilacak yaziyi giriniz: ");
  sgets(str);

  char* ptr = my_strpbrk(str,s);
  if(ptr){

    printf("%d indisli elemani",ptr-str);
  }
  else
    printf("bulunamadi     ");

}
*/




//              ÖRNEK       -       6       -  strcpy için test kodu
/*
int main(){

  char source[SIZE];  
  char dest[SIZE];

  printf("bir yazi girin: ");
  sgets(source);

  strcpy(dest,source);

  printf(" source = (%s) \n   dest = (%s) ",source,dest);
}
*/




//              ÖRNEK       -       7       - strcpy fonksiyonunu yazma
/*
char* my_strcpy(char * pdest, const char * psource){

  char* ptemp= pdest;

  //while(*psource){
  //  *pdest++=*psource++; 
  //} 
  
  // *pdest='\0';

  // bunun yerine
  
    
    // bu şekilde de yazılabilir
  

  return ptemp;
}

int main(){

  char source[SIZE];  
  char dest[SIZE];

  printf("bir yazi girin: ");
  sgets(source);

  my_strcpy(dest,source);

  printf(" source = (%s) \n   dest = (%s) ",source,dest);
}
*/




//              ÖRNEK       -       8       -  restrict anahtar sözcüğü olmadığında ortaya çıkan durum
// diyelim ki arrayimi 2 öteleyerek kopyalamak istiyorum
// bu durumda str'yi yazdırdığımızda sonucun cacagat olmasını beklerim
/*
int main(){

  char str[SIZE]="cagatay";  
  
  strcpy(str+2,str);

  printf("%s\n",str);//cacagagay
  // istediğimiz olmadı çünkü strcpy(str+2,str) bir tanımsız davranıştır.

}
*/




//              ÖRNEK       -       9       - strcat için test kodu
/*
int main(){


  char s1[SIZE], s2[SIZE];

  printf("iki isim girin: ");//cagatay guven
  scanf("%s%s", s1, s2);

  strcat(s1,s2);//s1 sonuna s2 ekliyoruz

  printf("(%s)",s1); //(cagatayguven)
}
*/




//              ÖRNEK       -       10       - strcat fonksiyonunu yazma
/*
char* my_strcat(char* pdest, const char* psource){

  char* ptemp=pdest;

  while (*pdest){
    ++pdest;
  }

  while (*psource){
    *pdest++=*psource++;
  }  
  *pdest='\0';

  return ptemp;
}

int main(){

  char s1[SIZE],s2[SIZE];

  printf("kopyalanacak degeri girin: ");
  sgets(s2);

  printf("sonuna yazi eklenecek yaziyi girin: ");
  sgets(s1);


  my_strcat(s1,s2);

  printf("s1= (%s) ",s1);
}
*/




//              ÖRNEK       -       11       - strcat fonksiyonunu yazma 2.versiyon
/*
char* my_strcat(char* pdest, const char* psource){

  strcpy( pdest + strlen(pdest) ,psource); //null karakterin bulunduğu adresten itibaren psource değerlerini kopyalayıp ekledik
  //strcpy( strchr(pdest, '\0'),psource) şeklinde de olabilirdi.
  return pdest;
}

int main(){

  char s1[SIZE],s2[SIZE];

  printf("kopyalanacak degeri girin: ");
  sgets(s2);

  printf("sonuna yazi eklenecek yaziyi girin: ");
  sgets(s1);


  my_strcat(s1,s2);

  printf("s1= (%s) ",s1);
}
*/



 
//              ÖRNEK       -       12       - 2 diziyi tek dizide birleştirmek(strcpy,strcat ile)
/*
int main(){

  char s1[SIZE],s2[SIZE],s3[SIZE];

  printf("iki isim girin: ");
  scanf("%s%s",s1,s2);


  //s1 ve s2deki yazılar s3te birleştirilecek

  strcpy((strcpy(s3,s1)+strlen(s1)),s2);
  
  //strcat(strcpy(s3,s1),s2) şeklinde de yazılabilirdi.

  printf("(%s) + (%s) =  %s ",s1,s2,s3);
}
*/



//                                           YAZILARIN KARŞILAŞTIRILMASI ( strcmp fonksiyonu )



//              ÖRNEK       -       13       -