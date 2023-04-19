#include<iostream>
#include<string>
using namespace std;

int main(){
    string a;
    cin>>a;

    int cnt[3]={0};
    bool t = 0;
    string ans;
    int i=0;
    while(a[i]!= '\0'){
        if(a[i]=='+'){}
        else if(a[i]=='1') cnt[0]++;
        else if(a[i]=='2') cnt[1]++;
        else if(a[i]=='3') cnt[2]++;
        i++;
    }
    i=0;
    for(int j=0;j<cnt[0];j++){
        if(t) ans = ans + '+' + '1';
        else ans = '1';
        t=1; 
    }
    for(int j=0;j<cnt[1];j++){
        if(t) ans = ans + '+' + '2';
        else ans = '2';
        t=1; 
    }
    for(int j=0;j<cnt[2];j++){
        if(t) ans = ans + '+' + '3';
        else ans = '3';
        t=1; 
    }
    cout<<ans<<endl;
}