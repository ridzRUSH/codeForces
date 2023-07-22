#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    while(n--){
        int size,no;

        cin>>size;
        int sum = 0,cnt=0 ,cnt1=0,cnt0 =0;
        for(int i =0 ;i<size;i++){
            cin>>no;
            if(no == 0){
                cnt0++;
            }else if(no == size){
                cnt1++;
            }
            else{
                sum+=no;
                cnt++;
            }
        }
        if(cnt0==size){
            cout<<0<<endl;
        }else if(cnt1 == size){
            cout<<-1<<endl;
        }else{
            cout<<sum/cnt<<endl;
        }
    }
    return 0;
}