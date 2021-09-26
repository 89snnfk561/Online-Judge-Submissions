#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int t;
	cin >> t;
	int x, n, a, b;
	int pos, ans;
	for(int i = 0; i < t; i++){
		cin >> x >> n >> a >> b;
		pos = min(abs(a-1 + x-b), abs(x-a + b-1));
		pos = min(pos, n);
		ans = min(abs(a-b)+pos, x-1);
		cout << ans << endl;
	}
}
