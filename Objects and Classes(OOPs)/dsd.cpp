#include <bits/stdc++.h>
using namespace std;

string reverseWord(string str);

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        cout << reverseWord(s) << endl;
    }
    return 0;
}
string reverseWord(string str)
{
    int n = str.length()-1;
   
   char st[100];
    int j = 0;
   int i=0;
    for (i =0, j=n; i <= n; i++,j--)
    {
        st[j]=str[i];
        
    }
    st[i]='\0';
      return st;
}