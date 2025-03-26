#include <stdio.h>
int main()
{
  int i, j,n;
  char ch;
  scanf("%d", &n);
  for(i = 1; i <= n; i++){
      ch = 'A';
       for(ch = 'A'; ch < 'A' + i; ch++){
           if( i % 2 == 0){
        printf("%d ", ch-'A'+1);
           }
        else {
           printf("%c ", ch); 
        }
       }
      printf("\n"); 
  }

    return 0;
}
