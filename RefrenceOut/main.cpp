#include <iostream>
using namespace std;

int func(){
   int temp = 100;
   cout<<"temp address = " << &temp << endl;
   return temp;

}


int main()
{
   int n = func();
   cout <<"n address = "<<&n << endl;
   cout << "n = "<< n << endl;


    }
