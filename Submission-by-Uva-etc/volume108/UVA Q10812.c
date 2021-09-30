#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool combine(int sum, int dif){
	if(sum < dif) return false;
	if((sum - dif) % 2 == 1) return false;
	return true;
}

void printPossible(int sum, int dif, bool b){
	if(b){
		int x = (sum-dif)/2;
		printf("%d %d\n", sum-x, x);
	}else
		printf("impossible\n");
}

int main(){
	int t;
	scanf("%d", &t);
	
	while(t--){
		int sum, dif;
		scanf("%d %d", &sum, &dif);
		bool b;
		b = combine(sum, dif);
		printPossible(sum, dif, b);
	}
}
