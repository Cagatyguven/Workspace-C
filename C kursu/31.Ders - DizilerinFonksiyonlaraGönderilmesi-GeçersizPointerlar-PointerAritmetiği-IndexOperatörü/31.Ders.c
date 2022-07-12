#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include "nutility.h"
#include<ctype.h>

//                        INDEX OPERATÖRÜ ( [] )


//          ÖRNEK   -   1   -  değişkeni, array gibi göstererek değer atama 
/*
int main(){

  int x = 10;
  
  
  (&x)[0] = 23; // x = 23 demektir bu
  // (&x)[0] yerine *(&x + 0) = 23 demektir.

  printf("x = %d\n", x); 
  //   x = 23

}
*/




//            ÖRNEK   -   2   -   örnek 1 farklı versiyon
/*
int main(){

  int x = 10;
  int* ptr = &x;

  ptr[0] = 87;

  printf("x= %d\n",x);  87

  *ptr = 88;

  printf("x = %d\n",x);   
   
  // *ptr ile ptr[0] aynı anlama gelmektedir. ikisiyle de x nesnesi değiştiriliyor. 

}
*/




//            ÖRNEK   -   3   - array'de pointer ile farklı eleman bastırma
/*
int main(){

  int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int* ptr = a+5;

  printf("%d\n", *ptr); // 5 (0. eleman + 5 basamak = 6.eleman değeri)
  printf("%d\n", ptr[0]); // 5 ( *ptr ile ptr[0] aynı şeydi )
  printf("%d\n", ptr[3]); // 8 (ptrnin bellekteki gösterdği adresin 3 adres ilerisi)
  printf("%d\n", ptr[-3]); // 2 (ptrnin bellekte gösterdiği adresin 3 adres gerisi)
  printf("%d\n", *(ptr-3)); // 2 ( ptr[-3] ile aynı anlama geliyor)
  printf("%d\n", (-3)[ptr]); // 2 ( ptr[-3] ile aynı anlama geliyor)
  printf("%d\n", ptr[-10]); // undefined behavior

  // NOT: eğer ptr dizinin 1. elemanın adresini gösterse ptr[-3] undefined behavior olurdu.
} 
*/




//                         POINTER ARİTMETİĞİ



//            ÖRNEK   -   4   -  pointer dizi farkı ile indisi bulma
/*
int main(){

  int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
  int *ptr = &a[7];


  printf("indis = %d\n",ptr-a); // 7 
  printf("ptr = %d\n",ptr); //6422288(aradaki fark 28 byte)
  printf("a = %d\n",a); //6422260
 
}
*/






//                    DİZİLERİN FONKSİYONLARA GÖNDERİLMESİ



 

//              ÖRNEK   -   5   -   call by reference ile dizi bastırma fonksiyonu yazma(1.yol)
/*
void printArray(const int* p, int size){

  for (int i = 0; i < size; ++i){
    printf(" %d ",p[i]); 
  }
  printf("\n");
  

}

int main(){

  int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
 
  printArray(a,10);

}
*/




//              ÖRNEK   -   6   -   call by reference ile dizi bastırma fonksiyonu yazma(2.yol)
/*
//bu yol daha çok tercih ediliyor
void printArray(const int* p, int size){

    while(size--){
      printf(" %d ", *p);
      ++p;
    }
    printf("\n");

}

int main(){

  int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
 
  printArray(a,10);

}
*/




//              ÖRNEK   -   7   -  print_array fonksiyonu ile sınırlı sayıda  ve belirli indis sonrası eleman basma
/*
#define SIZE  20
int main(){


  int a[SIZE] = { 0,1,2,3,4,5,6,7,8,9
  ,10,11,12,13,14,15,16,17,18,19};

  //İLK 5 ELEMAN
  print_array(a,5); // 0   1   2   3   4 

  // 6. ELEMANDAN BAŞLAYARAK 4 ELEMANINI
 
  print_array(&a[5],4); //  5   6   7   8 
  print_array(a+5,4); //  5   6   7   8 


  //SIZE MAKROSUNU KULLANARAK DİZİNİN SON 5 ELEMANINI BASTIRMA
  
  print_array(a+(SIZE-5),5);  //15  16  17  18  19 


}
*/



