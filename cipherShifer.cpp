
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    int t;
    cin>>t;
    while(t--){
        string s,ans;
        int n;
        cin>>n>>s;
        if(n==1){
            cout<<s;
        }
        else{
            int j=0;
            for(int i=1 ;i<n;i++){
                // cout<<s[j]<<" ";
                if(s[i]==s[j]){
                    ans= ans + s[i];
                    j=i;
                    j++;
                    i++;
                    // cout<<" .."<<s[j]<<"..";
                }

            }
            cout<<ans<<"\n";


        }
    }
    return 0;
}