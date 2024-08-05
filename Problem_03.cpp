#include <iostream>
using namespace std;
    int CountNumberOfWaysToReduce(int n,int &ans){
        if(n==0) return 0;
        if(n%2==0) {
            ans++;
            CountNumberOfWaysToReduce(n/2,ans);
        }
        else{
            ans++;
            CountNumberOfWaysToReduce(n-1,ans);
        }
        return ans;
    }
int main()
{
    int n;
    cout << "Enter the positive integer : " << endl;
    cin >> n;
    int ans=0;
    cout<<CountNumberOfWaysToReduce(n,ans);
}