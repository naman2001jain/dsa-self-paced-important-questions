
#include <iostream>

using namespace std;

int partition(int *arr,int low,int high){
    int pivot = arr[low];
    int i=low,j=high;
    while(i<j){
        while(arr[i]<=pivot){i++;}
        while(arr[j]>pivot){j--;}
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}

int kth_largest(int* arr,int low,int high,int k){
    while(low<=high){
        int pivot = partition(arr,low,high);
        if(pivot==k-1){
            return pivot;
        }else if(pivot>k-1){
            high=pivot-1;
        }else{
            low=pivot+1;
        }
    }
    return -1;
}

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<arr[kth_largest(arr,0,n-1,k)];
    
}








