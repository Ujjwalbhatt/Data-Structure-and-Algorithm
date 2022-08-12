// To reverse a string using recursion
#include <iostream>
#include <string.h>
int n;
using namespace std;
// void rev(char *st){

//         if(n>=0){
//             cout<<st[n];
//             n--;
//             rev(st);

//         }
// }
// or
char *rev(char str[])
{
    static int i;
    static char revstr[100];
    if (*str)
    {
        rev(str + 1);
        revstr[i++] = *str;
    }
    return revstr;
}
// int main()
// {
//     char st[100];
//     cin>>st;
//     n=strlen(st);

//     rev(st);
//     return 0;
// }

// OR

int main()
{
    char str[100];
    char *revstr;
    cin >> str;
    revstr = rev(str);
    cout<<revstr;
    return 0;
}