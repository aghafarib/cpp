    #include <iostream>
    #include <vector>
    using namespace std ;

    //Polymorphism using Vector

   class  Shape {
    public:
        virtual void draw()const  = 0 ;
        virtual void area()const  = 0 ;
   };

   class Rectangle : public Shape {
    public:
        void draw()const {cout<<"Rectangle Draw" <<endl; }
        void area() const {cout<<"Rectangle Area" <<endl;}
    };

   class Circle :public Shape {
    public:
        void draw()const {cout<<"Circle Draw" <<endl;}
        void area()const {cout<<"Circle Area" <<endl;}
    };

    void display(const Shape& shape ) {
       shape.draw() ;
       shape.area() ;
    }
     void display(const Shape* shape ) {
       shape->draw() ;
       shape->area() ;
    }
    void display(const vector<Shape*>& shapeList){
       for(Shape* shape : shapeList)
       {
           shape->draw();
           shape->area() ;
       }
    }


int main() {
    vector<Shape*> shapeList ;
    Rectangle r ;
    shapeList.push_back(&r);
    shapeList.push_back(new Circle()) ;

    display(shapeList);
    display(&r);
    display(r);

}
