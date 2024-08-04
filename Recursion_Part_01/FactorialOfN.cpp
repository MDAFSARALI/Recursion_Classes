#include<iostream>
using namespace std;
    int Factorial_of_N(int n){
        if(n==1) return 1;
        else return n*Factorial_of_N(n-1);
    }
int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    cout<<Factorial_of_N(n);
}