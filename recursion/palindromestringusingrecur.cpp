#include<iostream>
#include<string.h>
using namespace std;

void palindrome(char str[],int i){
    int len=strlen(str)-(i+1);
    if(str[i]==str[len]){
        if(i+1==len || i==len){
            cout<<"Entered string is palindrome!";
            return;
        }
        else{
            palindrome(str,i+1);
        }
    }
        else{
            cout<<"Entered string is not palindrome!";
        }

}
int main()
{
 char str[100];
 cout<<"Enter the string : ";
 cin>>str;
 palindrome(str,0);
    return 0;
}