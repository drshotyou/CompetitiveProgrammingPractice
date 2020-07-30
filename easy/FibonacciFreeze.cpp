#include <bits/stdc++.h>

using namespace std;

int dp[5001][2000]={0};
 
int main()
{
	dp[1][0]=1;
	for(int i=2; i<=5000;i++)
	{
		for(int j=0; j<2000;j++)
		{
			
		}
	}	
	return 0;
}
#include<stdio.h>

int dp[5001][2000] = {0};

int main()
{

	dp[1][0] = 1;
	int i, j;
	for( i = 2 ; i <= 5000 ; i++ )
	{
		for( j = 0 ; j < 2000 ; j++ )
		{
			dp[i][j] += dp[i-1][j] + dp[i-2][j];
			dp[i][j+1] += dp[i][j]/10;
			dp[i][j] %= 10;
			
		}
	}
	
	int n;
	while( scanf( "%d", &n ) != EOF )
	{
		printf( "The Fibonacci number for %d is ", n );
		for( i = 1999 ; i >= 0 ; i-- )
		{
			if( dp[n][i] != 0 )
				break;
		}
		if( i == -1 )
			printf( "0" );
		else
			for( ; i >= 0 ; i-- )
				printf( "%d", dp[n][i] );
		printf( "\n" );
	}
	return 0;
}
