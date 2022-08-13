#include <iostream>
using namespace std;

void copy(char str[], char cstr[], int ctr)
{
    cstr[ctr] = str[ctr];
    if (str[ctr] == '\0')
        return;
    copy(str, cstr, ctr + 1);
}
int main()
{
    char str[100];
    char cstr[100];
    cout<<"Enter the string: ";
    cin >> str;
    copy(str, cstr, 0);
    cout << "The string successfully copied" << endl;
    cout << "The first string is : "<< str << endl;
    cout << "The copied string is : " << cstr;
    return 0;
}