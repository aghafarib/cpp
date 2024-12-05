#include <iostream>

using namespace std;
// A simple template class that requires the type to have a member function 'foo'
template <typename T>
class Example {
public:
    void callFoo(T obj) {
        obj.foo();  // This will cause a compilation error if T does not have 'foo'
    }
};

// A class that satisfies the requirement
class SatisfyingClass {
public:
    void foo() {
        std::cout << "foo called!" << std::endl;
    }
};

// A class that does NOT satisfy the requirement
class NonSatisfyingClass {
    // No 'foo' member function
};
class MyClass {
public:
    void foo() {cout <<"Foo call in MyClass"<<endl;}
};
int main() {
//    Example<SatisfyingClass> example1;
//    SatisfyingClass sc;
//    example1.callFoo(sc);  // This works fine
//
//    Example<MyClass> templateInstance ;
//    templateInstance.callFoo(*new MyClass()) ;

     //Uncommenting the following lines will cause a compilation error
     Example<NonSatisfyingClass> example2;
     class Test{};
     Example<Test> example4;
     Example<int> example3;
//     NonSatisfyingClass nsc;
   //  example2.callFoo(* new nsc());  // Error: 'class NonSatisfyingClass' has no member named 'foo'


}
