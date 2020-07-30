#include <bits/stdc++.h>

using namespace std;
int DP[27][27][352];//letter length sum
int main ()
{
	int i,j,k;
	memset(DP,0,sizeof(DP));
	DP[0][0][0]=1;
	for(i = 1;i<= 26; i++)
	{
		for(j=0;j<=i;j++)
		{
			for(k=0;k<352;k++)
			{
				DP[i][j][k]=DP[i-1][j][k];
				if(j>0 && k>=i)
				{
					DP[i][j][k] += DP[i-1][j-1][k-i];
				}
			}
		}
	}
	
	int l,s,c=0;
	
	while(cin >> l >> s)
	{
		if(l==0 && s==0) break;
		cout << "Case " << ++c << ": ";
		if(l>26 || s>351)
			puts("0");
		else
			cout << DP[26][l][s] <<  endl;
 	}
	return 0;
}
