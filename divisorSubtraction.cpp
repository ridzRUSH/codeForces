
#include<bits/stdc++.h>
using namespace std;
#define ll long long


/*


vector<ll> seive(int n ){
    vector<bool> isPrime(n+1 ,true);
    for(int i=2 ;i*i<=n ;i++){
        if(isPrime[i]){
            for(int j= 2*i ;j<=n ;j=j+i){
                isPrime[j]=0;
            }
        }
    }

    vector<ll> P;

    for(int i=2 ;i<=n ; i++){
        if(isPrime[i]) P.push_back(i);
    }

    return P;


}

*/

// 1. find the smallet prime 

ll helper(ll n ){
    for(ll i=2 ; i*i <= n ;i++){
        if( n % i == 0 ) return i ;
    }
    return n ; 
}

int main(){

    ll n;
    cin>>n;
    ll cnt = 0 ;

    if(n %2 == 0 ) cout <<n/2<<" \n ";

    else {

        // as n is odd so its diviser is algo going to be odd 
        // and on subtraction of odd - odd we get even 
        // for even half is ans 
        n = n - helper(n);
       

        cout<< 1 + n / 2<<"\n";
    }
    return 0;

    


}