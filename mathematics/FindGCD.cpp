#include <iostream>

using namespace std;

int findGCD(int a, int b){
    if(b==0){
        return a;
    }
    return findGCD(b,a%b);
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


//driver program to run the code
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<findGCD(a,b);
}
