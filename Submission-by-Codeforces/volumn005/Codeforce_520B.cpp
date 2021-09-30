#include <iostream>
using namespace std;

int main (){
	int n, m;
	int i = 0, j = 0;
	int temp = 1;
	cin >> n >> m;
	if(n >= m){
		cout << n - m << endl;
	}else{
		// 2(2((2n)+1)) = m  -->  n = (((m/2)-1)/2)/2
		if(m > n){
			while(m > n){
				if(m%2){
					m+=1;
					i++;
				}
				m /= 2;
				i++;
			}
		}
		i = i + n - m;
		cout << i << endl;
	}
}
