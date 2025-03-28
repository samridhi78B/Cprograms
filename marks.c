#if marks less than 40 print index
#include <stdio.h>
int main(){
   int arr[10];
   for(int i = 0; i < 10; i++){
    scanf("%d", &arr[i]);
   }
   for(int i = 0; i < 10; i++){
       if(arr[i] <= 40)
    printf("%d ", i);
   }
   return 0;
}
