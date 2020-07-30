#include <bits/stdc++.h>

using namespace std;

int main()
{
	string str1;
	while(getline(cin,str1) && str1[0]!='.')
	{
		vector<int> stack;
		int e=0;
		//int op=0;
		for(int i=str1.length()-1;i>=0;i--)
		{
			//cout <<"str1:" << str1[i] << endl;
			if(e)break;
			switch(str1[i])
			{
				case '+':
				case '-':
				case '*':
				case '/':
				case '%':
					//cout <<"length " << stack.size() << endl;
					//for(int j=0;j<stack.size();j++)
					//{
					//	cout << stack[j] << "";
					//}
					//cout << endl;
					if(stack.size()>=2)
					{
						int n1 = stack.back();
						stack.pop_back();
						int n2 = stack.back();
						stack.pop_back();
						int res;
						switch(str1[i])
						{
							case '+': res=n1+n2;break;
							case '-': res=n1-n2;break;
							case '*': res=n1*n2;break;
							case '/': res=n1/n2;break;
							case '%': res=n1%n2;break;
						}
						stack.push_back(res);
						e=0;
						//cout <<"length " << stack.size() <<" n1: " << n1 << " n2: " << n2 << " stri: " << str1[i] << " res: " << res << endl;
					}
					else //if(stack.size()<2)
					{
						cout << "illegal" << endl;
						e=1;
						break;
					}
					break;
				case ' ':break;
				default:
					int pow=1;
					int op=0;
					while(str1[i]>='0' && str1[i]<='9')
					{
						op = op + (str1[i]-'0')*pow;
						i--;
						pow*=10;
						
					}
					stack.push_back(op);
					break;
			}
			//if(e)break;
		}
		if(!e)
		{
			cout << stack.back() << endl;
			stack.pop_back();
			stack.clear();		
		}
	}
	return 0;
}
