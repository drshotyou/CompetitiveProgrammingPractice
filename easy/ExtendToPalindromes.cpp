#include <bits/stdc++.h>

using namespace std;

int main ()
{
	string input;
	while(cin >> input && !cin.eof() )
	{
		int l=input.length()-1;
		cout << input << " " << l << endl;
		int fail=0;
		for(int i=0;i<input.length();i++)
		{
			if(i==l)
			{
				break;
			}
			if(input[i]!=input[l])
			{
				fail=1;
				break;
			}
			else
			{
				l--;
			}
		}
		if(fail==1)
		{
			cout << "not" << endl;
		}
		else 
		{
			cout << "Is" << endl;
		}
	}
}
