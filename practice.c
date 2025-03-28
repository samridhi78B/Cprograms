#change odd index & multiply it with 3 AND change even index & add 5 to it.
#include <stdio.h>
int main(){
  int arr[5] = {1,2,3,4,5};
  for(int i = 0; i < 5; i++){
      if(arr[i] % 2 != 0){
          arr[i] *= 3;
      }
          else {
             arr[i] += 5;
          }

  printf("%d ", arr[i]);
 
  }
  
   return 0;
}

