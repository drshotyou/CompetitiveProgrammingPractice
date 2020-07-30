#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> c) {

	int jumps=0,current=0;
	while(current!=c.size()-1)
	{
		if(c[0]==0 && c[1]==0 && ((c.size()-1)==2))
		{
			jumps=1;
			break;
		}
		else if(c[current+2]==0)
		{
			current+=2;
			jumps++;
		}
		else if(c[current+1]==0)
		{
			current+=1;
			jumps++;
		}
	}
	//cout << jumps << endl;
	return jumps;
}

int main()
{
	int n;
	cin >> n;
	vector <int> c;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin >> temp;
		c.push_back(temp);
	}
	int result = jumpingOnClouds(c);
	cout << result;

    return 0;
}


