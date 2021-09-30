#include <iostream>
#include <vector>
using namespace std;

bool *check;
bool *edge;
int split= -1;
int edgeCount = 0;
bool composition = false;

void dfs(vector<int> *tree, int node){
//	cout << "dfs node: " << node << endl;
	check[node] = true;
	for(auto a: tree[node]){
		if(!check[a]){
			dfs(tree, a);
//			cout << "back dfs node: " << node << endl;
		}
	}
	//判斷共通節點 
	if(tree[node].size() > 2){	
		if(split >= 0) composition = true;
		split = node;
	}
	//判斷邊緣節點 
	if(tree[node].size() == 1){
		edge[node] = true;
		edgeCount++;
	}
}

int main(){
	int n, a, b;
	cin >> n;
	check = new bool[n+7]{0};
	edge = new bool[n+7]{0};
	vector<int> tree[n+7];
	
	for(int i = 0; i < n-1; i++){
		cin >> a >> b;
		tree[a].push_back(b);
		tree[b].push_back(a);
	}
	dfs(tree, 1);
	
	if(!composition){
		cout << "Yes\n";
		if(split == -1){
			int a = 0, b = 0;
			for(int i = 0; i <= n; i++){
				if(edge[i]){
					if(a == 0) a = i;
					else b = i;
				}
			}
			cout << "1\n" << a << " " << b << endl;
		}else{
			cout <<edgeCount<<"\n";
			for(int i = 0; i <= n; i++){
				
				if(edge[i]) {
					cout << split << " " << i << endl;
				}
			}
		}
	}
	else cout << "No\n";
	
}
