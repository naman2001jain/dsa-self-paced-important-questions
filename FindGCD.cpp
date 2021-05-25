#include <iostream>

using namespace std;

int findGCD(int a, int b){
    if(a==0){
        return b;
    }
    return findGCD(b%a,a);
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<findGCD(a,b);
}
