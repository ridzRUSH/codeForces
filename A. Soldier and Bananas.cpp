#include<iostream>
#include<string>
using namespace std;

int main(){
    int cost1st , money , need;
    cin>> cost1st>>money>>need;
    int mn=0;
    for(int i=1;i<=need ;i++){
        int cost =  cost1st * i;
        mn +=cost;
    }
    if(mn - money > 0 ) cout<<mn - money<<endl;
    else cout<<"0"<<endl;
    return 0;
}