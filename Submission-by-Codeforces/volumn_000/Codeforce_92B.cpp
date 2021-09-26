#include <iostream>
#include <string>
using namespace std;

int cycle(string x){
	int count = 0, carry = 0;
	int n;
	while(x != "1"){						//判斷整段字串是否為1 
		if(x[x.length()-1] == '0'){
			x.pop_back();					//刪除最後面的為0的數 , 如這段出現'string'沒有成員'pop_back' 
		}else{								//請使用工具->編譯器選項->編譯器呼叫打勾，輸入-std=c++11 
			n = x.length() - 1;
			carry = 1;
			while(carry != 0){
				if(x[n] == '1'){
					x[n] = '0';
					n--;
					carry = 1;
					if(n == -1){					//當進位超出原有字串長度時 
						x.insert(x.begin(), '1'); 	// 最前面插入進位1 
						carry = 0;
					}
				}else{
					x[n] = '1';
					carry = 0;
				}
				
			}
		}
		count++;
	}
	return count;
}

int main (){
	string x;
	getline(cin, x); 
	cout << cycle(x) << endl;
	return 0;
} 
