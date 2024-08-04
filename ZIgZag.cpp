#include <iostream>
using namespace std;
    void ZigZag(int n){
        if(n==0) return;
        cout<<n;
        ZigZag(n-1);
        cout<<n;
        ZigZag(n-1);
        cout<<n;
    }
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    ZigZag(n);
}