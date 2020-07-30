#include <bits/stdc++.h>

using namespace std;
 int main ()
 {
 	int cases;
 	cin >> cases;
 	for(int i=0;i<cases;i++)
 	{
 		int points;
		 cin >> points;
		 vector<pair<int,int> > coords;
		 for(int j=0;j<points;j++)
		 {
		 	int x,y;
		 	cin >> x >> y;
		 	coords.push_back(make_pair(x,y));
		 	cout << coords.back();
		 }	
	}
 	return 0;
 }
