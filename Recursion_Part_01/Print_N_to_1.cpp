#include<iostream>
using namespace std;
    void Print1toN(int n){
        if(n>=1) 
        {
            cout<<n<<" "; 
            Print1toN(n-1);
        }
    }
int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    Print1toN(n);
}