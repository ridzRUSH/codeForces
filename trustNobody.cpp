

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int MOD =1e9 + 7;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> l(n);
        for(auto &i : l) cin>>i;

        int ans=-1;
        for(int i=0;i<=n ;i++){

            int cnt =0;
            for(auto it : l){
                if(i<it){
                    cnt++;
                }
            }
            if(cnt==i){
                ans=i;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
