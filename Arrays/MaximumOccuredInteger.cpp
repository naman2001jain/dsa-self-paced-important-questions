#include <iostream>
using namespace std;

int maxOccured(int L[], int R[], int n, int maxx){
    int arr[maxx] = {0};
    for(int i=0;i<n;i++){
        arr[L[i]]++;
        arr[R[i]+1]--;
    }
    int maxIndex = 0;
    for(int i=1;i<maxx;i++){
        arr[i] += arr[i-1];
        if(arr[maxIndex]<arr[i]){
            maxIndex = i;
        }
    }
    return maxIndex;
}
int main()
{   
    int n;
    cin>>n;
    int L[n],R[n];
    for(int i=0;i<n;i++){
        cin>>L[i];
    }
    for(int i=0;i<n;i++){
        cin>>R[i];
    }
    int maxx = 0;
    for(int i=0;i<n;i++){
        if(R[i]>=maxx){
            maxx = R[i];
        }
    }
    
    cout<<maxOccured(L,R,n,maxx);

    return 0;
}
