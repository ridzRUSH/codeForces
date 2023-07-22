#include<bits/stdc++.h>
using namespace std;

int main(){
    int t=0 ; 
    cin>>t;
    while(t--){

        int n =0 ;
        cin>>n;

        vector<vector<int>> a (n ,vector<int>(2));
        int ans=-1 , max= INT_MIN;
        for(int i=0 ; i< n ;i++){
            cin>>a[i][0]>> a[i][1]; 
            if(a[i][0]<= 10 && a[i][1]>= max){
                max= a[i][1];
                ans=i;
            }
        }
        cout<<ans+1<<endl;
        
    }
    return 0;

}