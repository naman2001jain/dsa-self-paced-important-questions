//find if there is a pair whose sum of elements is equal to given sum.

#include<iostream>
using namespace std;

bool ifPair(int arr[],int n, int s){
    int left = 0,right = n-1;
    while(left<=right){
        if((arr[left]+arr[right]) > s){
            right--;
        }else if((arr[left]+arr[right]) < s){
            left++;
        }else{
            return true;
        }
    }
    return false;
}

bool ifTriplet(int arr[],int n,int s){
    for(int i=0;i<n;i++){
        int low=i+1,high=n-1;
        while(low<=high){
            if((arr[low]+arr[high]) > s - arr[i]){
                high--;
            }
            else if((arr[low]+arr[high]) < s - arr[i]){
                low++;
            }
            else{
                return true;
            }
        }
    }
    return false;
}

int countPairs(int arr[],int n,int s){
    int left=0,right=n-1;
    int count=0;
    while(left<=right){
        if((arr[left]+arr[right]) > s){
            right--;
        }else if((arr[left]+arr[right]) < s){
            left++;
        }else{
            count++;
            left++;
            right--;
        }
    }
    return count;
}

int main(){
    int n,s;
    cin>>n>>s;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<ifPair(arr,n,s)<<endl;
    cout<<ifTriplet(arr,n,s)<<endl;
    cout<<"total pairs="<<countPairs(arr,n,s)<<endl;
}