// 19 may

#include<bits/stdc++.h>
using namespace std;


void solve(int z){
    int n;
    string s;
    cin>>n>>s;
    unordered_map<string,int> map;

    int j=0;
    string temp;
    int cnt=0;
    for(int i=0;i<n;i++){
        temp+=s[i];
        if(i+j+1 >=2){
            if(map.find(temp) == map.end()) {
                cnt++;
                map[temp];
            }
            j++;
            temp.erase(temp.begin());
        }
        
    }
    cout<<cnt<<"\n";
}
int main(){
    int n ;
    cin>>n;

    while(n--){
        solve(n);
    }
    return 0;
}