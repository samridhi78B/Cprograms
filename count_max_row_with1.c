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
    int maxRow = -1, maxCount = 0;
   for(int i = 0; i<r; i++){
       int count = 0;
        for(int j = 0; j < c; j++){
            if(arr[i][j] == 1)  {
                count++;
            }
        }
        if(count > maxCount){
            maxCount = count;
            maxRow = i;
        }
    }  
   
    printf("Max row is: %d\nMax count of 1 in that row is: %d", maxRow, maxCount);
   return 0;
}
