#include<bits/stdc++.h>
using namespace std;
#define ll long long


// is pime

bool check_prime(int n) {
  bool is_prime = true;

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    is_prime = false;
  }

  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  return is_prime;
}

int main(){

    int num=0;
    cin>>num;

    int y = num/2;

    int a = y , b = num-y;

    while(check_prime(a) || check_prime(b)){
        a--;
        b++;
    }

    cout<<a<<" "<<b<<"\n";

    return 0;



}