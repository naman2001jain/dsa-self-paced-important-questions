//print 1 to n using recursion.
#include<iostream>
using namespace std;

void printNos(int N)
{
    if(N==0){
        return;
    }
    printNos(N-1);
    cout<<N<<" ";
}

int main(){
    int n;
    cin>>n;

    printNos(n);
}