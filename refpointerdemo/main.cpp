#include <iostream>

using namespace std;
 // pass by value
 // pass by Reference
   int Inc(int& n ){
      n++;
      return n ;
   }
   int Inc(int* n){//pointer
       (*n)++ ;
       return *n;
   }
   void show(const int& n){
      cout<< n << endl;
   }

int main()
{
   int num = 10 ;
   show(num);
//   cout << Inc(&num) << endl;
//   cout <<"num ="<< num <<endl;
//   cout << Inc(num) << endl;
//   cout <<"num = " << num << endl;
}
