#include <iostream>
using namespace std;

char words[][10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

void printspelling(int n){
    if(n==0){
        return;
    }
    
    printspelling(n/10);
    int digit = n%10;
    cout<<words[digit]<<" ";

    return;
}
int main() {
    int n;
    cin>>n;
    printspelling(n);
    
    return 0;
}
