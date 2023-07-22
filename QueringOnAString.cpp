
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void helper(string& s , int i , int j){
    
    
    reverse(s.begin()+i ,s.begin()+j);
    reverse(s.begin()+i ,s.begin()+j+1);
    
}


int main(){
    int n;
    string s;

    cin>>s>>n;

    vector<vector<int>> roll(n,vector<int>(3,0));

    for(int i=0 ;i<n ; i++){
        for(int j=0 ;j<3;j++){
            cin>>roll[i][j];
        }
    }


    for(int i=0 ;i<n ;i++){
            int l = roll[i][0];
            int r= roll[i][1];

        if(l!=r){
            int k= roll[i][2];
            int size = r-l-1;

            k=k%size;

            for(int j=0 ;j<k;j++){

                    helper(s,l-1,r-1);
                    
                // cout<<"hi "<<s <<" \n";
                
            }
        }
    }

    cout<<s;

    return 0;

}
