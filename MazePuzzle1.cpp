#include<iostream>
using namespace std;
    int NoOfWays(int sr,int sc,int er,int ec){
        if(sr==er && sc==ec) return 1;
        if(sr>er ||sc>ec) return 0;
        int rightWays=NoOfWays(sr,sc+1,er,ec);
        int downWays=NoOfWays(sr+1,sc,er,ec);
        return rightWays+downWays;
    }
int main(){
    int sr,sc,er,ec;
    cout<<"Enter the value of sr,sc,er and ec: "<<endl;
    cin>>sr>>sc>>er>>ec;
    cout<<"The No of Ways: "<<NoOfWays(sr,sc,er,ec);
}