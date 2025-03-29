#include <stdio.h>
int main() {
    int sum = 0, sum1 = 0,diff;
    int arr[5] = {1,2,3,4,5};
    // Sum of even in array
    for(int i = 0; i <5 ; i++ ) {
        if(i % 2 == 0) {
            sum += arr[i];
        }
    }
    printf("Sum at even indices: %d\n", sum);
    // Sum of odd in array
      for(int i = 0; i <5 ; i++) {
        if(i % 2 != 0) {
            sum1 += arr[i];
        }
    }
      printf("Sum at odd indices: %d\n", sum1);
    
    diff = sum - sum1;
    printf("Difference of even to odd is :%d", diff);
    return 0;
}

