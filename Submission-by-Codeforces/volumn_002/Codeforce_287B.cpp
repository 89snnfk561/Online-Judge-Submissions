#include <iostream>
using namespace std;
typedef  long long ull;		//�]�wull = unsigned long long 

ull output(ull s, ull k){
	return (k-s) * (s+1 + k)/2 - (k-s-1); 	// (�X��)��(�Y�ϧ�)/ 2 - (�X��-1) 
}											// ������ s+1 �� k �঳�X��output 


int main(){
	ios::sync_with_stdio(false);	//�b�w�]��iostream���Y�ɤ��_std::scanf�Mstd::printf 
	cin.tie(0);						//�Ѱ��j�wstd::cin�Mstd::cout,�קK�C�@��std::cin����std::flush 
//	�W���D�n�[��std::cin, std::cout ����t�� 
	
	ull n, k;
	cin >> n >> k;
	ull mid, low, high;
	ull ans;
	if(n == k){
		cout << 1 << endl;
	}else{
		if(output(1, k) >= n){
			
			low = 1, high = k;
			while(low <= high){
				mid = (low + high)/2;
				if(output(mid, k) >= n){
					low = mid + 1;
					ans = k - mid;
				}else{
					high = mid - 1;
					
				}
//				cout << low << " " << mid << " " << high << "    " << ans << endl; 
			}
			
			cout << ans << endl;
		}else{
			cout << -1 << endl;
		}
	}
//	cout << output(n, k) <<endl;
	return 0;
} 
