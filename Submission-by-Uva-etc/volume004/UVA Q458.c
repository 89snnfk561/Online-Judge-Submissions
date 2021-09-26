#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char str[1000000];
	gets(str);
	int len = strlen(str);
	int i;
	for(i = 0; i < len; i++){
		printf("%c", str[i]-7);
	}
	return 0;
}
