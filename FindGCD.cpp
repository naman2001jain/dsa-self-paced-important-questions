#include <iostream>

using namespace std;

int findGCD(int a, int b){
    if(a==0){
        return b;
    }
    return findGCD(b%a,a);
}
//euclidean algorithm
/*
int findGCD(int a, int b){
    while(a!=b){
        if(a>b){
            a = a-b;
        }else{
            b = b-a;
        }
    }
    return a;
}
*/

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<findGCD(a,b);
}
