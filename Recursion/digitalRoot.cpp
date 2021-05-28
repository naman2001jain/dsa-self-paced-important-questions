//finding the digital root of a number.

#include <iostream>

using namespace std;

int countSumOfDigits(int x){
    if(x==0){
        return 0;
    }
    return (x%10) + countSumOfDigits(x/10);
}
    
int digitalRoot(int n)
{
    if(n<=9){
        return n;
    }
    return digitalRoot(countSumOfDigits(n));
        
}

int main()
{
    int n;
    cin>>n;
    cout<<digitalRoot(n);
}