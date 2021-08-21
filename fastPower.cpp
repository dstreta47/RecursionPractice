#include <iostream>
using namespace std;

int power(int a,int n){
    if(n==0){
        return 1;
    }
    return a * power(a,n-1);
}

int improvedPower(int a, int n){
    if(n==0){
        return 1;
    }
    int ans = improvedPower(a,n/2);
    ans *= ans;
    
    if(n&1){
        return ans*a;
    }
    return ans;
}

int main() {
    int a,n;
    cin>>a>>n;
  //  cout<<power(a,n)<<endl;
    cout<<improvedPower(a,n)<<endl;
    return 0;
}
