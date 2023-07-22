

#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(int);
int main(){
    int n ;
    cin>>n;
    while (n--)
    {
        solve(n);
    }
    return 0;
}

void solve(int z){
    int n,k;
    cin>>n>>k;

    vector<pair<int,int>> a(n) , b(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second=i;
    }
    for(int i=0 ;i<n;i++){
        cin>>b[i].first;
        b[i].second=i;
    }

    sort(a.begin() ,a.end());
    sort(b.begin(),b.end());
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        ans[a[i].second]=b[i].first;
    }
    for(auto x : ans){
        cout<<x<<" ";
    }
    cout<<"\n";
}