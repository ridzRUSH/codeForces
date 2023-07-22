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
    int n;
    cin>>n;

    vector<int> e,o;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        if(temp%2==0) e.push_back(temp);
        else o.push_back(temp);
    }
    sort(e.begin(),e.end());
    sort(o.begin(),o.end());

    if(e.size()==n || o.size()==n){
        cout<<"yes\n";
        return ;
    }
    cout<<(e[0]<o[0] ? "no\n" : "yes\n");
}