#include <iostream>

using namespace std;

double getAvg(int x,int y){
    return (x+y)/2.0;
}



int getMedian(int arr1[],int arr2[],int x,int y){
    int cut1,cut2;
    cut1 = x/2;
    cut2 = y - cut1;
    int l1,l2,r1,r2;
    
}

int main(){
    int x,y;
    cin>>x>>y;
    int arr1[x],arr2[y];
    cout<<getMedian(arr1,arr2,x,y);
}