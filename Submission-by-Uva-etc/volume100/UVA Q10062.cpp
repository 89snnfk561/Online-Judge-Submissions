#include <iostream>
#include <algorithm>
using namespace std;

int main (){
	int A[200];
	int n[200];
	char c;
	int count = 0;
	int same = 0;
	for(int i = 0; i < 200; i++){
		A[i] = 0;
	}
	while(cin.peek() != '\n'){
		cin >> c;
		
		same = 0;
		for(int i = 0; i < count; i++){
			if((int)c == n[i]){
				A[n[i]] += 1;
				same = 1;
				break;
			}
		}
		if(count == 0 || same == 0){
			n[count] = (int)c;
			A[n[count]] += 1;
			count += 1;
		}
		
		cout << count << endl;
	}
	int temp;
	for(int i = 0; i < count; i++){
		for(int j = i+1; j < count; j++){
			if(A[n[i]] > A[n[j]]){
				temp = n[i];
				n[i] = n[j];
				n[j] = temp;
			}else if(A[n[i]] == A[n[j]]){
				if(n[j] > n[i]){
					temp = n[i];
					n[i] = n[j];
					n[j] = temp;
				}
			}
		}
	}
	for(int i = 0; i < count; i++){
		cout << n[i]<< " " << A[n[i]]<< endl;
	}
	cout << endl;
	return 0;
}
