#include  <iostream>
#include <bits/stdc++.h>

using namespace std;
char getMaxCharachter(string s)
{
      char alpha[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            alpha[s[i] - 'A']++;
        }
        else
        {
            alpha[s[i] - 'a']++;
        }
        
    }
      int max=alpha[0];
      int ans=0;
    for (int i = 1; i < 26; i++)
    {
        if(max<alpha[i])
        {
             ans=i;
             max=alpha[i];
             
        }

    }
   return (ans+'a');
    
    
}
int main()
{
    string s;
    getline(cin, s);
    char ch=getMaxCharachter(s);
    cout<<"Maximum occuring character is : "<<ch;

    return 0;
}