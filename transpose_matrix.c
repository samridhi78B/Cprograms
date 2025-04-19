#include <stdio.h>
int main(){
    int r,c;
    scanf("%d %d", &r, &c); // 3 2 
    int arr[r][c];
    for(int i = 0; i<r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &arr[i][j]);  // 1 2 
        }                             // 4 5                         
    }                                 // 7 8
    printf("\n"); 
    
    for(int i = 0; i<c; i++){
        for(int j = 0; j < r; j++){
            printf("%d\t", arr[j][i]); // 1 4 7
        }                              // 2 5 8
        printf("\n");
    }
    
    return 0;
}
