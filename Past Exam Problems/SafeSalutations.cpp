#include <bits/stdc++.h>

using namespace std;
//#define MAX 10
int dp[20];
int main ()
{
	memset(dp,0,sizeof(dp));
	dp[0] = dp[1] = 1;
	dp[2]=2;
	for(int n=3;n<=10;n++)
	{
		for(int i=0;i<=n-1;i++)
		{
			dp[n] += (dp[i]*dp[n-i-1]);
		}
	}
	int n, t=0;
	while(cin >> n && !cin.eof())
	{
		if(t++) cout << endl;
		cout << dp[n] << endl;
	}
	return 0;
}
