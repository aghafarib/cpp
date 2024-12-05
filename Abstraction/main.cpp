#include <iostream>

using namespace std;

class  Shape {//abstract class Interface
public:
    virtual double area()= 0 ; //pure virtual function
    virtual void draw() = 0 ;
};

class Circle :public Shape {
private:
    double r ;
public:
    Circle(double r): r(r) {}
    double area()override {return 3.14 * r * r; }
    void draw() override {}
};
class Rectangle: public Shape {
public:
    double area() override{return 0 ; }
    void draw() override {}

};

  void display(Shape& sh){
     cout <<"Area : " <<sh.area()<<endl ;
  }
  void display(Shape* sh){
     cout <<"Area :(pointer) "<< sh->area() << endl;
  }
int main()
{
    //Shape sh ;
   Circle circle(10) ;
   display(circle) ;
   display(&circle) ;
   Rectangle r;



}
