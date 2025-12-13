#include <iostream>
using namespace std;

bool isPalindrome(int x) {
     
     if( x < 0 || ( x%10 == 0 && x != 0)) return false;

     int reversed = 0 ;

     while (x > reversed){
        reversed  = reversed * 10 + (x % 10);
        x = x / 10;
     }

    // ( x == reversed || x == reversed / 10 ) ? true: false;
    // return false;
    if(  x == reversed || (x == reversed / 10) ) {
        return true;
    }
     return false;       

    }


int main() {
    //int number = 121;
    int number = 12;
    if (isPalindrome(number)) {
        cout << number << " is a palindrome number." << endl;
    } else {
        cout << number << " is not a palindrome number." << endl;
    }

    return 0;
}
