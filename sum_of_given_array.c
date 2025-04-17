#include <stdio.h>
int main()
{
    int r,c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    int sum = 0;

    //Input array 1
    for(int i = 0 ; i<r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &arr[i][j]);
        }
    }

   for(int i = 0 ; i<r; i++){
        for(int j = 0; j < c; j++){\
        sum+= arr[i][j];
        }
    }
    printf("Sum of a given matrix is: %d", sum);
 
    return 0;
}
