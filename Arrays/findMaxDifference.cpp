#include <iostream>
using namespace std;

int maxDifference(int arr[],int n){
    int maxd = arr[1]-arr[0];
    int minValue = arr[0];
    for(int i=1;i<n;i++){
        maxd = max(maxd,arr[i]-minValue);
        minValue = min(minValue,arr[i]);
    }
    return maxd;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxDifference(arr,n);
    return 0;
}
