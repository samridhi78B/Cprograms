#include <stdio.h>
int main(){
    int n, i=1, sum=0;
    scanf("%d", &n);
    while(i <= n){
        sum += i;
        i += 2;
    }
    printf("%d", sum);
    return 0;
}
