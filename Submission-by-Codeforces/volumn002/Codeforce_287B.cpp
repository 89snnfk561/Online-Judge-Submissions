#include <iostream>
using namespace std;
typedef  long long ull;		//設定ull = unsigned long long 

ull output(ull s, ull k){
	return (k-s) * (s+1 + k)/2 - (k-s-1); 	// (幾項)＊(頭＋尾)/ 2 - (幾項-1) 
}											// 分離器 s+1 到 k 能有幾個output 


int main(){
	ios::sync_with_stdio(false);	//在預設的iostream標頭檔切斷std::scanf和std::printf 
	cin.tie(0);						//解除綁定std::cin和std::cout,避免每一個std::cin產生std::flush 
//	上兩行主要加快std::cin, std::cout 執行速度 
	
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
