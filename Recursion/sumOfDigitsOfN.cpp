//print sum of digits of n using recursion.
#include<iostream>
using namespace std;
int countSumOfDigits(int n)
{
    if(n==0){
        return 0;
    }
    return (n%10) + countSumOfDigits(n/10);
}

int main(){
    int n;
    cin>>n;

    cout<<"sum is:"<<countSumOfDigits(n);
}