#include<iostream>
#include<string>
using namespace std;

int main(){
    string a,b;
    cin>>a>>b;
    bool t=1;
    int i=0;
    while(a[i]!='\0'){
        if(!(a[i]==b[i] || a[i]==b[i]-32 || a[i]-32 == b[i])){
            if('A'<= a[i] && a[i]<= 'Z') a[i]=a[i]+32;
            if('A'<= b[i] && b[i]<= 'Z') b[i]=b[i]+32;
            if(a[i]<b[i]){
                cout<<"-1"<<endl;
                t=0;
                break;
            }else{
                cout<<"1"<<endl;
                t=0;
                break;
            }
        }
        i++;
    }
    if(t) cout<<"0";
    return 0;
}