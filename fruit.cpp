#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int s,n;
    cin>>s>>n;
    vector<ll> min(s);
    set<string> st;

   for(int i=0; i<s ;i++){
       cin>>min[i];
   }
   vector<ll> max=min;
   sort(min.begin(), min.end());
   sort(max.begin(),max.end(),greater<ll>());

   unordered_map<string,ll> map;

   for(int i=0 ; i< n;i++){
    string temp ;
    cin>>temp;

    map[temp]++;
   }

    vector<ll> cnt;
    for(auto it= map.begin() ; it!= map.end() ; it++){
        cnt.push_back(it->second);
    }

    sort(cnt.begin(),cnt.end(), greater<ll>());
    
 
    ll maxi=0,mini=0;

    for(int i=0 ;i<cnt.size();i++){
        maxi+=(max[i]*cnt[i]);
        mini+=(min[i]*cnt[i]);

    }
    cout<<mini<<" "<<maxi<<"\n";
    return 0;

}