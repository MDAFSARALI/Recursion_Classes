/*
01 Predict the output:
int fun(int n) {
if (n <= 1) return 1;
if (n % 2 == 0) return fun(n / 2);
return fun(n / 2) + fun(n / 2 + 1);
}

*/
#include <iostream>
int fun(int n)
{
    if (n <= 1)
        return 1;
    if (n % 2 == 0)
        return fun(n / 2);
    return fun(n / 2) + fun(n / 2 + 1);
}
using namespace std;
int main()
{
    int n = 10;
    cout<<fun(n);
}