#include <iostream>

using namespace std;
// Modular Design
//Top down Design Approach



int getNumber() {
   int n ;
   cout<<"Enter number?"<<endl;
   cin >> n ;
   return n ;
}
int sumDigits(int n ){
    int sum = 0 ;
    while ( n > 0 ) {
        sum += n % 10 ;
        n /= 10 ;
    }
    return sum ;
}
void show(int n, int sum){
   cout << n <<" sum of Digits = " << sum <<endl;
}
int main()
{
    int n ;
    int sum;
    for (int i = 0 ; i < 150 ; i ++)
    {
        //n = getNumber() ;
        sum = sumDigits(i);
        show(i,sum);
    }
}
