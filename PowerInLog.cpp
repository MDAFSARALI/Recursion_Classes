#include <iostream>
using namespace std;
    int PowerInLog(int base,int power){
        if(power==1) return base;
        if(power%2==0){
            return PowerInLog(base,power/2)*PowerInLog(base,power/2);
        }
        else{
            return PowerInLog(base,power/2)*PowerInLog(base,power/2)*base;
        }
    }
int main()
{
    int base,power;
    cout << "Enter the number of base and power: " << endl;
    cin >> base>>power;
   cout<<PowerInLog(base,power);
}