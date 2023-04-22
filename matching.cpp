#include<iostream>
#include<string>
using namespace std;

int main(){
    int n ;
    cin>> n;

    while (n--)
    {   
        int ans =1;
        string s;
        cin>>s;

        if(s[0]=='0'){
            ans=0;
        }
        for(int i=0 ;i< s.size();i++){
            if(s[i]=='?'){

            
            if( i== 0 ){
                ans*=9;
            }else{
                ans*=10;
            }

            }
        }
        cout<<ans<<endl;
    }
    return 0;
    
}
