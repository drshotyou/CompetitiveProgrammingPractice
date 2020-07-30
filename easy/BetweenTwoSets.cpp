#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

/*
 * Complete the getTotalX function below.
 */
int getTotalX(vector<int> a, vector<int> b) {
    int max=b[0];
    for(int i=1;i<b.size();i++)
    {
        if(max<b[i]) max=b[i];
    }
    vector<int> c1;
    for(int i=1;i<=max;i++)
    {
        for(int j=0;j<b.size();j++)
        {
            if(b[j]%i==0)
            {
                int t=0;
                for(int k=0;k<b.size();k++)
                {
                    if(b[k]%i==0) t++;
                }
                if(t==b.size())
				{
					//cout << "Here" << endl;
					if( (find(c1.begin(),c1.end(),i) != c1.end()) )
					{
						//cout << "old item: "  << i << endl;
						
					}
					else
					{
						//cout << "new item: "  << i << endl;
						c1.push_back(i);
					}
					
				 } 
            }
        }
    }
    //c1.erase(unique(c1.begin(),c1.end()));
    
    //cout << c1.size() << endl;
    vector<int> c2;
    for(int i=0;i<c1.size();i++)
    {
         for(int j=0;j<a.size();j++)
         {
             if(c1[i]%a[j]==0)
             {
             	//cout << "c1: " << c1[i] << " a[j]: " << a[j] << endl;
                 int t=0;
                 for(int k=0;k<a.size();k++)
                 {
                     if(c1[i]%a[k]==0)t++;
                 }
                 if(t==a.size())
				 {
				 	if(find(c2.begin(),c2.end(),c1[i]) != c2.end())
				 	{
				 		//cout << "old item: "  << c1[i] << endl;
					}
					else
					{
						//cout << "new item: "  << c1[i] << endl;
					 	c2.push_back(c1[i]);
					}
					 
				 } 
             }
         }
    }
    //cout << c2.size();
    return c2.size();
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nm_temp;
    getline(cin, nm_temp);

    vector<string> nm = split_string(nm_temp);

    int n = stoi(nm[0]);

    int m = stoi(nm[1]);

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split_string(a_temp_temp);

    vector<int> a(n);

    for (int a_itr = 0; a_itr < n; a_itr++) {
        int a_item = stoi(a_temp[a_itr]);

        a[a_itr] = a_item;
    }

    string b_temp_temp;
    getline(cin, b_temp_temp);

    vector<string> b_temp = split_string(b_temp_temp);

    vector<int> b(m);

    for (int b_itr = 0; b_itr < m; b_itr++) {
        int b_item = stoi(b_temp[b_itr]);

        b[b_itr] = b_item;
    }

    int total = getTotalX(a, b);

    fout << total << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

