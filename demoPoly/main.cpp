#include <iostream>

using namespace std;
class Shape {
  public:
    virtual  double Area() {return 0 ; }
};
class Circle : public Shape {
private:
    double r ;
  public:
      Circle(double r): r(r) {}
      double Area() override {return 3.14 * r * r ;  }
};
class Rectangle: public Shape {
private:
    double L, W ;
public:
    Rectangle(double L , double W): L(L), W(W){}
    double Area() override {return L * W ;  }
};
void display(Shape* sh ){
   cout << "Area = "<< sh->Area() <<endl;
}
void display(Shape& sh ){
   cout << "Area = "<< sh.Area() <<endl;
}

int main()
{

   Circle c(10);
   display(c);
   display(&c);
//   Rectangle rect(10, 4);
//   display(rect) ;
}
