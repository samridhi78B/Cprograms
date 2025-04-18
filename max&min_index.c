#include <stdio.h>
#include <limits.h>
int main(){
    int r,c;
    scanf("%d %d", &r, &c); // 3 4
    int arr[r][c];
    for(int i = 0; i<r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &arr[i][j]); // 1   2  3   4 
        }                            // 5   6  7  8
    }                                // -6 -5 -2 -10
    int max = INT_MIN; 
    int min = INT_MAX;
    int maxRow = 0, maxCol = 0;
    int minRow = 0, minCol = 0;
     for(int i = 0; i<r; i++){
        for(int j = 0; j < c; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }
     for(int i = 0; i<r; i++){
        for(int j = 0; j < c; j++){
            if(arr[i][j] < min){
                min = arr[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }
    printf("Max elements is:%d at index: (%d, %d)\n", max, maxRow, maxCol ); // 8 , (1,3)
    printf("Min element is:%d at index: (%d, %d)", min, minRow, minCol); // -10, (2,3)
   
   return 0;
}
