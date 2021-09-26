#include <iostream>
#include <sstream>	
#include <cstring>	//這個和<string>有何不同 
#define LEN 100000
using namespace std;
int main (){
	
	char s[LEN];
	char t[LEN];
	cin >> s >> t;
	
	int sn = strlen(s);
	int tn = strlen(t);
	int count = 0;
	if(sn <= tn){
		for(int i = 0; i < tn; i++){
			if(s[count] == t[i]){
				count++;
			}
		}
	}
	if(count >= sn){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
	return 0;;
}
