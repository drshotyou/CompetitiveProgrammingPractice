#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long long int repeatedString(string s, long long int n) {
	long long int m=s.size();
	long long int times=n/m;
	long long int count=0;
	//cout << "1: " << times << endl;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='a')
		{
			count++;
		}
	}
	//cout << "2: " << times << endl;
	//cout << "3: " << count << endl;
	count = count * times;
	//cout << "4: " << count << endl;
	for(int i=0;i<(n%s.size());i++)
	{
		if(s[i]=='a')
		{
			count++;
		}
	}
	//cout << count << endl;
	return count;
}

int main()
{
  

    string s;
    cin >> s;

    long long int n;
    cin >> n;
  
    long long int result = repeatedString(s, n);
	cout << result << endl;
 

 

    return 0;
}

