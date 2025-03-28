#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int product = 1;
    for(int i = 0; i < n; i++){
     scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++){
        product *= arr[i];
    }
    printf("%d ", product);
   return 0;
}

