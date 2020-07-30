#include <bits/stdc++.h>

using namespace std;
static int maps[101][101];
static int m, n;
int dirs [][2] = {{-1,-1}, {-1,0}, {-1,1}, {0,-1}, {0,1}, {1,-1}, {1,0}, {1,1}};
void dfs(int i,int j);
int main ()
{
	while(cin >> m >> n && (m || n))
	{
		int depos=0;
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				char c;
				cin >> c;
				if(c=='@')
				{
					maps[i][j]=1;
				}
				else
				{
					maps[i][j]=0;
				}
			}
		}
		
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(maps[i][j])
				{
					++depos;
					dfs(i,j);	
				}	
			}
		}
		cout << depos << endl;
	}
	return 0;	
}

void dfs(int i,int j)
{
	int ti,tj;
	maps[i][j]=0;
	for(const auto* p:dirs)
	{
		ti = i + p[0];
		tj = j + p[1];
		if(ti >=0 && ti < m &&
		   tj >=0 && tj < n && maps[ti][tj])
		   dfs(ti,tj);
	}
}
