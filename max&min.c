#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
     scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    for(int i = 0; i < n; i++){
        if(max < arr[i]){
        max = arr[i];
        }
    }
     for(int i = 0; i < n; i++){
        if(min > arr[i]){
        min = arr[i];
        }
    }
    printf("Max:%d\n", max);
    printf("Min:%d\n", min);
   return 0;
}
