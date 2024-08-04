#include<iostream>
using namespace std; 
    bool Check(int n){
        if(n==1) return true;
        if(n%2!=0) return false;
        Check(n/2);
    }
int main(){
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    int value=Check(n);
    if (value==1)
    {
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}