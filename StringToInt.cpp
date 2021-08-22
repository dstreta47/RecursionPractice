#include <iostream>
using namespace std;

int stringToInt(char *a, int n){
    if(n==0){
        return 0;
    }
    
    int digit = a[n-1]-'0';
    int ans =stringToInt(a,n-1);
    
    return ans *10 +digit;
}

int main() {
    
    char a[] ="1234";
    int len = strlen(a);
    
    int x =stringToInt(a,len);
    cout<<x<<endl;
    cout<<x+1<<endl;
    return 0;
}
