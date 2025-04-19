#include <stdio.h>
int main() {
    int r;
    scanf("%d", &r); 
    
    int arr[r][r];
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < r; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i = 0; i < r; i++) {
        for(int j = i + 1; j < r; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < r; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
