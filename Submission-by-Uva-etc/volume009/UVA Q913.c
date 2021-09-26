#include <stdio.h>
int main(){
	int n, N = 0;
	scanf("%d", &n);
	for(; n > 0; n-=2){
		N += n;
	}
	int ans = (N*2)-1 + (N-1)*2-1 + (N-2)*2-1;
	printf("%d\n", ans);
	return 0;
}

