#include <stdio.h>
int main() {
    int palidrome = 1;
    int arr[5] = {1,2,3,2,5};
    for(int i = 0; i < 5/2; i++){
        if(arr[i] != arr[5-i-1]){
            palidrome = 0;
            break;
        }
    }
    if(palidrome) printf("palidrome");
    else printf(" Not palidrome");
    
    return 0;
}

