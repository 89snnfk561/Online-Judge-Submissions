//timelimit

#include <iostream>
#include <vector>
#include <algorithm>
typedef long long l;
using namespace std;
struct Number{
	l num;
	int count;
};
// t = 1
bool non_descending(Number lhs, Number rhs){
	return lhs.num < rhs.num;
}
// t = 2
bool non_ascending(Number lhs, Number rhs){
	return lhs.num > rhs.num;
}
void swap(l &a, l &b){
	b ^= a;
	a ^= b;
	b ^= a;
}
void PushVector(vector<Number> &vec,l array[], int n){
	Number tempNumber;
	tempNumber.num = array[0];
	int count = 1;
	for(int i = 1; i < n; i++){
		if(tempNumber.num == array[i]){
			count++;
		}else{
			tempNumber.count = count;
			vec.push_back(tempNumber);
			tempNumber.num = array[i];
			count = 1;
		}
	}
	tempNumber.count = count;
	vec.push_back(tempNumber);
}
void VectorToArray(vector<Number> vec, l *array){
	int k = 0;
	for(int i = 0; i < vec.size(); i++){
		for(int j = 0; j < vec[i].count; j++){
			array[k] = vec[i].num;
			k++;
		}
	}
}
int main(){
	
	int n, m;
	vector<Number> vec;
	cin >> n >> m;
	int t[m], r[m];
	int maxr = 0, maxt = 0;
	l array[n];
	
	for(int i = 0; i < n; i++){
		cin >> array[i];
	}
	int tempi, tempt;
	for(int i = 0; i < m; i++){
		cin >> t[i] >> r[i];
		if(r[i] >= maxr){
			maxr = r[i];
			maxt = t[i];
			tempi = i;
			tempt = t[i];
		}
	}
	int total = 0;
	int it;
	Number temp;
	PushVector(vec, array, n);
	for(int i = 0; i < vec.size(); i++){
		total += vec[i].count;
		if(total == maxr){
			it = i;
			break;
		}else if(total > maxr){
			it = i;
			temp.num = vec[i].num;
			temp.count = (vec[i].count - (total - maxr));
			vec[i].count = total - maxr;
			vec.insert(vec.begin()+it, temp);
			break;
		}
	}
	if(maxt == 1){
		sort(vec.begin(), vec.begin()+it+1, non_descending);
	}else{
		sort(vec.begin(), vec.begin()+it+1, non_ascending);
	}
	VectorToArray(vec, array);
//	for(int i = 0; i < n; i++){
//		cout << array[i] << " ";
//	}
//	cout << endl;
	int check = 1;
	tempi++;
	while(tempi <= m && check == 1){
		maxr = 0;
		check = 0;
		for(int i = tempi; i < m; i++){
			if(r[i] >= maxr){
				maxr = r[i];
				maxt = t[i];
				tempi = i;
				check = 1;
			}
		}
		if(tempt != maxt){
			for(int i = 0; i < maxr/2; i++){
				swap(array[i], array[maxr - i - 1]);
			}
			tempt = maxt;
		}
		tempi++;
	}
	for(int i = 0; i < n; i++){
		cout << array[i];
		if(i != n-1){
			cout << " ";
		}
	}
	cout << endl;
}
