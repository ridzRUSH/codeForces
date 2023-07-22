#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;

    while(n--){
        int size =0;
        cin>>size;
        int cnt=0;
        int ans=0;
        for(int i =0 ;i<size;i++){

            int x;
            cin>>x;
            if(x==0){
                cnt++;
                if(ans<=cnt){
                    ans=cnt;
                }
            }else{
                cnt=0;
            }

        }
        cout<<ans<<endl;
    
    }
    return 0;

}
    