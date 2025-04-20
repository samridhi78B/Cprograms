#include <stdio.h>
int main()
{
	int m,n; 
	scanf("%d %d", &m, &n); // 3 3 
	int arr[m][n];
	for(int i= 0; i <m; i++) {
		for(int j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);   // 1 2 3 
		}                            // 4 5 6
	}                              // 7 8 9
	
	for(int i= 0; i <m; i++) {
		if(i % 2 == 0) {
			for(int j = 0; j < n; j++) {
              printf("%d", arr[i][j]);     // 1 2 3 
			}                                    //
			                                     // 7 8 9
		}
			else{
				for(int j = n-1; j >=0; j--) {
					printf("%d", arr[i][j]);
				}                           // 1 2 3
				                            // 6 5 4
		}                               // 7 8 9
		printf("\n");
	}
	return 0;
}
