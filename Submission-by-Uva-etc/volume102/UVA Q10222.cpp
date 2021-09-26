#include <iostream>
#include <cstring>
using namespace std;
int main (){
	char A[] = "=-098765432\\][poiuytre';lkjhgfd/.,mnbvc ";
	char B[] = "0987654321`[poiuytrewqlkjhgfdsa,mnbvcxz ";
	int n = strlen(A);
	char c[100000];
	cin.getline(c, 100000);
	int len = strlen(c);
	for(int i = 0; i < len; i++){
		for(int j = 0; j < n; j++){
			if(A[j] == c[i]){
				cout << B[j];
			}
		}
	}
	cout << endl;
	return 0;
}
