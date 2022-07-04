#include<stdio.h>
#include<math.h>

#define SIZE  14
int main(){

  int arr[14]={2,4,8,16,32,128};
  
  int fark;

  if(arr[2]-arr[1]==arr[1]-arr[0]){
    fark=arr[2]-arr[1];
    for (int i = 0; i < SIZE-1; i++){
      if(arr[0]+(i*fark) != arr[i]){
          int eksik=arr[0]+(i*fark);
          printf("eksik sayi %d",eksik);
          break;
      }
    }
  }

  else if(arr[2]/arr[1]==arr[1]/arr[0]){
    fark=arr[1]/arr[0];
    printf("%d\n",fark);
    for (int i = 0; i < SIZE-1; i++){
      if(i)
        if(pow(arr[0],(i*fark)) != arr[i]){
            int eksik=pow(arr[0],(i*fark));
            printf("eksik sayi %d",eksik);
            break;
      }
    }
  }
}