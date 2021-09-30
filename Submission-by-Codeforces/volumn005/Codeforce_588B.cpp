#include <iostream>
typedef long long ll;
using namespace std;

int main(){
	ll n;
	cin >> n;
	ll count = 2, output = 1;
	// 12 = 2*2*3 --> 2*3 = 6
	while(count * count <= n && n != 1){
		if(n % count == 0){
			output *= count;
			
			while(n % count == 0){
				n /= count;
			}
			
		}
		count++;
	}
	
	cout << n * output << endl;
} 
