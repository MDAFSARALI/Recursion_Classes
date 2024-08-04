#include<iostream>
using namespace std;
    int Suming(int &sum,int n){
        if(n>=1){
            sum+=n;
            Suming(sum,n-1);
        }
        return sum;
    }
int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    int i=1;
    int sum=0;
    Suming(sum,n);
   cout<<"The sum is : "<<sum<<endl;
}