#include <iostream>

using namespace std;
enum State {ODD, EVN};
enum Result {REJECT=0, ACCEPT=1 };

State getState(int num){
    if( num % 2 == 0 ) return EVN;
    return ODD;
}
Result getResult(int N){
   if (N < 10 ) return ACCEPT;
   State CurrentState = getState(N%10);
   N /= 10 ;
   State NextState ;
   while( N > 0 ) {
    NextState = getState(N%10);
    if(CurrentState == NextState) return REJECT;
    CurrentState = NextState ;
    N /= 10 ;
    }
    return ACCEPT ;

}
int main()
{
    int N = 0 ;
    while( N >= 0 ){
      cout<<"N?"<<endl;
      cin >> N;
      cout << ((getResult(N)== ACCEPT)?"ACCEPT":"REJECT")<<endl;
    }

}
