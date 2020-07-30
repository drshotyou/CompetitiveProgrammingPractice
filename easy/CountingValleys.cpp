#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
	int total=0,count=0;
	for(int i=0;i<n;i++)
	{
		if (s[i]=='U')
		{
			count++;
			if(count==0)
			{
				total++;
			}
		}
		else if(s[i]=='D')
		{
			count--;
		}
		
	}
	//cout << total << endl;
	return total;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);
	//cout << s << endl;
    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}

