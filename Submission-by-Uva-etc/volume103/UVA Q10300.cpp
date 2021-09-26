#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;

int main (){
	int f, n;
	int area, animal, eco;
	int total;
	cin >> f;
	for(int i = 0; i < f; i++){
		cin >> n;
		total = 0;
		for(int j = 0; j < n; j++){
			cin >> area >> animal >> eco;
			total += eco * area;
		}
		cout << total << endl;
	}
	return 0; 
}
