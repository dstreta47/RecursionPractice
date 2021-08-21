
#include <iostream>
using namespace std;

bool ArraySorted(int *a, int n){
    if(n==0 or n==1){
        return true;
    }
    
    if(a[0]<a[1] and ArraySorted(a+1, n-1)){
        return true;
    }
    return false;
}

int main() {
    int arr[] = {1,2,3,14,75};
    int n= sizeof(arr)/ sizeof(int);
    
    cout<< ArraySorted(arr,n)<<endl;
    return 0;
}
