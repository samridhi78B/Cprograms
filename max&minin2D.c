#include <stdio.h>
#include <limits.h>
int main(){
    int r,c;
    scanf("%d %d", &r, &c); // 2 2
    int arr[r][c];
    for(int i = 0; i<r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &arr[i][j]); // 1 2
        }                            // 3 4
    }
    int max = INT_MIN; 
    int min = INT_MAX;
     for(int i = 0; i<r; i++){
        for(int j = 0; j < c; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }
     for(int i = 0; i<r; i++){
        for(int j = 0; j < c; j++){
            if(arr[i][j] < min){
                min = arr[i][j];
            }
        }
    }
    printf("Max elements is:%d\n", max); // 4
    printf("Min element is:%d", min); // 1
   
   return 0;
}
