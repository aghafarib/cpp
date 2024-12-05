#include <iostream>

using namespace std;
class Base{
public:
   virtual void show() {cout<<"Base::Show Method"<<endl;}
};
class Derived: public Base {
public:
    void show()override{ cout <<"Derived::show Method"<<endl; }
};

void display(Base* obj){
   obj->show() ;
}
void display(Base& obj){
   obj.show() ;
}
//void display(Base obj ){
//  obj.show() ;
//}
int main()
{
//   display(new Base() ) ;
//   display(new Derived());
   Base b ;
   display(b);
   Derived d;
   display(d);
}
