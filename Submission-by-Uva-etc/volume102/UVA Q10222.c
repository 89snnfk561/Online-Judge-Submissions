#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char s1[] = "qwertyuiop[]\\";
char s2[] = "asdfghjkl;\'";
char s3[] = "zxcvbnm,./";

char findchar(char ch, char *s){
	char *ptr;
	ptr = s;
	if (ch >= 65 && ch <= 90){
		ch += 32;
	}
	while(*ptr != '\0'){
		if(*ptr == ch){
			return *(ptr-2);
		}
		ptr++;
	}
	return NULL;
}

int main(){
	char str[100] = {};
	scanf("%[^\n]s", str);
	
	int i;
	for(i = 0; str[i] != '\0'; i++){
		
		if(str[i] == ' '){
			printf(" ");
		}
		
		char y;
		if(y = findchar(str[i], s1)) printf("%c", y);
		if(y = findchar(str[i], s2)) printf("%c", y);
		if(y = findchar(str[i], s3)) printf("%c", y);
	}
	printf("\n");
}
