#include <iostream>

using namespace std;

bool isPalindrome(int n){
    bool result = false;
    int reverse = 0;
    int temp = n;
    while(temp!=0){
        reverse = reverse*10 + (temp%10);
        temp = temp/10;
    }
    if (reverse == n){
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
