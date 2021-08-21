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

void allOcc(int *a,int i,int n,int key){
    if(i==n){
        return;
    }
    if(a[i]==key){
        cout<<i<<",";
    }
    allOcc(a,i+1,n,key);
}

int storOcc(int *a, int i,int n,int key,int *out,int j){
    if(i==n){
        return j;
    }
    if(a[i]==key){
        out[j]=i;
        return storOcc(a,i+1,n,key,out, j+1);
    }
    return storOcc(a,i+1,n,key,out,j);
}

int main() {
    int arr[]={1,2,7,3,4,5,6,7,10,7,3,11,55,33};
    int key =7;
    int n = sizeof(arr)/ sizeof(int);
    
    allOcc(arr,0, n, key);
    int output[100];
    int cnt =storOcc(arr,0,n,key,output,0);
    cout<<"count"<<cnt<<endl;
    for(int k=0;k<cnt;k++){
        cout<<output[k]<<"";
    }
    return 0;
}
