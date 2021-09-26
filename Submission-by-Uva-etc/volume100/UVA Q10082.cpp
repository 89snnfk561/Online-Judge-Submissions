#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char A[50] = "1234567890-=WERTYUIOP[]SDFGHJKL;'XCVBNM,./ ";
	char B[50] = "`1234567890-QWERTYUIOP[ASDFGHJKL;ZXCVBNM,. ";
	char input[10000];
	int count = 0;
	cin.getline(input, 10000);
	int n = strlen(input);
	int ch = strlen(A);
	cout << n << "  " << ch << endl;
	bool same = false;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < ch; j++){
			if(input[i] == A[j]){
				cout << B[j];
				break;
			}
		}
		if(input[i] == '\\'){
			cout << ']';
		}else if(input[i] == '\0'){
			cout << '\0';
		}
	}
	cout << endl;
	return 0;
}
