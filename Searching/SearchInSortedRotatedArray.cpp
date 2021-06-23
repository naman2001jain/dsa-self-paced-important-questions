
#include <iostream>

using namespace std;

int binarySearch(int arr[],int low,int high,int x){
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>x){
            return binarySearch(arr,low,mid-1,x);
        }else if(arr[mid]<x){
            return binarySearch(arr,mid+1,high,x);
        }
        else{
            return mid;
        }
    }
    return -1;
}

int solution(int arr[],int low,int high,int x){
    int mid = (low+high)/2;
    if (arr[mid]==x){
        return mid;
    }
    if(arr[low]<arr[mid]){//left half is sorted.
        if(arr[low]<=x && arr[mid]>x){
            //element is present in left half.
            return binarySearch(arr,low,mid-1,x);
        }else{
            //element is not present in left half.
            return solution(arr,mid+1,high,x);
        }
    }else{//right half is sorted.
        if(arr[mid]<x && x<=arr[high]){
            //element is present in right half.
            return binarySearch(arr,mid+1,high,x);
        }
        else{
            //element is not present in right half.
            return solution(arr,low,mid-1,x);
        }
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
    cout<<solution(arr,0,n-1,x);
    return 0;
}
