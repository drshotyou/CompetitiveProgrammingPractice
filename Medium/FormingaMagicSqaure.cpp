#include <bits/stdc++.h>

using namespace std;

// Complete the formingMagicSquare function below.
int formingMagicSquare(vector<vector<int>> s) {
	bool found[10]={0};
	int rep[10]={0};
	int count=0;
	
	vector< pair <int , pair<int, int> > > reps;
	for (int i =0;i<s.size();i++)
	{
	    for(int j=0;j<s.size();j++)
	    {
	    	
	        if(found[s[i][j]]==false)
	        {
	        	//cout << "F" << found[s[i][j]] << " " << s[i][j] << endl;
	        	//cout << "in" << endl;
	        	
	            found[s[i][j]]=true;
	        }
				else
	        {
	        	//cout <<"Second: "<< found[s[i][j]] << " " << s[i][j] <<"x" << i << j << endl;
	            reps.push_back(make_pair(s[i][j],make_pair(i,j)));
	            //cout << reps.back().first << endl;
	            //count++;
			}
	    }
	}
	
	/*	for(int k=0;k<s.size();k++)
		{
			for(int j=0;j<s.size();j++)
			{
				for(int i=0;i<reps.size();i++)
				{
					if(reps[i].first==s[k][j])
					{
						cout <<"2Second: "<< found[s[k][j]] << " " << s[k][j] <<"x: " << k <<"j: "<< j << endl;
						reps.push_back(make_pair(s[k][j],make_pair(k,j)));
						cout << reps.back().first << endl;
					}
				}
		}	}
	*/
	for(int i=0;i<reps.size();i++)
	{
		cout << reps[i].first;
	}
	
	cout << endl << endl;
	for(int i=1;i<10;i++)
	{
	    cout <<i<< " " << found[i] << endl;
	}
	cout << endl;
	found[0]=1;
	
	for(int i=0;i<reps.size();i++)
	{
		cout << "i: " << i << endl;
		cout <<"num: " << reps[i].first << " x:" << reps[i].second.first << endl;
		cout <<"num: " << reps[i].first << " x:" << reps[i].second.second << endl;
		int m=reps[i].second.first;
		int n=reps[i].second.second;
		cout << m << n << endl;
		int fits=0;
		for(int j=0;j<10;j++)
		{
			if(found[j]==0)
			{
				int total=0;
				for(int k=0;k<3;k++)
				{
					total+=s[m][k];
					if(total==15) fits++;
				}
				total=0;
				for(int k=0;k<3;k++)
				{
					 total+=s[k][n];
					if(total==15) fits++;
				}
				total=0;
				if((s[0][0] + s[1][1]+s[2][2])==15) fits++;
				cout << "found[j]" << found[j] << "j:" << j << endl;
				if(fits==3)
				{
					found[j]=1;
					s[m][n]=j;
				}
				
			}
		}
	}
	for(int i=0;i<s.size();i++)
	{
		for(int j=0;j<s.size();j++)
		{
			cout << s[i][j] << " ";
		}
		cout << endl;
	}
	
}


	

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> s(3);
    for (int i = 0; i < 3; i++) {
        s[i].resize(3);

        for (int j = 0; j < 3; j++) {
            cin >> s[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = formingMagicSquare(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

