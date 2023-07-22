

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    int t;
    cin>>t;

    while(t--){
        ll dist,k;
        cin>>dist>>k;
        if(dist%k==0){
            cout<<"2\n"<<dist-1<<" "<<"1\n";
        }
        else{
            cout<<"1\n"<<dist<<endl;
        }
    }
    return 0;
}