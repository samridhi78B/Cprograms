#include <stdio.h>
int main() {
  int arr[5] = {1,2,3,4,5};
  int max = arr[0];
  int smax = arr[0];
  //maximum
  for(int i = 0; i < 5; i++){
      if(max < arr[i]){
          max = arr[i];
      }
  }
  //Second largest
  for(int i = 0; i < 5; i++){
      if(arr[i] != max &&  smax<arr[i]){
          smax = arr[i];
      }
  }
  printf("Second Largest: %d", smax);
    return 0;
}
