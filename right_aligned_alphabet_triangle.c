#include <stdio.h>
int main(){
    int i,j,n;
    char ch;
    scanf("%d",&n);
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n-i; j++){
            printf(" ");
        }
        for(ch= 'A'; ch < 'A' + i; ch++){
            printf("%c", ch);
        }
        printf("\n");
    }
}
