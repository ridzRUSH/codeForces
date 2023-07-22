
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    //  int n k x 

    int t=0;
    cin>>t;

    while(t--){

        int n,k,x;
        cin>>n>>k>>x;

        if(k==n && x!=k){
            cout<<"yes\n1\n"<<k<<"\n";
        }
        else{

            for(int i=1 ; i<=k ;i++ ){

                if(i==x){
                    continue;
                }
                else if((k-i)!=x){
                    cout<<"yes\n2\n"<<k-i<<" "<<i<<"\n";
                }
            }
        }
        


    }
    cout<<"no\n";
    return 0;
}