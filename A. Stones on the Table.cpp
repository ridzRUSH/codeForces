#include<iostream>
#include<string>
using namespace std;

int main(){
    int size;
    cin>>size;
    string s;
    cin>>s;
    int cnt=0;
    for(int i =0 ;i < size-1 ; i++){
        if(s[i]==s[i+1]) cnt++;
    }

    cout<<cnt<<endl;
    return 0;

}