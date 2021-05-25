#include <iostream>

using namespace std;
//iterative approach
/*int fact(int n){
    int f = n;
    for(int i=n-1;i>=1;i--){
        f = f*i;
    }
    return f;
}*/


//recursive approach

int fact(int n){
    if(n==0 || n==1){
        return 1;
    }else{
        return n*fact(n-1);
    }
}


int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
}
