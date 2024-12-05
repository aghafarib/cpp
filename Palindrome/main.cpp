#include <iostream>

using namespace std;
int Reverse(int n ){
   int reverseNum = 0 ;
   int digit;
   while ( n > 0 ){
    digit = n % 10 ;
    reverseNum = 10 * reverseNum + digit;
    n /= 10 ;
   }
   return reverseNum;
}
bool isPalindrome(int n ){
  return (n == Reverse(n))? true : false ;
}
int main()
{
   for(int i = 0  ; i <=1000; i ++)
      cout<< i << ((isPalindrome(i))? " Palindrom": "Not Palindrome")<<endl;
}
