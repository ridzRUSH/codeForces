#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    
    string cd ="codeforces";
    while(n--){
        string temp ;
        cin>>temp;
        int size = 10;
        int cnt=0;
        for(int i =0 ;i< 10 ;i++){
            if(temp[i]!=cd[i]){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}