#include <iostream>
using namespace std;
int main (){
		int a, b;
		int count, carry;
		int i, j;
	while(1){
		cin >> a >> b;
		if(a == 0 && b == 0){
			break;
		}
		count++;
		carry = 0;
		count = 0;
		for(i = 10, j = 1; a/j != 0 || b/j != 0; i *= 10, j *= 10){
			if(((a % i - a % j) + (b % i - b % j) + carry*j ) >= i){
				count++;
				carry = 1;
			}else{
				carry = 0;
			}
			
			cout << a % i - a % j << " "<< b % i - b % j << endl;
		}
		if(count == 0){
			cout << "No carry operation."<< endl;
		}else if(count == 1){
			cout << "1 carry operation."<< endl;
		}else{
			cout << count << " carry operations."<< endl;
		}
	}
	return 0;
}
