#include<iostream>
#include<string>
using namespace std;

int main(){
    int no,times;
    cin>>no>>times;

    while(times--){
        if(no % 10 ==0 ){
            no=no/10;
        }else{
            no--;
        }
    }
    cout<<no<<endl;
    return 0;
}