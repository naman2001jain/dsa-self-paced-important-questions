#include<iostream>
using namespace std;

int majorityElement(int arr[],int n){
    int moe = 0;
    int count = 0;
    for(int i=1;i<n;i++){
        if(arr[i-1]==arr[i]){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            count = 1;
            moe = i;
        }
    }
    count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[moe]){
            count++;
        }
    }
    if(count<=n/2){
        return -1;
    }
    return arr[moe];
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<majorityElement(arr,n);
    
}