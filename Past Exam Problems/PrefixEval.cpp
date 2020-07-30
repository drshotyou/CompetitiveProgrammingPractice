#include <bits/stdc++.h>

using namespace std;

int main () {

	string in;
	while(getline(cin,in) && in[0]!='.')
	{
		//cout << "waiting" << endl;
		vector<int> stack;
		int op = 0;
		int flag = 0;
		for(int i=in.size()-1;i>=0;i--)
		{
			//cout << "i: " << i << " in[i]: " << in[i] << ";" <<" in.size() " << in.size() << endl;
			if(flag) break;
			switch(in[i])
			{
				case '+':
				case '-':
				case '*':
				case '/':
				case '%':
					//cout << "c:" << in[i] << " " << stack.size() << endl;
					//for(int j=stack.size()-1;j>=0;j--)
					//{
					//	cout << stack[j] << " ";
					//}
					//cout << endl;
					if(stack.size()>=2)
					{
						int ans;
						int n1 = stack.back();
						stack.pop_back();
						int n2 = stack.back();
						stack.pop_back();
						switch(in[i])
						{
							case '+':ans=n1+n2;
								break;
							case '-':ans=n1-n2;
								break;
							case '*':ans=n1*n2;
								break;
							case '/':ans=n1/n2;
								break;
							case '%':ans=n1%n2;
								break;
						}
						//cout << n1 << " " << in[i] <<" " << n2 << " = " << ans << endl;
						stack.push_back(ans);
						flag=0;		
					}
					else
					{
						flag=1;
						cout << "illegal" << endl;
						break;
					}
					//cout << "end op" << endl;
					break;
				case ' ': //cout << "space " << endl; 
						break;
				default:
					int pow = 1;
					while(in[i]>='0' && in[i]<='9')
					{
						op  = op + (in[i]-'0')*pow;
						pow*=10;
						i--;
					}
					stack.push_back(op);
					//cout << "op:" << op << endl;
					op=0;
					break;
			}
			//cout << "end i: " << i << " in[i]: " << in[i] << ";" <<" in.size() " << in.size() << endl;
			
		}
			if(!flag)
			{
				cout << stack.back() << endl;
				stack.pop_back();
				//cout << stack.size();
			}
		
	}
	return 0;
}