//              ÖRNEK   -   8   -   kullanıcıdan input alarak belirli indxten itibaren belirli sayıda değer basmak
/*
#define SIZE  20
int main(){


  int a[SIZE] = { 0,1,2,3,4,5,6,7,8,9
  ,10 ,11,12,13,14,15,16,17,18,19};


  int idx, n;

  printf("hangi indeksten başlayarak kac tane eleman: ");
  scanf("%d%d", &idx,&n);

   
  print_array(a+idx,n); //index dediğimiz için a+idex, eleman deseydik a+idx-1 yapardık



}
*/




//              ÖRNEK   -   9   -  DİZİNİN ELEMANLARININ TOPLAMINI HESAPLAYAN FONKSİYON
/*
#define SIZE  20

int sum_array(const int *p, int size){

    int sum = 0;
    for (int i = 0; i < SIZE; ++i){
      sum += p[i];
    }
    
    return sum;
}

int main(){

  int a[SIZE];

  randomize();
  set_array_random(a,SIZE);
  print_array(a,SIZE);

  printf("toplam = %d",sum_array(&a[0],SIZE));

}
*/




//              ÖRNEK   -   10    -   örnek 9 2.yöntem
/*
#define SIZE  20

int sum_array(const int *p, int size){
    
    int sum = 0;

    while(size--){
      sum += *p;
      ++p;
    }
    
    return sum;
}

int main(){

  int a[SIZE];

  randomize();
  set_array_random(a,SIZE);
  print_array(a,SIZE);

  printf("toplam = %d",sum_array(&a[0],SIZE));

}
*/




//              ÖRNEK   -   11    -   bir dizinin aritmetik ortalamasını hesaplayan c fonksiyonu
/*
#define SIZE  20

int sum_array(const int *p, int size){
    
    int sum = 0;

    while(size--){
      sum += *p;
      ++p;
    }
    
    return sum;
}

double array_average(const int* p,int size){

    return (double)sum_array(p,size)/size;

}

int main(){

  int a[SIZE];

  randomize();
  set_array_random(a,SIZE);
  print_array(a,SIZE);

  printf("ortalama = %f",array_average(&a[0],SIZE));

}
*/




//              ÖRNEK   -   12    -   bir dizinin standart sapması
/*
#define SIZE  20

int sum_array(const int *p, int size){
    
    int sum = 0;

    while(size--){
      sum += *p;
      ++p;
    }
    
    return sum;
}

double array_average(const int* p,int size){

    return (double)sum_array(p,size)/size;

}

double get_std_dev(const int* p, int size){
  double mean=array_average(p,size); 
  double sum_square=0;

  for (int i = 0; i < size; ++i){
    sum_square += (p[i] - mean)*(p[i] - mean);
  }
  
  return sqrt(sum_square/(size-1));
}

int main(){

  int a[SIZE];

  randomize();
  set_array_random(a,SIZE);
  print_array(a,SIZE);

  printf("standart sapma = %f",get_std_dev(&a[0],SIZE));

}
*/




//              ÖRNEK   -   13    -   bir dizinin en büyük değerini hesaplayan fonksiyon
/*
#define SIZE 20

int biggest_value(const int* p,int size){
      
    int b=0;
    for (int i = 0; i < size; ++i){
      if(p[i]>b)
          b=p[i];
    }
    return b;
}


int main(){

  int a[SIZE];

  randomize();
  set_array_random(a,SIZE);
  print_array(a,SIZE);

  printf("en buyuk deger = %d",biggest_value(&a[0],SIZE));

}
*/




//              ÖRNEK   -   14     -  bir dizinin en büyük ve en küçük değerini hesaplama
/*
#define SIZE 20
//en kücük ve en buyuk değeri tutacak bir pointer ayarladık
void get_min_max(const int* p,int size, int *pmin, int *pmax){
    

    *pmin=*pmax=*p;
  

    for(int i=1;i<size;++i){
      if (p[i]>*pmax){
        *pmax=p[i];
      }
      else if (p[i]<*pmin){
        *pmin=p[i];
      }
      
    }
    printf("en buyuk = %d, en kucuk = %d",*pmax,*pmin);

}
 
int main(){

  int a[SIZE];
  int min,max;

  randomize();
  set_array_random(a,SIZE);
  print_array(a,SIZE);

  get_min_max( a, SIZE, &min, &max);
  
}
*/




