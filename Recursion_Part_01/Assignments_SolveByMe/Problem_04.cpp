#include<iostream>
using namespace std;
     bool Check(int n){
        if(n==1) return true;
        if(n%2==0) return Check(n/2);
        else return false;
     }
int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    cout<<Check(n);
}