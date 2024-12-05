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
int main()
{
   for(int i = 900 ; i <= 1200 ; i ++)
    cout << i <<" Reverse = " << Reverse( i) << endl;
}
