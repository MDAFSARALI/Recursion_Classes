#include <iostream>
using namespace std;
int StairWays(int n)
{
    if (n==1) return 1;
    if (n==2) return 2;
    if (n==3) return 4;
    else
        return StairWays(n - 1) + StairWays(n - 2) +  StairWays(n - 3);
}
int main()
{
    int n;
    cout << "Enter the size of the stair: " << endl;
    cin >> n;
    cout << StairWays(n) << endl;
}