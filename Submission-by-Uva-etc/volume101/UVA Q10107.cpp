#include <iostream>
using namespace std;
int main (){
	int num[10010];
	for(int i = 1; i <= 10000; i++){
		cout << "¿é¤J=> ";
		cin >> num[i];
		if(i % 2 == 1){
			cout << num[i/2+1] << endl;
		}else{
			cout << (num[i/2] + num[i/2+1]) / 2 << endl;
		}
	}
}
