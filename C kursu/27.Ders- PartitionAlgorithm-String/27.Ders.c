#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"nutility.h"
#include<ctype.h>

//                             algoritma 


//          ÖRNEK           -        ÖDEV     - bir dizinin medyanı ve modunu bulma 






//                              YAZILAR(stringler)


//          ÖRNEK           -       1         -     STRING SONRASI 0 DEĞERİ ATAMA
/*
//char str[100]; BURADA OLSA STATİK ÖMRLÜ OLUR VE UNDEFINED BEHAVIOR OLMAZ 
int main()
{
    char str[100];//STATİK ÖMÜRLÜ OLMADIĞI İÇİN ŞU AN UNDEFINED BEHAVIOR OLUR
    //AMA BUNU FONKSİYON DIŞINDA TANIMLASAK STATİK ÖMÜRLÜ OLSAYDI DOĞRU OLURDU
    //STATİK ÖMÜRLÜ OLURSA TÜM DEĞERLERİ 0 OLUR VE BİZ FONKSİYON İÇİNDE SADECE 3 KARAKTERİNİ DEĞİŞTİRMİŞ SAYILIRIZ.
    //fonksiyon içinde '\0' değeri atanarak sorun çözülür

    str[0]='C';
    str[1]='A';
    str[2]='N';
    str[3]='\0';//can kelimesi burada bitiyor dedik kısaca


    for (int i = 0; str[i] != '\0'; ++i){
      putchar(str[i]);
    }
    
}
*/



//          ÖRNEK           -       2         -       STRING  '\0' değeri ile '0' değeri atama farkı
/*
int main()
{
  char str[100];



    str[0]='0';// '\0' ile aynı anlama gelmez
    str[1]='0';
    str[2]='7';
    str[3]='B';
    str[4]='O';
    str[5]='N';
    str[6]='D';
    str[7]='\0';

    for (int i = 0; str[i] != 0; ++i){// '0' karakter ile null karakteri başka
      putchar(str[i]);
    }
}
*/



//          ÖRNEK           -       3         - STRİNG İLK DEĞER ATAMA 1. YÖNTEM
/*
int main()
{
  char str[100]= {'f','u','r','k','a','n'};




  for (int i = 0; str[i] != 0; ++i){// '0' karakter ile null karakteri başka
      putchar(str[i]);
  }

}
*/



//          ÖRNEK           -       4         - STRİNG İLK DEĞER ATAMA 2. YÖNTEM
/*
int main()
{
  char str[]= "FURKAN"; 



  for (int i = 0; str[i] != 0; ++i){// '0' karakter ile null karakteri başka
      putchar(str[i]);
  }

}
*/



//          ÖRNEK           -       5          -    INPUT İLE STRING ALMA
/*
#define   SIZE    100

int main()
{
  char str[SIZE];

  printf("bir yazi giriniz: ");
  scanf("%s", str);  //%s charlar içindir.
                    // str ile &str[0] yazmak aynı anlama gelir. &str başka anlamda
  //İNPUTTA boşluk kullanılursa boşluk sonrasını almaz.Scanf yüzünden

 
  for (int i = 0; str[i] != 0; ++i){// '0' karakter ile null karakteri başka
      putchar(str[i]);
  } 
}
*/



//          ÖRNEK           -       6         -  bir de fazla str değer basma(inputsuz)
/*
int main()
{
  char s1[100] = "necati";
  char s2[100] = "ergin";

  int no = 34524;


  printf("no: %d isim: %s soyisim: %s\n",no,s1,s2); 
}
*/



//          ÖRNEK           -       7        -  bir de fazla str değer basma(inputlu)
/*

int main()
{
  char s1[100];
  char s2[100];
  int no;

  printf("isim soyisim ve numara giriniz: ");
  scanf("%s%s%d",s1,s2,&no); 


  printf("%s %s isimli kisinin nosu %d\n",s1,s2,no); 
}
*/



//          ÖRNEK           -       8        -  PUTS fonksiyonu kullanma
/*
int main()
{
  char s1[100] = "necati";
  char s2[100] = "ergin";

  puts(s1);//sadece 1 inp
}
*/



//          ÖRNEK           -       9        - sgets ile boşluklu input almak
/*
#define   SIZE  100

int main()
{
  char str[SIZE];

  printf("bir yazi girin: ");
  sgets(str);

  printf("yazi : [%s]\n", str);


}
*/










//                                            STRINGLER İLE ALAKALI TEMEL ALGORİTMALAR


//          ÖRNEK           -       10                        -       girilen cümlenin uzunluğunu bulma
/*
#define SIZE  100

int main()
{
  char str[SIZE];

  printf("bir yazi girin: ");
  sgets(str);

  int len = 0;

  for(int i = 0; str[i] != '\0' ; ++i){
    ++len;
  }

  printf("cumlenin uzunlugu : %d\n",len);

}
*/



//          ÖRNEK           -       11                        -  iki str değerini birleştirme(scanf ile)
/*
#define SIZE  100

int main()
{
    char str1[SIZE];
    char str2[SIZE];
    char str3[SIZE];
 
    printf("iki kelime girin: ");
    scanf("%s%s", str1, str2);


    int i,k;

    for (i= 0 ; str1[i] != '\0' ; ++i ){
      str3[i] = str1[i];
    }
    for (k= 0 ; str2[k] != '\0' ; ++k ){
      str3[i+k] = str2[k];
    }
    str3[i+k] = '\0';
    
    printf("[%s] [%s] = [%s]\n",str1,str2,str3);

}
*/



//          ÖRNEK           -       12(mülakat sorusu)        -    (count algorithm)  bir cümle içinde bir karakterin adenin sayma 
/*
#define SIZE  100

int main()
{
  char s[SIZE];
  int c;

  printf("bir yazi girin: ");
  sgets(s);

  printf("sayilacak karakteri girin: ");
  c = getchar();

  int cnt = 0;
  int cnt2 = 0;

  for (int i= 0 ; s[i] != '\0' ; ++i ){//büyük harf küçük harf farkediyor
      if(s[i] == c)
          ++cnt;
  }
  for (int i= 0 ; s[i] != '\0' ; ++i ){//büyük harf küçük harf farketmiyor
      if(toupper(s[i]) == toupper(c))
          ++cnt2;
  }

  printf(" %d kadar var\n",cnt);
  printf(" %d kadar var\n",cnt2);

}
*/



//          ÖRNEK           -       13                        -     bir cümle içinde tüm karakterlerden kaçtane var sayma ve basma (küçük-büyük karakter farketmiyor)
/*
#define SIZE  100
//    ASCII
int main()
{
  char s[SIZE];
  int cnt[26] = { 0 };//bu dizinin elemanlarını bir sayaç gibi kullanıcaz. 26 deme nedenimiz ascii'de 26 tane karakter var.
  printf("bir yazi girin: ");
  sgets(s);
  
  for (int i = 0 ; s[i] != '\0' ; ++i){
    if(isalpha(s[i])){
        ++cnt[toupper(s[i]) - 'A'];
    }
  }
  for (int i = 0; i < 26; ++i){
    if (cnt[i] != 0){
      printf("%c %d\n",'A' + i , cnt[i]);
    }
  }

}
*/




//          ÖRNEK           -       14                        - 

#define SIZE 500

int main()
{
  char s[SIZE];


  printf("aralarinda tek bir bosluk bulunan karakteri olan iki isim giriniz: ");
  sgets(s);

  printf("[%s]\n", s)
}