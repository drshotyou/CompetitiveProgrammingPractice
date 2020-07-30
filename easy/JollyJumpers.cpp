#include <iostream>
#include <vector>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
	//ofstream myfile;
	//myfile.open("jolly.txt");
	//for(int m=0;m<9;m++)
	//{
		int nums;
		while (cin >> nums && !cin.eof())
		{
			int arr[3001];
			int diff[3001]={0};
			for(int i=0;i<nums;i++)
			{
				cin >> arr[i];
			}
			
			int fail=0;
			for(int i=1;i<nums;i++)
			{
				int temp = abs((float)arr[i]-(float)arr[i-1]);
				if(temp<=3000) diff[temp]++;
			}
			for(int i=1;i<nums;i++)
			{
				if(diff[i]==0)
				{
					fail=1;
					break;
				}
			}
			if(fail==1)
			{
				cout << "Not jolly" << endl;
			}
			else
			{
				cout << "Jolly" << endl;
			}
		}
}
