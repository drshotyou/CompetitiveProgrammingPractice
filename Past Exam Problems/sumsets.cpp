#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	while(cin >> n && n)
	{
		vector<int> nums;
		for(int i=0;i<n;i++)
		{
			int temp;
			cin >> temp;
			nums.push_back(temp);
		}
		int f=0,d;
		sort(nums.begin(),nums.end());
		for(int l=n-1;l>=0;l--)
		{
			for(int i=0;i<n;i++)
			{
				for(int j=i+1;j<n;j++)
				{
					for(int k=j+1;k<n;k++)
					{
					
						if(i!=j && i!=k && i!=l &&
						   j!=k && j!=l &&
						   k!=l)
						   {
						   	//cout << "In " <<  i << " " << j << " " <<  k <<  " " << l << endl;
						   	//cout << nums[l] << " = " << nums[i] << " + " << nums[j] << " + " << nums[k] << " + " << endl;
						   	//			f=1;
							//			d=nums[l];	
								
									if(nums[l]==nums[i]+nums[j]+nums[k])
						   			{
						   					d=nums[l];
						   					f=1;
						   					break;
									}
								}
					}
					if(f) break;	
				}
				if(f) break;
			}
			if(f) break;
		}
		
		if(f)
		{
			cout << d << endl;
		}
		else
		{
			cout << "no solution" << endl;
		}
		
		nums.clear();
		f=0;
		
	}
	return 0;
}
