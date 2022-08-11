#include <iostream>
using namespace std;
void natural(int n, int k){
    
 if(n<=k){
    cout<<n<<" ";
    natural(n+1,k);
 }
}
int main(){
    int n=1;
    int k;
    cout<<"Enter the number to what you to print natural: ";
    cin>>k;
    natural(n,k);


}