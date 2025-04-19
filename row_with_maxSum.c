#include <stdio.h>
#include <limits.h>
int main(){
    int r,c;
    scanf("%d %d", &r, &c); 
    int arr[r][c];
    for(int i = 0; i<r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &arr[i][j]);  
        }                            
    }  
    int maxSum = INT_MIN;
    int rowSum;
    int maxRow = -1;
    for(int i = 0; i<r; i++){
     rowSum = 0;
        for(int j = 0; j < c; j++){
            rowSum += arr[i][j];
        }
    
          if(rowSum > maxSum){
              maxSum = rowSum;
              maxRow = i;
          } 
    } 

    printf("Max row is: %d\nMax sum is: %d", maxRow, maxSum);
   return 0;
}
