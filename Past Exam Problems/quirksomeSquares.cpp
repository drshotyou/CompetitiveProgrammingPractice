#include <bits/stdc++.h>

using namespace std;

int main () {
	int length;
	vector<int> quirkNums;
	for(int n=0;n<=9999;n++)
	{
		quirkNums.push_back(n*n);
	}
	while(cin >> length)
	{
		for(int i=0;i<quirkNums.size();i++)
		{
			if(quirkNums[i] >= (int)pow(10,length))
			{
				break;
			}
			
			int u = quirkNums[i] / (int)pow(10,length/2);
			int l = quirkNums[i] % (int)pow(10,length/2);
			if(pow(u+l,2)==quirkNums[i])
			{
				cout << setw(length) << setfill('0') << quirkNums[i] << endl;
			}
		}
	}
	return 0;
}
