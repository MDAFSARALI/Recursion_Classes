#include<iostream>
using namespace std;
    int Power(int a,int b){
        if(b==0) return 1;
        return a*(Power(a,b-1));
    }
    int main(){
    int a,b;
    cout<<"Enter the value of a and b : "<<endl;
    cin>>a>>b;
    int ans= Power(a,b);
    cout<<"The power of "<<a<<" to the "<<b<<" is: "<<ans<<endl;
}