#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */
     int h1=s[0]-'0';
     int h2=s[1]-'0';
     int m1=s[3]-'0';
     int m2=s[4]-'0';
     int s1=s[6]-'0';
     int s2=s[7]-'0';
     
     int num=h1;
     num*=10;
     num+=h2;
     if(s[8]=='P' && num!=12)
     {
     	num+=12;
	 }
	 else if(s[8]=='A' && num==12)
	 {
		num=0;
	 }
	 if(num==24)
	 {
	 	s[0]=s[1]='0';
	 }
	 else if(num<10)
	 {
	 	s[0]='0';
	 	s[1]=num%10+'0';
	 }
	 else if(num>=10 && num<20)
	 {
	 	s[0]='1';
	 	//cout << num%10 + '0' << endl;
	 	s[1]=num%10+'0';
	 }
	 else if(num>=20 && num<24)
	 {
	 	s[0]='2';
	 	s[1]=num%10+'0';
	 }
     //cout << num << endl;
     s[8]='\0';
     s[9]='\0';
     s.erase(8,9);
     cout << s << endl;
     return s;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

