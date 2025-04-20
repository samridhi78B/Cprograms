#include <stdio.h>
int main()
{
	int m,n; 
	scanf("%d %d", &m, &n); // 3 3 
	int arr[m][n];
	for(int i= 0; i <m; i++) {
		for(int j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]); // 1 2 3 
		}                            // 4 5 6
	}                                // 7 8 9
	
	int count = 0;
			for(int j = 0; j < n; j++) {
			    if(j % 2  == 0){
			        for(int i= m-1; i >= 0; i--) {
                  printf("%d ", arr[i][j]); 
                  count++;
                  if(count % n == 0) printf("\n");
			}  
			    }
			                                
			else{
				for(int i = 0; i <m; i++) {
					printf("%d ", arr[i][j]);
					count++;
					 if(count % n == 0) printf("\n");
				}                           // 7 4 1
			}	                            // 2 5 8
		}                                  // 9 6 3
		printf("\n");
	
	return 0;
}
