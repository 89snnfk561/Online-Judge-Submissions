#include <stdio.h>
#include <string.h>

int main(){
	char s[10000];
	gets(s);
	int len = strlen(s);
	int count = 0;
	char * word;
	char *tk = ":;., \n!?";
	
	
	word = strtok(s, tk);
	while(word != NULL){
		count++;
		word = strtok(NULL, tk);
	}
	printf("%d", count);
	return 0;
}
