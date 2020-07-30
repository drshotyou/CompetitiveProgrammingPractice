#include <bits/stdc++.h>

using namespace std;

int main()
{
	string input;
	vector<int> inputN;
	getline(cin,input);
	for(int i=0;i<input.length();i++)
	{
		//cout << input[i];
		if(input[i]!=' ')
		{
			//cout << input[i] << " " << endl;
			inputN.push_back(input[i]-'0');
			//cout << inputN.back() << " " << endl;
			
		}
	}
	int fail=0;
	for(int i=0;i<inputN.size()-1;i++)
	{
		int temp=inputN[i]-inputN[i+1];
		if(temp<0) temp*=-1;
		for(int j=0;j<inputN.size();j++)
		{
			//cout << "temp: " <<temp << endl;
			if(temp==inputN[j])
			{
				break;
			}
			if(j==inputN.size()-1)
			{
				fail=1;
			}
		}
		if(fail==1)
		{
			break;
		}
	}
	if(fail==0)
	{
		cout << "Jolly" << endl;
	}
	else
	{
		cout << "Not jolly" << endl;
	}
	
	return 0;
}
