#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    int j=0;
    int m=n-1;
    int o=1;
    for(int i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout << " ";
        }
        for(int k=0;k<o;k++)
        {
            cout << "#";
        }
        cout << endl;
        m--;
        o++;
    }

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}

