#include <iostream>

using namespace std;

int main(){
    int s ;
    cin>>s;
    string a;
    cin>>a;
    int cnt =0 ;
    for(int i =0 ;i < s ; i++){
        if(a[i]=='A') cnt++;
    }
    if(cnt > s-cnt) cout<< "Anton"<<endl;
    else if(cnt < s-cnt) cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
    return 0;
}