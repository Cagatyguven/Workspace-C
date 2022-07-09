#include<stdio.h>
#include<stdlib.h>
#include "nutility.h"
#include<ctype.h>


//                                    POINTERS

//          ÖRNEK  -   1  -  pointer değişkenlerin bellekte kapladığı yer
/*
int main(){


    printf("sizeof(char) = %zu\n ",   sizeof(char));  //1 byte
    printf("sizeof(char*) = %zu\n ",  sizeof(char*)); //4 byte


    printf("sizeof(short) = %zu\n ",   sizeof(short));  //2 byte
    printf("sizeof(short*) = %zu\n ",  sizeof(short*)); //4 byte


    printf("sizeof(int) = %zu\n ",   sizeof(int));  //4 byte
    printf("sizeof(int*) = %zu\n ",  sizeof(int*)); //4 byte


    printf("sizeof(double) = %zu\n ",   sizeof(double));  //8 byte
    printf("sizeof(double*) = %zu\n ",  sizeof(double*)); //4 byte
}
*/



//          ÖRNEK  -   2  -  bir değişkene pointer ile ilk değer atama
/*
int main(){

  int x = 10;
  int y = 20;

  int *ptr= &x;//bundan sonra ptrnin değeri x'in adresidir.
  // x'in değeri 10 fakat adresi 4000. Burada ptr int*'değerine 4000 atanıyor.


  ptr=&y;//ptrnin değeri y'nin adresi
  // ptr, points to y.

  printf("%d    %d        %d",&x,&y, ptr);//6422296    6422292        6422292

  
}
*/



//          ÖRNEK  -   3   - ptr ve x adresleri farklılığı
/*
int main(){

    int x = 10;
    int* ptr = &x;

    printf("&x = %p\n", &x);     //0061FF1C
    printf("ptr = %p\n", ptr);   //0061FF1C
    printf("&ptr = %p\n", &ptr); //0061FF18
 
}
*/



//          ÖRNEK  -   4    - arraydecay
/*
int main(){
   
   int a[5]= {0};
   int *p= a;

   printf("&a[0] = %p\n", &a[0]);  //0061FF08(hexadecimal)
   printf("a     = %p\n", a);      //0061FF08
   printf("p     = %p\n", p);      //0061FF08

    
}
*/



//          ÖRNEK  -   5    - *a ile arrayin ilk elemanını değiştirme
/*
int main(){

  int a[]={ 10 , 20 , 30 };
  *a = 22;
  printf("a[0] = %d\n",a[0]); //22
  printf("a = %d",a);//6422292

}
*/



//          ÖRNEK  -   6    - *ptr ile başka değişkenin nesnesini değiştirme
/*
int main(){
  
  int x = 33;
  int* p= &x;

  *p = 77; // x'i 77 yaptık
  // içerik operatörü operandı olan adresteki nesneye erişim sağlar.
  //  p'nin değeri x'in adresi. *p dediğimizde ise o adresteki nesneyi değiştiriyoruz.
  // *p demek x demektir.

  printf("%d",x);

}
*/



//          ÖRNEK  -   7    - pointee - *ptr ile birden fazla değişkenin değerini değiştirme
/*
int main(){

  int a = 5;
  int b = 6;
  int c = 9;


  int *ptr;

  ptr = &a;

  *ptr *= 2;

  ptr = &b;


  *ptr *= 2;


  ptr = &c;


  *ptr *= 2;


  printf("a = %d\n",a);//a = 10
  printf("b = %d\n",b);//b = 12
  printf("c = %d\n",c);//c = 18

  

}
*/



//          ÖRNEK  -   8    - pointee - birden fazla *ptr ile a değerini arttırma
/*
int main(){

    //int a = 5, * p1 = &a , * p2 = p1, *p3 = p2;
    //açılımı
    int a = 5;
    int* p1 = &a;
    int* p2 = p1;
    int* p3 = p2;

    ++* p1;
    ++* p2;
    ++* p3;

 
    printf("a = %d",a);

}
*/



//          ÖRNEK  -   9    - pointerlar ile swap fonkisyon yazımı
/*
void swap(int *a, int* b){

     int temp = *a;
     *a = *b;
     *b = temp;
}


int main(){


  int x , y;

  printf("iki tam sayi girin: ");
  scanf("%d%d",&x, &y);


  printf("x = %d  y = %d\n",x,y);  //x = 25  y = 50

  swap(&x,&y);

  printf("x = %d  y = %d\n",x,y);  //x = 50  y = 25


}
*/



//          ÖRNEK  -   10   - pointerlar ile swap fonksiyonu yardımıyla array elemanını değiştirme
/*
void swap(int *a, int* b){

     int temp = *a;
     *a = *b;//arraylerin ilk elemanları değiştiriliyor.
     *b = temp;
}


int main(){


  int a[] = { 1, 2, 3};
  int b[] = { -3, -7, -9};

  //swap(a,b);//ilk elemanları takas etmek için

  swap(&a[2],&b[2]);//istediğin elemanı takas etmek için

  printf("a[2] = %d",a[2]);//-9
} 
*/



//          ÖRNEK  -   11   - pointerlar ile iki fonksiyonlu kod yazma

void foo(int *a, int* b){

  *a *= *b;//126,9

}

void func(int* p, int* q){

  *p += *q;//5+9=14
  foo(p,q);//14,9
}


int main(){

  int x = 5, y = 9;


  func(&x,&y);

  printf("x = %d\n",x);//126
  printf("y = %d\n",y);//9

} 
