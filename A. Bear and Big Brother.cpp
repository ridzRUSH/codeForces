#include<iostream>
#include<string>
using namespace std;

int main(){
    int a,b,cnt =0;
    cin>>a>>b;
    //a>b
    while(a<=b){
        a=a*3;
        b=b*2;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}