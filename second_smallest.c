#include <stdio.h>
#include <limits.h>
int main() {
  int arr[5] = {1,2,3,4,5};
  int min = arr[0];
  int smin = __INT_MAX__;
  //minimum
  for(int i = 0; i < 5; i++){
      if(min > arr[i]){
          min = arr[i];
      }
  }
  printf("Smallest: %d\n", min);
  
  //Second smallest
  for(int i = 0; i < 5; i++){
      if(arr[i] != min &&  smin>arr[i]){
          smin= arr[i];
      }
  }
  printf("Second smallest: %d", smin);
    return 0;
}
