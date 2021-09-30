#include <iostream>
using namespace std;
//max = a * n + b
int main(){
	int a, b, n, s;
	int cn;
	cin >> cn;
	int temp;
	for(int i = 0; i < cn; i++){
		cin >> a >> b >> n >> s;
		temp = s / n;
		if(temp > a){
			temp = a;
		}
//			cout << temp << " " << s - n * temp << endl;
		if((s - n * temp) > b){
			cout << "NO" << endl;
		}else{
			cout << "YES" << endl;
		}
	}
	return 0;
}
