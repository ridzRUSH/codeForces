
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    int t =0 ; 
    cin>>t;

    while(t--){
        int a, b, c;
        cin>>a>>b>>c;

        if(a+b >= 10 || c+b >= 10 || a+c >= 10 ){
            cout<<"yes\n";
        }else{
            cout<<"no\n";
        }


    }




return 0;
}