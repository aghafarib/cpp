#include <iostream>

using namespace std;

  void Inc( int& n){
     n++;
  }
  void Inc(int* ptr){
   (*ptr)++;
  }

int main()
{
    int n = 100;
    int& rn = n ;
    rn++;
    cout<<"n = "<< n << endl;
    Inc(n);
    cout<<"n = "<< n << endl;
    Inc(&n);
    cout<<"n = "<< n << endl;

}
