//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct point_type {
	int nxt;
	int len;
};
vector<point_type> toPoint[10005];
int ans;
int DFS(int point, int prev_point)
{
	int route_max = 0;
	for(auto &p : toPoint[point] ) 
	{
		cout << p.next << endl;
		if(p.nxt==prev_point)
		{
			continue;
		}
		int route = DFS(p.nxt,point) + p.len;
		
		if(route + route_max> ans)
		{
			ans = route + route_max;
		}
		if(route > route_max)
		{
			route_max = route;
		}
	}
		return route_max;
}

int main ()
{
	
	string str;
	int last=0;
	while(getline(cin,str) && !cin.eof() )
	{
		//cout << str << endl;
		int s = str[0]-'0', d=str[2]-'0', l=str[4]-'0';
		cout << s << " " << d << " " << l << endl;
		toPoint[s].push_back({d,l});
		toPoint[d].push_back({s,l});
		str.clear();
		//if(last<s) last=s;
	}
	
	
	ans = 0;
	DFS(1,-1);
	cout << ans << endl;
	return 0;
}
