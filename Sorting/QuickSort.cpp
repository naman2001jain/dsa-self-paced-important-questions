#include<iostream>
using namespace std;

int partition(int* arr,int low,int high){
    int i=low,j=high;
    int pivot = arr[low];
    while(i<j){
        while(arr[i]<=pivot) i++;

        while(arr[j]>pivot) j--;

        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}

void quickSort(int* arr,int low,int high){
    if(low<high){
        int pivot = partition(arr,low,high);
        quickSort(arr,low,pivot-1);
        quickSort(arr,pivot+1,high);
    }
}


void printArray(int arr[],int n){
    cout<<"modified array is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quickSort(arr,0,n-1);
    printArray(arr,n);
}