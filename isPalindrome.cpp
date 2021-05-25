#include <iostream>

using namespace std;

bool isPalindrome(int n){
    bool result = false;
    int reverse = 0;
    int num = n;
    while(n!=0){
        reverse = reverse*10 + (n%10);
        n = n/10;
    }
    if (reverse == num){
        return true;
    } else{
        return false;
    }
}

int main()
{
    int n;
    cin>>n;
    if (isPalindrome(n)){
        cout<<n<<" is a palindrome number.";
    }else{
        cout<<n<<" is not a palindrome number.";
    }
}