//              ÖRNEK   -   15     -  bir diziden bir diziye n tane öge kopyalayan copy_array isimli fonkisyonu tanımlayın
/*
#define SIZE 20

void copy_array(int* pdest,const int *psource, int n){

  for(int i = 0; i<SIZE;++i){
      pdest[i]=psource[i];
  }

}

int main(){
  int a[SIZE];
  int b[SIZE];

  randomize();
  set_array_random(a,SIZE);
  print_array(a,SIZE);

  copy_array(b,a,SIZE); //dizinin tamamını kopyalayacaksak SIZE ile


  print_array(b,SIZE);
}
*/




//              ÖRNEK   -   16     - bir dizideki belli elemanları boş bir dizinin belirli bir konumuna kopyalama
/*
#define SIZE 50

void copy_array(const int* psource,int* pdest, int n){


    for (int i = 0; i < n; ++i){
      pdest[i]=psource[i];
    }
     
}

int main(){
  int a[SIZE];
  int b[SIZE]={0};
  int idx_a,idx_b,n;

   
  randomize();
  set_array_random(a,SIZE);
  print_array(a,SIZE);

  printf("a'nin hangi indisli elemanindan baslayarak? ");
  scanf("%d", &idx_a);
  printf("b'nin hangi indisli elemanindan baslayarak? ");
  scanf("%d", &idx_b);
  printf("kac eleman kopyalanacak?: ");
  scanf("%d", &n);

  copy_array(a+idx_a,b+idx_b,n);
  //copy_array(&a[idx_a],&b[idx_b],n); aynı anlama geliyor.

  print_array(b,SIZE);
}
*/




//              ÖRNEK   -   17(benim yaptığım)      - diziyi ters çevirme fonksiyonu. Reverse array
/*
#define SIZE 50

void reverse_array(const int* psource,int* pdest, int size){


    for (int i = 0; i < size; ++i){
      pdest[size-i-1]=psource[i];
    }
     
     
}

int main(){
  int a[SIZE];
  int b[SIZE];

   
  randomize();
  set_array_random(a,SIZE);
  print_array(a,SIZE);


  reverse_array(a,b,SIZE);  


  print_array(b,SIZE);
}
*/




//              ÖRNEK   -   17(necati hocanın çözümü)      - diziyi ters çevirme fonksiyonu. Reverse array
/*
#define SIZE 50

void reverse_array(int* p, int size){


    for (int i = 0; i < size/2; ++i){
      int temp = p[i];
      p[i]=p[size-i-1];
      p[size-i-1]=temp;
    }
     
     
}

int main(){
  int a[SIZE];
  randomize();
  set_array_random(a,SIZE);
  print_array(a,SIZE);


  reverse_array(a,SIZE);  


  print_array(a,SIZE);
}
*/




//              ÖRNEK   -   18    -   bubble sort fonksiyonu
/*
#define   SIZE    10

void bubble_sort(int* p,int size){
  
  for ( int i = 0; i < size - 1 ; ++i ){
    for ( int k = 0 ; k < size - 1 - i ; ++k ){
        if(p[k]>p[k+1]){
          int temp = p[k];
          p[k]=p[k+1];
          p[k+1]=temp;
        }
    }
  }   
}

int main(){

  int a[SIZE];
  randomize();
  set_array_random(a,SIZE);

  print_array(a,SIZE);

  bubble_sort(a,SIZE);

  print_array(a,SIZE);
}
*/





//                                POINTERLAR VE KARŞILAŞTIRMA İŞLEMLERİ


//              ÖRNEK   -   19    -  iki pointer dizi'nin sonunu gösterdiğinde eşit olması durumu
/*
int main(){

  int a[5] = { 0, 1, 2, 3, 4 };
  int* pend = a + 5;
  int* p = a;

  while (p != pend){
    printf(" %d ", *p);
    ++p;
  }
  
}
*/ 





//              ÖRNEK   -   20    -   İki pointerın da null değeri alması durumunda eşitliği

int main(){

  int x = 10;
  int* p1= &x;
  int* p2= NULL;

  printf("%d\n", p1==p2); //0

  int* p3= NULL;

  printf("%d\n", p2==p3); //1
}