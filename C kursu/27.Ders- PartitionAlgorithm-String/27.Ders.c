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




//          ÖRNEK -     14(ödev)                        -   iki kelimeden oluşan cümlede kelimelerin yerini değiştirme(ilave bir dizi olmadan)
/*
#define SIZE 500

int main()
{
  char s[SIZE];


  printf("aralarinda tek bir bosluk bulunan karakteri olan iki isim giriniz: ");
  sgets(s);

  printf("[%s]\n", s);//ahmet mehmet

  // code

  printf("[%s]\n", s);//mehmet ahmet
}
*/



//          ÖRNEK -       15                  -  (REMOVE COPY ALGORITHM)belli bir dizi içinden bir karakteri silmek
/*
#define SIZE 500

int main()
{
  char source[SIZE];
  char dest[SIZE];

  printf("bir yazi girin ");
  sgets(source);//ankara adana antalya
  int c;


  printf("bir karakter girin ");
  c=getchar(); //a karakteri

  //dest dizisine source dizisindeki yazı kopyalanacak ancak c karakteri kopyalanmayacak
  //iki index tutularak yapılabilir,bir index source dizisini dolaşmak için diğer index dest dizisine yazmak için

  int write_idx=0;
  
  for(int i = 0 ; source[i] != 0 ; ++i ){
      if(source[i] != c){
        dest[write_idx] = source[i];
        ++write_idx;
      }
  }

  dest[write_idx] = 0;

  printf("[%s] [%s]\n",source,dest);// [ankara adana antalya]        [nkr dn ntly]
}
*/



//          ÖRNEK -         16                  - (REMOVE  ALGORITHM)belli bir karakter silme 
/*
#define   SIZE  500

int main()
{
  char str[SIZE];
  int c;


  printf("bir yazi girin ");
  sgets(str);

  printf("silinecek karakteri girin: ");
  c=getchar();
  
  printf("[%s]",str);
  
  int write_idx=0;
  for (int i = 0; str[i] != 0 ; ++i){
    if( str[i]!=c)){
        str[write_idx++] = str[i];//str dizinin 0.değerinden itibaren değiştirme yapıyoruz
    }
  }
  
  str[write_idx]= '\0';

  printf("[%s]\n",str);
 
}
*/



//          ÖRNEK -         17                 - (REMOVE  ALGORITHM)sayı silme
/*
#define   SIZE  500

int main()
{
  char str[SIZE];
  int c;


  printf("bir yazi girin ");
  sgets(str);


  
  printf("[%s]",str);
  
  int write_idx=0;
  for (int i = 0; str[i] != 0 ; ++i){
    if( !isdigit(str[i])){//sayı değil ise str'nin dizisinin değerini değiştirme yapıyoruz.
        str[write_idx++] = str[i];//str dizinin 0.değerinden itibaren değiştirme yapıyoruz
    }
  }
  
  str[write_idx]= '\0';

  printf("[%s]\n",str);
 
}
*/



//          ÖRNEK -         18                 - (REVERSE ALGORITHM) diziyi ters çevirme(sonuncu eleman 1., 1. eleman sonuncu eleman olacak)
//dizinin elaman sayısının yarısı kadar işlem yapılması gerekiyor
/*
#define   SIZE  50

int main()
{
  int a[SIZE];

  randomize();
  set_array_random(a,SIZE);
  print_array(a,SIZE);

  for(int i=0; i<(SIZE/2);++i){//arrayin eleman sayısının yarısı kadar işlem yeterli bu yüzden for döngüsünün işlem sayısı da böyle ayarlandı
      int temp = a[i];
      a[i] = a[SIZE - 1 - i];
      a[SIZE - 1 - i]=temp;
  }
  printf("\n-------------------------------------------------------\n");
  print_array(a,SIZE);
}
*/




//          ÖRNEK -       19                - bir kelimenin karakterlerini ters sıralama

#define SIZE  50
int main()
{
  char str[SIZE];

  printf("bir yazi girin:  ");
  sgets(str);

  printf("[%s]\n", str);

  int len;

  for(len = 0; str[len] != 0; ++len)
      ;

  for(int i = 0; i<len/2 ; ++i ){
      char temp= str[i];
      str[i]=str[len - 1 - i];
      str[len - 1 - i]=temp;
  }
  printf("[%s]\n",str);
}