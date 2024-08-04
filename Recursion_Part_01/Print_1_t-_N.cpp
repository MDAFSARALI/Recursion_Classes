#include<iostream>
using namespace std;
    void PrintNto1(int n, int i){
        if(i!=n+1){
            cout<<i<<" ";
            PrintNto1(n,i+1);
        }
    }
int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    int i=1;
    PrintNto1(n,i);
}