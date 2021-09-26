#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
#include <string.h>

using namespace std;

bool check[1005][1005];


void dfs(int i, int j, int t)
{
	// 0 source
	// 1 north
	// 2 east
	// 3 south 
	// 4 west
	
	check[i][j] = false;
	
	for(int k = 1; k <= 4; k++)
	{
		if(k == t) 
			continue;
		else if(k == 1)
		{
			for(int l = j; l <= 1000; l++)
			{
				if(check[i][l])
				{
					dfs(i, l, 3);
					break;
				}
			}
		}
		else if(k == 2)
		{
			for(int l = i; l <= 1000; l++)
			{
				if(check[l][j])
				{
					dfs(l, j, 4);
					break;
				}
			}
		}
		else if(k == 3)
		{			
			for(int l = j; l >= 0; l--)
			{
				if(check[i][l])
				{
					dfs(i, l, 1);
					break;
				}
			}			
		}
		else
		{
			for(int l = i; l >= 0; l--)
			{
				if(check[l][j])
				{
					dfs(l, j, 2);
					break;
				}
			}	
		}
	}
}

int main()
{
	memset(check, 0, sizeof(check)); 
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		check[x][y] = true;
	}
	int g = 0;
	for(int i = 1; i <= 1000; i++)
	{
		for(int j = 1; j <= 1000; j++)
		{
			if(check[i][j])
			{
				dfs(i, j, 0);
				g++;
			}
		}
	}
	cout << g - 1 << endl;
	return 0;
} 
