#include<iostream>
using namespace std;

int findRepeating(int arr[],int n){
    int boolArray[n-1];
    for(int i=0;i<n;i++){
        if(boolArray[arr[i]]){
            return arr[i];
        }
        boolArray[arr[i]] = true;
    }
    return -1;
}

int main(){

    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<findRepeating(arr,n);
}