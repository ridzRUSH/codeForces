#include<bits/stdc++.h>
using namespace std;

int main(){

    int n ;
    cin>>n;
    while(n--){
        int s,t;
        cin>>s>>t;
        vector<int> a(s),b(s);
        for(int i=0;i<s;i++){
            cin>>a[i];
        }
        for(int i=0;i<s;i++){
            cin>>b[i];
        }
        int ans=-1,max=INT_MIN;
         for(int i=0;i<s;i++){
            if(a[i]<=t){
                if(max<b[i]){
                    max=b[i];
                    ans=i;
                }
            } 
            t--;          
        }
        ans==-1?cout<<ans<<endl:cout<<ans+1<<endl;
    }
    
}