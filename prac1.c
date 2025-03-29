#include <stdio.h>
int main() {
    int countPairs = 0, n = 6;
    int arr[5] = {1,2,3,4,5};
    for(int i = 0; i < 5; i++){
        for(int j = i+1; j < 5; j++){
            if(arr[i] + arr[j] == n){
                countPairs++;
            }
        }
    }
    printf("%d", countPairs);
    return 0;
}

