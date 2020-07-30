#include <bits/stdc++.h>

using namespace std;

int main () {
	long long num;
	while(cin >> num && num!=0)
	{
		if(sqrt(num)==int(sqrt(num)))
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}
	}
	return 0;
}

