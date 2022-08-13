#include <iostream>
using namespace std;
void first(char *str)
{
    static int i = 0;
    if (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
        
            cout << "character found: " << str[i];
            return;
        }
        else
        {
            i++;
            first(str);
        }
    }
    else
    {
        cout << "No character found";
        return;
    }
}
int main()
{
    char str[100];
    cout << "Enter the string: ";
    gets(str);
    first(str);
    return 0;
}