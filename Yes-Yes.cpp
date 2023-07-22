
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    int t;
    cin>>t;
 
    while(t--){
        string a;
        cin>>a;
        int n = a.size();
        unordered_map<char,char> mp = {

            //  remeber stone paper & :)
            {'Y','s'},{'e', 'Y'},{'s','e'}
        };
        if(n==1){
            if(mp.find(a[0]) != mp.end()){
                cout<<"Yes\n";
            }else{
                cout<<"no\n";
            }
        }else{
            bool tell=0;
            for(int i=1 ;i<n ;i++){
                if(mp[a[i]]!= a[i-1]){
                    cout<<"no\n";
                    tell=1;
                    break;
                
                    
                }
            }
            if(!tell){
               cout<<"yes\n"; 
            }
            
        }
    }
return 0;

}
