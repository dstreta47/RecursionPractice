#include <iostream>
using namespace std;

int firstOcc(int *a,int n,int key){
    if(n==0){
        return -1;
    }
    
    if(a[0]==key){
        return 0;
    }
    
    int i=firstOcc(a+1, n-1, key);
    if(i==-1){
        return -1;
    }
    return i+1;
}

int lastocc(int *a, int n, int key){
    if(n==0){
        return -1;
    }
    int i = lastocc(a+1, n-1, key);
    if(i==-1){
        if(a[0]==key){
            return 0;
        }
        else{
        return -1;
        }
}
return i+1;
}


int main() {
    int arr[]={1,2,7,3,4,5,6,7,10,7,3,11,55,33};
    int key =7;
    int n = sizeof(arr)/ sizeof(int);
    
    cout<< lastocc(arr, n, key);
    return 0;
}
