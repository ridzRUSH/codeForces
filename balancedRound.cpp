
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t=0 ;
    cin>>t;

    while(t--){
        int n=0,k;
        cin>>n>>k;

        vector<int> a(n);
        for(int i=0 ;i<n ; i++){
            cin>>a[i];
        }
        sort(a.begin() , a.end());
        int cnt =0 , maxi = INT_MIN;

        for(int i= 0 ;i<n ;i++){
            if(cnt>=1 && (a[i]- a[i-1]) <= k){
                cnt++;
            }else{
                cnt=1;
            }
            

            if(maxi <= cnt ){
                maxi = cnt;
            }
            // cout<<cnt<<" ";
        }

        cout<<"\n"<<abs(n - maxi)<<"\n";

    }
    return 0;
}