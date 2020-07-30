#include <bits/stdc++.h>

using namespace std;

int main () {
	int length;
	while(cin >> length && !cin.eof())
	{
		
		if(length==2)
		{
			for(int i=0;i<10;i++)
			{
				string si=to_string(i);
				for(int j=0;j<10;j++)
				{
					string sj=to_string(j);
					string str3=sj+si;
						if(pow(i+j,2)==stoi(str3))
						{
							cout << sj << si << endl;	
						}			
				}
			}
		}
		else if(length==4)
		{
			for(int i=0;i<100;i++)
			{
				string si;
				if(i<10)
				{
					si='0'+to_string(i);
				}
				else
				{
					si=to_string(i);
				}
				for(int j=0;j<100;j++)
				{
					string sj;
					if(j<10)
					{
						sj='0'+to_string(j);
					}
					else
					{
						sj=to_string(j);
					}
					string str3=si+sj;
						if(pow(i+j,2)==stoi(str3))
						{
								cout << si << sj << endl;	
						}			
				}
			}
		}
		else if(length==6)
		{
			for(int i=0;i<1000;i++)
			{
				string si;
				if(i<10)
				{
					si="00"+to_string(i);
				}
				else if(i>=10 && i<100)
				{
					si="0"+to_string(i);
				}
				else 
				{
					si=to_string(i);
				}
				for(int j=0;j<1000;j++)
				{
					string sj;
					if(j<10)
					{
						sj="00"+to_string(j);
					}
					else if(j>=10 && j<100)
					{
						sj='0'+to_string(j);
					}
					else 
					{
						sj=to_string(j);
					}
					string str3=si+sj;
						if(pow(i+j,2)==stoi(str3))
						{
								cout << si << sj << endl;	
						}			
				}
			}
		}else if(length==8)
		{
			for(int i=0;i<10000;i++)
			{
				string si;
				if(i<10)
				{
					si="000"+to_string(i);
				}
				else if(i>=10 && i<100)
				{
					si="00"+to_string(i);
				}
				else if(i>=100 && i<1000)
				{
					si='0'+to_string(i);
				}
				else
				{
					si=to_string(i);
				}
				for(int j=0;j<10000;j++)
				{
					string sj;
					if(j<10)
					{
						sj="000"+to_string(j);
					}
					else if(j>=10 && j<100)
					{
						sj="00"+to_string(j);
					}
					else if(j>=100 && j<1000)
					{
						sj='0'+to_string(j);
					}
					else
					{
						sj=to_string(j);
					}
					string str3=si+sj;
						if(pow(i+j,2)==stoi(str3))
						{
								cout << si << sj << endl;	
						}			
				}
			}
		}
	}
	return 0;	
}

