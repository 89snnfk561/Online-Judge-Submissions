#include <iostream>
using namespace std;
void swap(int &x, int &y){
	int temp;
	temp = y;
	y = x;
	x = temp; 
}
int cycle(int n){
	int count = 1;
	while(n != 1){
		if(n % 2 == 1){
			n = 3*n + 1;
		}else{
			n /= 2;
		}
		count++;
	}
	return count;
}
int problem(int i, int j){
	if(i > j){
		swap(i, j);
	}
	int max = 0;
	for(int k = i; k <= j; k++){
		if(cycle(k) > max){
			max = cycle(k);
		}
	}
	return max;
}
int main(){
	int i, j;
	while(cin >> i >> j){
		cout << i << " " << j << " " << problem(i, j) << endl;
	}
	return 0;
}
