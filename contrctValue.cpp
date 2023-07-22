
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(int);
int main(){
    int n ;
    cin>>n;

    while(n--){
        solve(n);
    }
    return 0;
}

void solve(int z){
    int n = 1;
    cin>>n;

    vector<int> a(n),b;
    for(auto &i : a) cin>>i;
    b.push_back(a[0]);
    for(int i=1;i<n;i++){
        if(a[i]!=a[i-1]){
            b.push_back(a[i]);
        }
    }
    if(b.size()==1) {
        cout<<"1\n";
        return;
    }

    int ans=2;

    for(int i=1 ; i+1 <b.size();i++){
        if(b[i-1]<b[i] && b[i]> b[i+1]) ans++;
        if(b[i-1]>b[i] && b[i]<b[i+1]) ans++;
    }
    cout<<ans<<endl;

}