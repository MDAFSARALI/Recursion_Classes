// Q:2 Write a program to calculate the reverse of a given positive integer using recursion.
#include <iostream>
using namespace std;
    int Reversed(int n,int &ans){
        if(n==0) return 0;
        else{
            ans=ans*10+(n%10);
            Reversed(n/10,ans);
        }
        return ans;
    }
int main()
{
    int n;
    cout << "Enter the positive integer : " << endl;
    cin >> n;
    int ans=0;
    cout<<Reversed(n,ans);
    
}