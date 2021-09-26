#include <stdio.h>

int main(){
	int n, i, total, avg;
	int ans = 0, count = 0;
	int h[110];
	scanf("%d", &n);
	while(n != 0){
		total = 0;
		ans = 0;
		for(i = 0; i < n; i++){
			scanf("%d", &h[i]);
			total += h[i];
		}
		avg = total/n;
		for(i = 0; i < n; i++){
			if(h[i] > avg){
				ans += h[i] - avg;
			}
		}
		count++;
		printf("Set #%d\n", count);
		printf("The minimum number of moves is %d.\n", ans);
		scanf("%d", &n);
	}
	return 0;
}
