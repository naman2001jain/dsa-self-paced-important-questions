#include<iostream>
using namespace std;
int countNoOfDigits(int n){
    int count=0;
    while(n!=0){
        count++;
        n = n/10;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    cout<<countNoOfDigits(n);

}