//tower of hanoi
#include<iostream>
using namespace std;
void towerOfHanoi(int n, char from, char to, char aux)
{
    if (n == 1)
    {
        cout << "Move disk 1 from " << from << " to " << to << endl;
        return;
    }
    towerOfHanoi(n - 1, from, aux, to);
    cout << "Move disk " << n << " from " << from << " to " << to << endl;
    towerOfHanoi(n - 1, aux, to, from);
}
int main()
{
    int n;
    cin >> n;
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;