#include<bits/stdc++.h>

using namespace std;
int main(){
    int n ;
    cin>>n;

    while(n--){
        int size ;
        cin>>size;
        vector<string> temp(size);
        for(int i = 0 ;i<size;i++){
            int min ;
            cin>>min;
            string a;
            cin>>a;
            temp[i]= to_string(min) + a;

        }
        sort(temp.begin(),temp.end());
        int f = -1 ,b=-1, s= -1;
        bool fi= 1, se=1 ,fs =1;
        for(int i =0 ;i<size ;i++){
            if(temp[i][1]=='1' && temp[i][2]=='0' && fi){
                f = (int)temp[i][0] - 48;
                fi=0;
            }
            if(temp[i][1]=='0' && temp[i][2]=='1' && se){
                s =(int)temp[i][0] - 48;
                se = 0;
            }
            if(temp[i][1]=='1' && temp[i][2]=='1' && fs){
                b =(int)temp[i][0] - 48;
                fs=0;
            }
            if(!fi && !se && !fs) break;
        }
        if( f== -1 || s ==-1){
            cout<<b<<endl;
        }
        else{
            if(b == -1 ){
                cout<<f+s<<endl;
            }else{
                (f+s)<b ? cout<<f+s<<endl : cout<<b<<endl;
            }
        }
    }
    return 0;
}


