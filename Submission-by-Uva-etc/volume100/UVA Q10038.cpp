#include <iostream>
#include <cmath>
using namespace std;
int main (){
	int n;
	cin >> n;
	int a[n+10], sub[n+10];
	int not_jolly = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(i > 0){
			sub[i] = abs(a[i] - a[i-1]);
			if(sub[i] >= n){
				not_jolly = 1;
				break;
			}
		}
	}
	if(not_jolly == 1){
		cout << "Not jolly" << endl;
	}else{
		cout << "Jolly" << endl;
	}
	return 0;
}
