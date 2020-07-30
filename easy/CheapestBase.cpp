#include <bits/stdc++.h>

using namespace std;

int main()
{
	int cases,cVal[37],baseVal[37];
	cin >> cases;
	for(int i=0;i<36;i++)
	{
		cin >> cVal[i];
		
	}
	int nums;
	cin >> nums;
	for(int i=0;i<nums;i++)
	{
		int temp,current;
		cin >> current;
		for(int j=0;j<37;j++)
		{
			baseVal[j]=0;
		}
		for(int j=2;j<37;j++)
		{
			temp = current;
			while(temp)
			{
				baseVal[j]=baseVal[j]+cVal[temp%j];
				temp=temp/j;
			}
		}
		int min = INT_MAX;
		for(int j=2;j<37;j++)
		{
			if(baseVal[j]<min)
			{
				min=baseVal[j];
			}
		}
		cout << "Cheapest base(s) for number " << current << ":";
		for(int j=0;j<37;j++)
		{
			if(baseVal[j]==min)
			{
				cout << j << endl;
			}
		}
	}
	
	return 0;
}
