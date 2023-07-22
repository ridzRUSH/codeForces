
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int MOD =1e9 + 7;

int main(){
    int t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        vector<int> a(n) ,b(n);
        for(auto &i : a) cin>>i;
        for(auto &i : b) cin>>i;

        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<int>());
        ll result=1;
        for(int i=0;i<n;i++){
            int temp = a.size() - (upper_bound(a.begin(),a.end(),b[i]) - a.begin());
            result = result * max(temp -i ,0) % MOD;
        }
        cout<<result<<"\n";

    }
    return 0;
}