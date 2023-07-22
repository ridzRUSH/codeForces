#include<bits/stdc++.h>
using namespace std;
void solve(int i){
    string s;
    cin>>s;

    set<char> a;
    for(int i=0;i<s.size()/2;i++){
        a.insert(s[i]);
    }
    cout<<(a.size()>1?"yes\n":"no\n");

}
int main(){
    int n ;
    cin>>n;


    while(n--){
        solve(n);
    }
    return 0;
}

