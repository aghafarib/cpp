    #include <iostream>
    using namespace std;

    // Base class
    class Shape {
    public:
        // Declare a virtual function
        virtual void draw() {
            cout << "Drawing a shape" << endl;
        }
    };

    // Derived class
    class Circle : public Shape {
    public:
        void draw() override { // Override the base class function
            cout << "Drawing a circle" << endl;
        }
    };

    // Derived class
    class Square : public Shape {
    public:
        void draw() override {
            cout << "Drawing a square" << endl;
        }
    };

    int main() {
        Shape* shape;          // Base class pointer

        Circle circle;        // Create a Circle object
        Square square;        // Create a Square object

        shape = &circle;      // Point to Circle
        shape->draw();        // Calls Circle's draw()

        shape = &square;      // Point to Square
        shape->draw();        // Calls Square's draw()

    }
