#include<bits/stdc++.h>
using namespace std;
// not the correct solution
int main(){

    int n ;
    cin>>n;
    while(n--){
        long long s;
        cin>>s;
        vector<long long> a(s);
        for(int i=0;i<s;i++){
            cin>>a[i];
        }
        long long ans=0;
        sort(a.begin(),a.end());
        ans=a[0];
        s--;
        long long mul =a[0]*a[1];
        if(mul > ans){
            ans=mul;
        }
        mul=a[s]*a[s-1];
        if(mul > ans){
            ans=mul;
        }
        cout<<ans<<endl;
    }
    return 0;
}