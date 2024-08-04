#include<iostream>
using namespace std;
    void NoOfWays(int sr,int sc,int er,int ec,string s){
        if(sr==er && sc==ec) {
            cout<<s<<endl;
            return;
        }
        if(sr>er ||sc>ec) return;
        NoOfWays(sr,sc+1,er,ec,s+"R");
        NoOfWays(sr+1,sc,er,ec,s+"D");
    }
int main(){
    int sr,sc,er,ec;
    string s=" ";
    cout<<"Enter the value of sr,sc,er and ec: "<<endl;
    cin>>sr>>sc>>er>>ec;
    NoOfWays(sr,sc,er,ec,s);
}