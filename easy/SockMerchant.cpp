#include <iostream>

using namespace std;

int main()
{
	int numSock;
	cin >> numSock;
	int arr[numSock];
	for(int i=0;i<numSock;i++)
	{
		cin >> arr[i];
	}
	int pairs=0;
	for(int i=0;i<numSock;i++)
	{
		for(int j=i+1;j<numSock;j++)
		{
			if(arr[i]==arr[j] && arr[j]!=0)
			{
				//cout << i << " " << j << endl;
				//cout << arr[i] << " " << arr[j] << endl;
				pairs++;
				arr[j]=0;	
				arr[i]=0;
				//cout << arr[i] << " " << arr[j] << endl;
			}	
		}
	}
	cout << pairs;
	return 0;
}
