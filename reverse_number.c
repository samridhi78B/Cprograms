#include <stdio.h>
int rev(int n){
    int reverse = 0;
    while( n != 0){
        int rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }
    return reverse;
}

int main(){
   int num;
   scanf("%d", &num);
   int result = rev(num);
   printf("%d", result);
   return 0;
}
