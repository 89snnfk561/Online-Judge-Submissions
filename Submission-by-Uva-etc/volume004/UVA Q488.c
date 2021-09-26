#include <stdio.h>
#include <stdlib.h>

int main (){
	int n, i, j, k, l;
	scanf("%d", &n);
	
	int A[n+10], F[n+10];
	for(i = 0; i < n; i++){
		getchar();
		scanf("%d%d", &A[i], &F[i]);
	}
	puts("\n");
	for(i = 0; i < n; i++){
		for(j = 0; j < F[i]; j++){
			for(k = 1; k <= A[i]; k++){
				for(l = 0; l < k; l++){
					printf("%d", k);
				}
				printf("\n");  // 這裡如果用 puts("\n") 可能會導致多換一行 
			}
			for(k = A[i] - 1; k > 0; k--){
				for(l = 0; l < k; l++){
					printf("%d", k);
				}
				printf("\n");  // 這裡如果用 puts("\n") 可能會導致多換一行 
			}
			puts("\n");
		}
	}
	return 0;
} 
