#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main (){
	int c, n;
	int g[1010];
	cin >> c;
	int total, avg, count;
	double percent;
	for(int i = 0; i < c; i++){
		cin >> n;
		total = 0, avg = 0, count = 0;
		for(int j = 0; j < n; j++){
			cin >> g[j];
			total += g[j];
		}
		avg = total / n;
		for(int j = 0; j < n; j++){
			if(g[j] > avg){
				count++;
			}
		}
		percent = (double)count*100/n;
		cout << fixed << setprecision(3) << percent << "%" << endl;
	}
	return 0;
} 
