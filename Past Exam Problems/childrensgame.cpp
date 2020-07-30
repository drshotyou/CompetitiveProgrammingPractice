#include <bits/stdc++.h>

using namespace std;
bool cmp(string s1,string s2)
{
	return s1+s2>s2+s1;
}
int main()
{
	int n;
	while(cin >> n && n)
	{
		vector<string>strs;
		for(int i=0;i<n;i++)
		{
			string temp;
			cin >> temp;
			strs.push_back(temp);
		}
		sort(strs.begin(),strs.end(),cmp);
		for(int i=0;i<n;i++)
		{
			cout << strs[i];
		}
		cout << endl;
		
	}	
	return 0;
}
