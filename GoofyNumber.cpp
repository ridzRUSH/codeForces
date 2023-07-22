
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n ;
    cin>>n;
    set<int> st;
    int temp = n;
    while(temp){
        st.insert(temp%10);
        temp= temp/10;
    }

    int cnt = 0 ;

    for(auto it = st.begin() ; it!= st.end() ; it++){
        if(n%*it==0){

            cnt++;
        }
    }

    if(cnt == st.size()){
        cout<<"happier";
    }else if(cnt == 0){
        cout<<"upset";
    }else{
        cout<<"happy";
    }
    cout<<endl;
    return 0;
}