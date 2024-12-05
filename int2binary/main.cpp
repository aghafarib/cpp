#include <iostream>
#include <vector>
using namespace std;

  string int2binary(int n){
       if( n == 0)  return "0";
            vector<int> binaryDigits ;
       while( n > 0 ){
          binaryDigits.push_back(n%2);
          n /= 2 ;
       }
       string binaryRepresentation ;
       for(auto it = binaryDigits.rbegin() ; it != binaryDigits.rend() ; ++it)
          binaryRepresentation += to_string(*it);

       return binaryRepresentation;

    }
int main() {
   for (int i = 0 ; i <= 100 ; i ++)
      cout <<i <<" : " <<int2binary(i)<<endl;

}
