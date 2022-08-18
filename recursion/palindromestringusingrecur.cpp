#include <iostream>
using namespace std;
bool checkpalindrome(string ch, int i)
{
    int n=ch.length();
    if (i > n-i-1)
        return true;
    if (ch[i] != ch[n-i-1])
    {
        return false;
    }
    else
    {
        return checkpalindrome(ch, i + 1);
    }
}
int main()
{
    string ch;
    cout<<"Enter the string to check for palindrome: ";
    cin>>ch;
    bool ispalindrome = checkpalindrome(ch, 0);
    if (ispalindrome)
    {
        cout << "Its a palindrome!" << endl;
    }
    else
    {
        cout << "Its not a palindrome" << endl;
    }
    return 0;
}