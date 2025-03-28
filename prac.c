#include <stdio.h>
int main(){
    int a = 2 , count = 0;
  int arr[5] = {1,2,3,4,5};
  for(int i = 0; i < 5; i++){
      if(arr[i] > a){
          count += 1;
      }
  }
  printf("%d ", count);
  
   return 0;
}

