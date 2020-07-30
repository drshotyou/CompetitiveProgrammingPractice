#include <bits/stdc++.h>

using namespace std;

int main () {
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		int num;
		int nums[500];
		int r;
		cin >> r;
		for(int j=0;j<r;j++)
		{
			cin >> num;
			nums[j]=num;
		}
		int minSum=0;
		for(int j=1;j<r;j++)
		{
			minSum+=abs(nums[0]-nums[j]);
		}
		
		for(int j=0;j<r;j++)
		{
			int sum=0;
			for(int k=0;k<r;k++)
			{
				sum+=abs(nums[j]-nums[k]);
				//cout << sum << endl;
			}
			//cout << "Total" << endl;
			//cout << sum << endl;
			if(sum<minSum)
			{
				minSum=sum;
			}
		}
		
		cout << minSum << endl;
		for(int j=0;j<r;j++)
		{
			nums[r]=0;
		}
	}
}
