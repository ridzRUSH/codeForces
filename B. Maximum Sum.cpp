#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define loop(a,b,c) for(int a= b ;a<c;a++)

void solve(int z){
    int s,k;
    cin>>s>>k;
    vector<ll> nums(s,0);
    ll sum=0;
    for(int i=0;i<s;i++){
        cin>>nums[i];
        sum+=nums[i];
    }
    sort(nums.begin() , nums.end());
    vector<ll> pre(s+1);
    pre[0]=0;

    loop(i,1,s+1){
        pre[i]=pre[i-1]+nums[i-1];
    }

    vector<ll> post(s+1);
    post[s]=nums[s-1];

    for(int i=s-1;i>=0;i--){
        post[i]=nums[i-1]+post[i+1];
    }
    ll ans=0;
    loop(i, 0, k + 1){
        int x = i;
        int y = k - i;
 
        int current = pre[2 * x];
        if(y)
            current += post[s - y + 1];
 
 
 
        ans = max(ans, sum - current);
    }
 
    cout << ans << endl;
}
   



int main(){
    int n ;
    cin>>n;

    while(n--){
        solve(n);
    }
    return 0;
}

