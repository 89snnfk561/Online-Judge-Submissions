#include <iostream>
#include <algorithm>
using namespace std;

struct SAL{
	int t;
	int r;
	bool useful;
};

bool op(int a, int b){
	return a > b;
}
int main(){
	int n, m;
	cin >> n >> m;
	int a[n+10], b[n+10];
	SAL sal[m+10];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < m; i++){
		cin >> sal[i].t >> sal[i].r;
		sal[i].useful = 0;
	}
	int maxr = 0, maxt = 0, maxi = n-1;
	for(int i = m-1; i >= 0; i--){
		if(sal[i].r > maxr){
			sal[i].useful = 1;
			maxr = sal[i].r;
			maxt = sal[i].t;
			maxi = i;
//			cout << i << " is useful" << endl;
		}
	}
	for(int i = n-1; i >= maxr; i--){
		b[i] = a[i];
	}
	
	sort(a, a+maxr);
	
	int begin = 0, end = maxr, k = maxr;
	int tempt = maxt;
	
	for(int i = 0; i < m; i++){
		if(sal[i].useful == 1 && maxi != i){
			if(tempt == 1){
//				cout << sal[i].r + begin << " is where to begin , "<< end << "  is end" << endl;
				for(int j = end - 1; j >= sal[i].r + begin; j--){
					b[--k] = a[j];
//					cout << a[j] << " = a , " << k <<" = k"<< endl;
				}
				end = sal[i].r + begin;
			}else{
//				cout <<tempr - sal[i].r << " is where to stop , "<< begin << "  is begin" << endl;
				for(int j = begin; j < end - sal[i].r; j++){
					b[--k] = a[j];
//					cout << a[j] << " = a , " << k << " = k"<< endl;
				}
				begin = end - sal[i].r;
			}
//			cout << tempt << " is tempt" << endl;
			tempt = sal[i].t;
		}
	}
	if(tempt == 1){
		for(int j = end - 1; j >= begin; j--){
			b[--k] = a[j];
//			cout << a[j] <<" " << k <<endl;
		}
	}else{
		for(int j = begin; j < end; j++){
			b[--k] = a[j];
//			cout << a[j] <<" " << k <<endl;
		}
	}
	for(int i = 0; i < n; i++){
		cout << b[i];
		if(i != n-1){
			cout << " ";
		}
	}
	cout << endl;
	return 0;
}
