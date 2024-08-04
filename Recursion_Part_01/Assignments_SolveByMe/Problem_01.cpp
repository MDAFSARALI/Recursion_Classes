// Question:01-->Write a program to calculate the sum of odd numbers between a and b (both inclusive) using recursion.

#include <iostream>
using namespace std;
int sum = 0;
int SumOfOdd(int a, int b)
{
    if (b < a)
        return 0;
    else
    {
        if (a % 2 != 0)
        {
            sum = sum + a + SumOfOdd(a + 2, b);
        }
        else
        {
            SumOfOdd(a + 1, b);
        }
    }
    return sum;
}
int main()
{
    int a, b;
    cout << "Enter the value of a and b: " << endl;
    cin >> a >> b;
    cout << SumOfOdd(a, b) << endl;
}