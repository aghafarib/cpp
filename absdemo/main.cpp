    #include <iostream>

    using namespace std;
    class Shape {//Abstract class
    public:
       virtual void draw()= 0 ; //pure vf //{cout <<"Shape Draw"<<endl;    }
       virtual double per()  = 0 ; //{return 0 ; }
    };
    class Circle : public Shape {
    public:
        void draw( ) override{ cout<<"Circle Draw"<<endl;  }

    };
    class Rectangle : public Shape{
     public:
     void draw() override { cout <<"Rectangle Show"<<endl; }

    };
    class XShape : public Shape {

    };

    void display(Shape* sh){
        sh->draw() ;
    }
    void display(Shape& sh){
      sh.draw() ;
    }
    int main()
    {
        display(new Circle() );
        display(new Rectangle());


    }
