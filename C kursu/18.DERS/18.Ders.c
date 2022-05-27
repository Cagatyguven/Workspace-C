#include<stdio.h>

//                      PREPROCESSOR(Ön İşlemci Programı)

//          ÖRNEK    -     1   -     DEFINE ile atama yapma

#define MAX 100+200
int main()
{
    int a = 5 * MAX;

    printf("a= %d",a);
    // 700 çıktısı verir çünkü define bir işlem yapmaz sadece direkt atama yapar.
    // bu yüzden 5 * 100 + 200 şeklinde bir işlem oluşur
}