#include <stdio.h>
int main(){
    int r,c,l1,r1,l2,r2, sum = 0;
    scanf("%d %d", &r, &c); 
    scanf("%d %d %d %d", &l1, &r1, &l2, &r2);
    int arr[r][c];
    for(int i = 0; i<r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &arr[i][j]);  
        }                            
    }                                
   
     for(int i = l1; i<=l2; i++){
        for(int j = r1; j <= r2; j++){
            sum += arr[i][j];
            
        }
    }
    printf("%d", sum);
   return 0;
}
