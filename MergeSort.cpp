#include<iostream>
using namespace std;

void merge(int* arr,int low,int mid,int high){
    int i=low,j=mid+1;
    int k=low;
    int b[high+1];
    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
            b[k] = arr[i];
            i++;
        }else{
            b[k]=arr[j];
            j++;
        }
        k++;
    }
    if(i>mid){
        while(j<=high){
            b[k] = arr[j];
            k++;
            j++;
        }
    }else{
        while(i<=mid){
            b[k] = arr[i];
            k++;
            i++;
        }
    }
    for(int i=low;i<=high;i++){
        arr[i] = b[i];
    }
}

void mergeSort(int* arr,int low,int high){
    if(low<high){
        int mid = (low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
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
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    mergeSort(arr,0,n-1);
    printArray(arr,n);
}

