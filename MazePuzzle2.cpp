#include<iostream>
using namespace std;
    int NoOfWays(int row,int col){
        if(row==1 && col==1) return 1;
        if(row<1 ||col<1) return 0;
        int rightWays=NoOfWays(row,col-1);
        int downWays=NoOfWays(row-1,col);
        return rightWays+downWays;
    }
int main(){
    int sr,sc;
    cout<<"Enter the value of sr and sc: "<<endl;
    cin>>sr>>sc;
    cout<<"The No of Ways: "<<NoOfWays(sr,sc);
}