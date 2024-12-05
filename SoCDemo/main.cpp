#include <iostream>
using namespace std;
// Demo of Separation of Concern(SoC)
 int readNumber() {
    int n ;
    cout <<"Enter number?"<<endl;
    cin>> n ;
    return n;
 }
 bool isPrimeNumber(int number) {
  if ( number < 2 ) return false;
  for(int i = 2 ; i < number ; i ++)
    if(number % i == 0 )
       return false;
  return true;
 }
 void showMessage(int number , string Message){
    cout<< number <<" " << Message << endl;
 }
int main()
{
    // read a number
    int number = readNumber();
    // is Prime ?
    bool isPrime = isPrimeNumber( number) ;
    //show Result
    if(isPrime)
        showMessage(number , "is Prime");
    else
        showMessage(number, "is not Prime");
}
