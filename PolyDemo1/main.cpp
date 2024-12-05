    #include <iostream>

    using namespace std;
    class Shape {// abstract class
      public:
         virtual double area()=0 ;  //{return 0 ; } pure virtual function
    };
    class Circle : public Shape {
       private:
           double r ;
       public:
           Circle(double r ): r(r) {}
        double area() override{ return 3.14 * r * r ; }
    };
    class Rectangle : public Shape {
      private:
          double L , W ;
      public:
          Rectangle(double L , double W) : L(L) , W(W) {}
        double area()override {return L * W ; }
    };

     void displayArea(Shape& sh ){
         cout <<"Area = " << sh.area() << endl;
      }
    int main()
    {

     Circle c(10);
     displayArea(c);
     Rectangle r(10,5);
     displayArea(r);
    }
