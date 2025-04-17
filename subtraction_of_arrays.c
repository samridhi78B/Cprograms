#include <stdio.h>
int main()
{
    int r,c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    int brr[r][c];
    int res[r][c];
    //Input array 1
    for(int i = 0 ; i<r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &arr[i][j]);
        }
    }
        //Input array 2
    for(int i = 0 ; i<r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &brr[i][j]);
        }
    }
    
// Subtracting array 1 & array 2
     for(int i = 0 ; i<r; i++){
        for(int j = 0; j < c; j++){
            res[i][j] = arr[i][j]- brr[i][j];
        }
        printf("\n");
    }
    //Print Result
      for(int i = 0 ; i<r; i++){
        for(int j = 0; j < c; j++){
           printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}
