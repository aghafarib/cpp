#include <iostream>
using namespace std;

//---- -10 ---- 0 --- 10 -----
// A   -10  B   0  C  10   D

int main()
{
    int n ;
    cout <<"Enter a number?"<< endl;
    cin >> n ;
    if ( n == -10 || n == 0 || n == 10  )
    {
        cout << n << endl;
        return 0 ;
    }
    string Result = "" ;
    if (n < -10 )
        Result = "A" ;
    if( n > -10 && n < 0 )
        Result = "B";
    if (n > 0 && n < 10 )
        Result = "C";
    if( n > 10 )
        Result = "D";

    cout << Result << endl;

}
