#include <iostream>
using namespace std;

int firstOccurence(int arr[],int low,int high,int x){
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==x){
            if(arr[mid-1]!=arr[mid]||mid==0){
                return mid;
            }else{
                return firstOccurence(arr,low,mid-1,x);
            }
            
        }
        if(arr[mid]>x){
            return firstOccurence(arr,low,mid-1,x);
        }
        if(arr[mid]<x){
            return firstOccurence(arr,mid+1,high,x);
        }
    }
    return -1;
}

int lastOccurence(int arr[],int low,int high,int x,int n){
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==x){
            if(arr[mid+1]!=arr[mid] || mid==n-1){
                return mid;
            }
            else{return lastOccurence(arr,mid+1,high,x,n);}
        }
        if(arr[mid]>x){
            return lastOccurence(arr,low,mid-1,x,n);
        }
        if(arr[mid]<x){
            return lastOccurence(arr,mid+1,high,x,n);
        }
    }
    return -1;
}

int solution(int arr[],int low,int high,int x,int n){
    int fO = firstOccurence(arr,low,high,x);
    int lO = lastOccurence(arr,low,high,x,n);
    if(fO==-1){//element is not present
        return -1;
    }
    else{
        return lO - fO + 1;
    }
}

int main()
{
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<solution(arr,0,n-1,x,n);
}
