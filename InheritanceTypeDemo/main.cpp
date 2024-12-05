    #include <iostream>
    using namespace std;
    namespace Show1 {
        class MyBase {
        public:
          virtual  void show() {cout <<"Base show method. " <<endl;}
        };

        class Derived : public MyBase {
       public:
        virtual void show() {cout <<"Derived show method. " <<endl;}
        };

    }
    using namespace Show1;
    namespace Show2{


    class Third : public Show1::Derived {
        public:
            void show(){

                cout << "Third show method." << endl;
            }
        };

        void show(MyBase& base) {base.show() ; }
       // void show(MyBase base) {base.show() ; }
        void show(MyBase* base) {base->show() ; }

    }
   // using namespace Show1 ;
    using namespace Show2;
    int main() {
       Third th;
       Derived drv;
       MyBase base;

       cout <<"-----------------"<<endl;
        show(base);
        show(drv);
        show(th);


//        MyBase* objList[] = {(new MyBase()) , (new Derived()) , (new Third())};
//        for(MyBase* item : objList)
//           show(item);

    }

