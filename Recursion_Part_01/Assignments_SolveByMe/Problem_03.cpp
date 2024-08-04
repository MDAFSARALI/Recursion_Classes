// Question: 03 --->Print an increasing-decreasing sequence using recursion Exapmle: if n=5 , the output should be 1 2 3 4 5 4 3 2 1


#include<iostream>
using namespace std;
    void final_one(int i,int n){
        if(i>n) return;
        cout<<i<<" ";
        final_one(i+1,n);
        if(i!=n) cout<<i<<" ";    
    }
    int main(){
    int n;
    cout<<"Enter the number of n: "<<endl;
    cin>>n;
    final_one(1,n);
}