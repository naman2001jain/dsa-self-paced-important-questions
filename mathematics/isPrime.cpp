/*all natural numbers can be divided into two categories 
1) prime -> which has only two factors either 1 or itself.
2) composite -> which are not prime.
note that 1 is neither prime nor composite.
*/

#include <iostream>

using namespace std;

bool isPrime(int n){
    int divisors = 0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            divisors++;
        }
    }
    if(divisors>0){
        return false;
    }else{
        return true;
    }
}

int main()
{
    int n;
    cin>>n;
    if (isPrime(n)){
        cout<<"number is prime";
    }else{
        cout<<"number is not prime";
    }
}
