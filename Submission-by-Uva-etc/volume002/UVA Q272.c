#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
	char str[10000];
	gets(str);
	
	int len = strlen(str);
	int i, j = 0;
	for(i = 0; i < len; i++){
		if(str[i] == '"'){
			j++;
			if(j % 2 == 1){
				printf("``");
			}else{
				printf("''");
			}
		}else{
			printf("%c", str[i]);
		}
		
	}
	return 0;
} 
