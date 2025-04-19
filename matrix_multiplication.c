#include <stdio.h>
int main(){
     //input of 1st matrix
    int m,n;
    scanf("%d %d", &m, &n);
    int arr[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0 ; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    //input of 2nd matrix
    int p,q;
    scanf("%d %d", &p, &q);
    int brr[p][q];
    for(int i = 0; i < p; i++){
        for(int j = 0 ; j<q; j++){
            scanf("%d", &brr[i][j]);
        }
    }
    
    //result
    int result[m][q];
    int c = n;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < q;j++){
         result[i][j] = 0;
            for(int k = 0; k < c; k++){
                result[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }
    
    //print resulted matrix
    for(int i = 0; i < m; i++){
        for(int j = 0 ; j<q; j++){
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
