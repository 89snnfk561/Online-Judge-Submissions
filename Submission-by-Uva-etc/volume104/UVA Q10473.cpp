#include <iostream>
#include <cstring>
using namespace std;

int main (){
	char n[30];
	cin.getline(n, 30);
	int hex, ans_10, count = 0;
	char ans_16[30];
	while(n[0] == '-'){
		int len = strlen(n);
		if(n[0] == '0' && n[1] == 'x'){
			ans_10 = 0;
			for(int i = len-1; i > 1; i--){
				switch(n[i]){
					case 'A':
					case 'a':
					{
						hex = 10;
						break;
					}
					case 'B':
					case 'b':
					{
						hex = 11;
						break;
					}
					case 'C':
					case 'c':
					{
						hex = 12;
						break;
					}
					case 'D':
					case 'd':
					{
						hex = 13;
						break;
					}
					case 'E':
					case 'e':
					{
						hex = 14;
						break;
					}
					case 'F':
					case 'f':
					{
						hex = 15;
						break;
					}
					default:{
						hex = n[i] - '0';
						break;
					}
				}
				base_16 += pow(hex, len-1 - i);
			}
			cout << base_16 << endl;
		}else{
			hex = atoi()
			
		}
		cin.getline(n, 30);
	}
	
	return 0;
}
