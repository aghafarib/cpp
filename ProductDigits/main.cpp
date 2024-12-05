#include <iostream>

using namespace std;

int getNumber() {
   int n ;
   cout<<"Enter number?"<<endl;
   cin >> n ;
   return n ;
}
int productDigits(int n ){
    int product = 1 ;
    if ( n== 0 ) return 0;
    while ( n > 0 ) {
        product *= n % 10 ;
        n /= 10 ;
    }

    return product;
}
void show(int n, int product){
   cout << n <<" product of Digits = " << product <<endl;
}
int main()
{
    int n ;
    int product;
    for (int i = 0 ; i < 150 ; i ++)
    {
        //n = getNumber() ;
        product = productDigits(i);
        show(i,product);
    }
}
