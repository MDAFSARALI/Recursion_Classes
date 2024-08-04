#include <iostream>
using namespace std;
   int NoOfWays(int n){
    if(n==1 || n==2) return n;
    else return NoOfWays(n-1)+NoOfWays(n-2);
   } 
int main()
{
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    cout<<NoOfWays(n);
}