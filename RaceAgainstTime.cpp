
// 17 -06

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;

    if(t1>t2) swap(t1,t2);
    double h1,h2,h3;
	h3=s/5.0;
	h2=(s/60.0+m)/5.0;
	h1=(m/60.0+s/3600.0+h);
	// if(h1>12) h1-=12;
	// if(h2>12) h2-=12;
	// if(h3>12) h3-=12;
	if((t1<h1&&h1<t2)||(t1<h2&&h2<t2)||(t1<h3&&h3<t2)){
		if((h1>t2)||(h2>t2)||(h3>t2)||(h1<t1)||(h2<t1)||(h3<t1)){
			cout<<"no\n";
			return 0;
		}
	}
	cout<<"yes\n";
	return 0;
}