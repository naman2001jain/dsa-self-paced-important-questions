#include<iostream>
#include<vector>
#include<stdlib.h>


using namespace std;

int solution(int* arr,int n,int m){
    std::sort(arr,arr+n);
    int maxSum=arr[0];
    for(int i=1;i<n-m+1;i++){
        if(arr[i]>maxSum){
            maxSum = arr[i];
        }
    }
    return maxSum;
}

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<solution(arr,n,m);
}