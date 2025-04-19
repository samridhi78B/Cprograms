#include <stdio.h>
int main(){
    int r;
    scanf("%d", &r); // 3 3
    int arr[r][r];
    for(int i = 0; i<r; i++){
        for(int j = 0; j < r; j++){
            scanf("%d", &arr[i][j]);  // 1 2 3
        }                             // 4 5 6                        
    }                                 // 7 8 9
    printf("\n"); 
    
    for(int i = 0; i<r; i++){
        for(int j = 0; j < r; j++){
            printf("%d\t", arr[j][i]); // 1 4 7
        }                              // 2 5 8
        printf("\n");                  // 3 6 9
    }
    
    return 0;
}
