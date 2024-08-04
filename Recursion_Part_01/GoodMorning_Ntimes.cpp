#include<iostream>
using namespace std;

    void Print(int n,int i){
        if(i!=n+1) 
        {
            cout<<"Good Morning "<<endl;
            Print(n,i+1);
        }
    }
int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    int i=1;
    Print(n,i);
}