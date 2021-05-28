//print number of digits in a number.

#include <iostream>

using namespace std;

int countDigits(int n)
    {
       return (n<=9) ? 1 : 1 + countDigits(n/10);
    }

int main()
{
    cout<<countDigits(1);
}