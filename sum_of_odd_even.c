#include <stdio.h>
int main() {
    int sum = 0, sum1 = 0;
    int arr[5] = {1,2,3,4,5};
    // Sum of even in array
    for(int i = 0; i <5 ; i++ ) {
        if(i % 2 == 0) {
            sum += arr[i];
        }
    }
    printf("%d\n", sum);
    // Sum of odd in array
      for(int i = 0; i <5 ; i++) {
        if(i % 2 != 0) {
            sum1 += arr[i];
        }
    }
      printf("%d", sum1);
    
    return 0;
}

