#include <stdio.h>
int main(){
    int r;
    scanf("%d", &r); // 3
    //input
    int arr[r][r];
    for(int i = 0; i<r; i++){
        for(int j = 0; j < r; j++){
            scanf("%d", &arr[i][j]);  
            }                                                    
    }                                 
    printf("\n"); 
    //transpose
    for(int i = 0; i<r; i++){
        for(int j = 0; j < r; j++){
            printf("%d\t", arr[j][i]); 
        }                              
        printf("\n");
    }
    //reverse each row 
    for(int i = 0 ; i < r; i++){
        int j = 0;
        int k = r -1;
        while(j<k){
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
            j++;
            k--;
        }
    }
    //output
     for(int i = 0; i<r; i++){
        for(int j = 0; j < r; j++){
            printf("%d", arr[i][j]); 
        } 
        printf("\n");                        
    } 
    
    return 0;
}
