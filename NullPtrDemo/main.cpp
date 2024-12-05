#include <iostream>

using namespace std;

class Example {
 public:
     void show() {cout <<"Show Method ..." << endl; }
} ;

 void Show(Example* objPtr){
   objPtr->show() ;
 }
int main()
{
    Example* exm = new Example()  ;
    Show(exm) ;
    Show(100) ;
    //cout<< exm << endl;
}
