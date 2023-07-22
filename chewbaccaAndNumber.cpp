#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(int);
int main(){
    ll n ;
    cin>>n;

    ll pow10 =1, gen_no=0,original;
    original =n;

    while(n){
        int temp = n% 10;
        if(n<10 && 9-temp==0){
            temp =temp;
        }
        else if(temp > (9-temp)){
            temp = 9-temp;
        }else{
            temp=temp;
        }
        gen_no= pow10*temp + gen_no;

        pow10=pow10*10;
        n=n/10;


    }
    cout<<gen_no<<"\n";
    return 0;
}
