
#include<bits/stdc++.h>
using namespace std;
#define ll long long
// void solve(int);
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int toast = (l*k)/nl;
    int slice = (c*d);

    int salt = p/np;

    int ans= min(toast, slice);
    
    ans=min(ans,salt);
    
    cout<<ans/n<<"\n";
    return 0;

}