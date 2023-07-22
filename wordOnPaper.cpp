#include<bits/stdc++.h>
using namespace std;

int main(){
    int t= 0 ;
    cin>>t;
    while(t--){
        string s="";
        for(int i=0 ;i<64 ; i++){
            char a ;
            cin>>a;
            if(a != '.'){
                s= s +a;
            }
        }
        cout<<s<<"\n";

    }
    return 0;
}