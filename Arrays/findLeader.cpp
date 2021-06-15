#include<bits/stdc++.h>

using namespace std;

vector<int> findLeader(int a[],int n){
    vector<int> temp;
    int maxValue = a[n-1];
    temp.push_back(maxValue);
    for(int i=n-2;i>=0;i--){
        if(a[i]>=maxValue){
            maxValue = a[i];
            temp.push_back(maxValue);
        }
    }
    reverse(temp.begin(), temp.end());
    return temp;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> result = findLeader(arr,n);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
}
