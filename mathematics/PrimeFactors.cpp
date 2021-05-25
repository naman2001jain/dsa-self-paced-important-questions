#include <iostream>
using namespace std;
//less efficient
void primeFactors(int n){
    if(n<=1){
        return;
    }
    
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            cout<<i<<endl;
            n = n/i;
        }
        
    }
    //for the last number.
    if(n>1){
        cout<<n<<endl;
    }
    
    
}
//more efficient
/*
void primeFactors(int n){
    if(n<=1){ return; }
    while(n%2==0){
        cout<<2<<endl;
        n = n/2;
    }
    while(n%3==0){
        cout<<3<<endl;
        n = n/3;
    }
    for(int i=5;i*i<=n;i=i+6){
        while(n%i==0){
            cout<<i<<endl;
            n = n/i;
        }
        while(n%(i+2)==0){
            cout<<i+2<<endl;
            n = n/(i+2);
        }
    }
    if(n>3){
        cout<<n<<endl;
    }
}
*/

int main()
{
    int n;
    cin>>n;
    cout<<"Prime factors of "<<n<<" are:"<<endl;
    primeFactors(n);
    
}
