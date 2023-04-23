#include<iostream>
#include<string>
using namespace std;

int main(){
    string s; 
    cin>>s;

    int al[26]={0};
    for(int i=0 ;i< s.size();i++){
        al[s[i]-'a']++;
    }
    int cnt =0;
    for(int i=0 ;i<26 ;i++){
        if(!al[i]) cnt++;
    }
    if(cnt % 2 ==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<< "IGNORE HIM!"<<endl;
    return 0;
}