#include <string>
#include <iostream>
using namespace std;

int main (){
	string str;
	cin >> str;
	int count = 0, max = 1;
	for(int i = 0; i < strlen(str) - 1; i++){
		if(str[i] == str[i+1] || str[i+1] == str[i]+1){
			count++;
			if(count > max){
				max = count+1;
			}
		}
	}
	cout << max;
	return 0;
} 
