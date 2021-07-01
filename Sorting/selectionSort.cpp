#include<iostream>
using namespace std;

void selectionSort(int *arr,int n){
    int min = 0;
	for(int i=0;i<n;i++){
		min = i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min]){
				min = j;
			}
		}
		swap(arr[min],arr[i]);
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
    selectionSort(arr,n);
    printArray(arr,n);
}