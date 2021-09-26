#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int main (){
	int N;
	int p;
	int itemp, len, count, Ncount;
	char ctemp[100];
	char c[100];
	
	cin >> N;
	for(int i = 0; i < N; i++){
		Ncount = 0;
		count = 0;
		cin >> p;
		itoa(p, c, 10);
		len = strlen(c);
		
		do{
			for(int j = 0; j < len; j++){
				ctemp[len-1-j] = c[j];
			}
			itemp = atoi(ctemp);
			for(int j = 0; j < len; j++){
				ctemp[j] = 0;
			}
			p = p + itemp;
			itoa(p, c, 10);
			len = strlen(c);
			Ncount++;
			count = 0;
			
			for(int j = 0; j < len/2; j++){
				if(c[j] == c[len-1-j]){
					count++;
				}
			}
		}while(count != len/2);
		cout << Ncount << " " << p << endl;
	}
	return 0;
}
