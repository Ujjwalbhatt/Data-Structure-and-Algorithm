#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    cout << "Enter the rnage of the series: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
          cout<<fibonacci(i)<<" ";
        
    }
    
    return 0;
}