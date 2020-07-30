#include <bits/stdc++.h>

using namespace std;

// Complete the diagonalDifference function below.
int diagonalDifference(vector<vector<int>> arr) {
    int diag1=0,diag2=0;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr.size();j++)
        {
            if(i==j)
            {
            	//cout << arr[i][j] << endl;
                diag1+=arr[i][j];
            }
        }
    }
//	cout << diag1 << endl;
//	cout << "Diagonal 2:" << endl;
	int n=arr.size()-1;
//	int m=0;
     for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr.size();j++)
        {
        	//cout << i << " " << j << endl;
            if(j==n)
            {
  //          	cout << arr[i][j] << endl;
                diag2+=arr[i][j];
                n--;
            }
        }
    }
	//cout << diag2 << endl;
    int absDiff=diag1-diag2;
    
    if(absDiff<0)
    {
        absDiff*=-1;
    }
    return absDiff;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i].resize(n);

        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = diagonalDifference(arr);
	//cout << result << endl;
    fout << result << "\n";

    fout.close();

    return 0;
}

