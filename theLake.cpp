#include<bits/stdc++.h>
using namespace std;
#define ll long long
int bfs(int i, int j , vector<vector<int>>& a,vector<vector<int>>& vis){
    if(a[i][j]==0) return 0;

    queue<pair<int,int>> q;
    q.push({i,j});
    vis[i][j]=1;
    int ans= 0;
    while(!q.empty()){
        int x=q.front().first;
        int y= q.front().second;
        ans+=a[x][y];
        q.pop();

        int dx[]={0,1,0,-1};
        int dy[]={1,0,-1,0};
        for(int k=0 ; k<4;k++){
            int nx= x+dx[k];
            int ny=y+dy[k];

            if(nx>=0 && ny>= 0 && nx< a.size() && ny < a[0].size() && vis[nx][ny]==0 && a[nx][ny] != 0){
                vis[nx][ny]=1;
                q.push({nx,ny});
            }
        }
        
        
    }
    return ans;
}
void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> a(n,vector<int>(m,0)), vis(n,vector<int> (m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m ;j++){
            cin>>a[i][j];
        }
    }
    int ans=0;
    for(int i=0;i<n ;i++){

        for(int j=0;j<m ;j++){
            if(!vis[i][j] && a[i][j]!=0){
                int temp=bfs(i,j,a,vis);
                ans=max(ans,temp);
            }
        }
    }
    cout<<ans<<endl;

    
}


int main(){
    int n ;
    cin>>n;

    while(n--){
        solve();
    }
    return 0;
}

