// Q:Write a program to calculate the sum of the digits of a given positive integer using
// recursion.
#include <iostream>
using namespace std;
int SumOfDigit(int n, int &ans)
{
    if (n == 0)
        return 0;
    else
    {
        ans += n % 10;
        SumOfDigit(n / 10, ans);
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the positive integer : " << endl;
    cin >> n;
    int ans = 0;
    cout << "The answer is : " << SumOfDigit(n, ans);
}