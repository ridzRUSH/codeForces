
// 25 may 

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    int t;
    cin>>t;
    while(t--){
        set<int> st;
        int n;
        string s;
        cin>>n>>s;
        int cnt=0;
        st.insert(cnt);
        for(int i=0;i<n;i++){
            if(s[i]=='<'){
                cnt++;
                st.insert(cnt);
            }else{
                cnt--;
                st.insert(cnt);
            }
        }
        int ans=st.size();
        if(n==1){
            ans=0;
        }


        cout<<ans<<"\n";
    }
}