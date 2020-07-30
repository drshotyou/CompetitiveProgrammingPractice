#include <bits/stdc++.h>

using namespace std;

// Complete the appendAndDelete function below.
string appendAndDelete(string s, string t, int k) {
    int dif=0;
    int w=0;
    /*if(s.length()>t.length()){
        dif=s.length()-t.length();
        w=1;
    } else if(s.length()<t.length()){
        dif=t.length()-s.length();
    } else if(s.length()==t.length()){
        w=2;
    }
    int f=t.find(s);
    
    if(f==0) {
        if(dif>k) {
            return "No";
        } else {
          return "Yes";
        }
    }
    f=s.find(t);
    if(f==0){
        if (dif >k) {
        return "No";
        } else {
          return "Yes";
        }
    }*/
    int len=0;
    while(s[len]==t[len]){
         len++;   
        }
        
    int del=s.length()-len;
    int add=t.length()-len;
    cout << del+add << endl;
    if(del+add>k || del+add<k){
    	cout << "No" << endl;
        return "No";
    } else if(del+add==k){
    	cout << "Yes" << endl;
        return "Yes";
    }
    
    cout << "???" << endl;
        
  

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

