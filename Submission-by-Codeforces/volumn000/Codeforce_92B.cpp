#include <iostream>
#include <string>
using namespace std;

int cycle(string x){
	int count = 0, carry = 0;
	int n;
	while(x != "1"){						//�P�_��q�r��O�_��1 
		if(x[x.length()-1] == '0'){
			x.pop_back();					//�R���̫᭱����0���� , �p�o�q�X�{'string'�S������'pop_back' 
		}else{								//�ШϥΤu��->�sĶ���ﶵ->�sĶ���I�s���ġA��J-std=c++11 
			n = x.length() - 1;
			carry = 1;
			while(carry != 0){
				if(x[n] == '1'){
					x[n] = '0';
					n--;
					carry = 1;
					if(n == -1){					//��i��W�X�즳�r����׮� 
						x.insert(x.begin(), '1'); 	// �̫e�����J�i��1 
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
