//print sum of digits of n using recursion.
#include<iostream>
using namespace std;
int countDigits(int n)
{
    return n <= 9 ? 1 : 1 + countDigits(n / 10);
}

int main(){
    int n;
    cin>>n;

    cout<<"sum is:"<<countDigits(n);
}