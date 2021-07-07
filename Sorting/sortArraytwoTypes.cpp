#include<iostream>
using namespace std;

void sortTwoTypes(int *arr,int low,int high){
    int i=low,j=high;
    int pivot = arr[low];
    while(i<j){
        while(arr[i]<0) i++;
        while(arr[j]>=0) j--;
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[j],arr[low]);
}

void printArray(int arr[],int n){
    cout<<"modified array is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sortTwoTypes(arr,0,n-1);
    printArray(arr,n);
}