#include <bits/stdc++.h>

using namespace std;
//SAME AS #
//012345678
int main ()
{
	int cases;
	cin >> cases;
	for(int i=0;i<cases;i++)
	{
		int ins;
		cin >> ins;
		
		char empty;
		empty=getchar();
		//cout << "Emp: " << empty << endl;
		int p=0;
		vector<string> pastIns;
		for(int j=0;j<ins;j++)
		{
			
			
			string insS;
			getline(cin,insS);
			//cout << "Ins: " << insS <<endl;
			pastIns.push_back(insS);
			//cout << "Vect: " << pastIns.back() << endl;
			if(insS[0]=='L')
			{
				p--;
			}
			else if(insS[0]=='R')
			{
				p++;
			}
			else
			{
				//cout << insS[8]-'0' << endl;
				//cout << pastIns[2] << endl;
				//cout << pastIns[insS[8]-'0'-1] << endl;
				if(pastIns[insS[8]-'0'-1]=="RIGHT")
				{
					p++;
				}
				else
				{
					p--;
				}
			}
		}
		cout << p << endl;
		p=0;
		pastIns.clear();
	}
	return 0;
}
