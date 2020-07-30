#include <bits/stdc++.h>

using namespace std;
int main ()
{
	string str1,str2;
	while(cin >> str1 >> str2 && !cin.eof())
	{
		int len = str1.length();
		int count = 0;
		for(int i=0;i<str2.length();i++)
		{
			if(str2[i]==str1[count])
			{
				count++;	
			}
		}
		if(count==str1.length())
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
	return 0;	
}

