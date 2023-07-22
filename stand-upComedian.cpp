
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    //  int n k x 

    int t=0;
    cin>>t;

    while(t--){
        int a1 , a2 , a3 , a4 ;

        cin>>a1>>a2>>a3>>a4;

        // int alice =0 ,bob=0 ;

        // with most happiness

        if(a1==0 ){
            cout<<1<<"\n";
        }
        else{
            int cnt=0 ;
            cnt=a1;
            // ak tera ak mera 
            cnt+= min(a2,a3)*2;

            // jokes remaning in hands 
            cnt+= min(a1 +1 , abs(a2-a3 )+ a4);
           
            cout<<cnt<<"\n";

        }

        
        

    }
    return 0;
}