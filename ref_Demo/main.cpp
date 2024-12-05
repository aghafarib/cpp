    #include <iostream>

    using namespace std;

    class MyClass {
    private:
        int* ptr ;
    public:
        MyClass( int* ptr): ptr(ptr)  { }
        void render(){
          cout<<"Value of " << *ptr <<endl;
        }
    };

       int main()
        {
        int num = 100;
        MyClass myObj(&num) ;

        myObj.render() ;
        num= -900;
        myObj.render() ;
        }
