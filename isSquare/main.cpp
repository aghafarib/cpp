#include <iostream>

using namespace std;
bool isSquare(int n ){

   for(int i = 0 ; i <= n ; i ++)
    if( n == i * i ) return true;
   return false;

}
int main()
{
    for(int i = 0 ; i <= 100 ; i ++)
        if(isSquare(i))
           cout<< i <<" Square"<<endl;
        else
            cout << i <<" not Square"<< endl;

}
