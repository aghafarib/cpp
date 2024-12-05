    #include <iostream>

    using namespace std;

    class Test {
    public:
        int n ;
        int m ;
    public:
        Test(int N , int M) :n(N),m(M) {}
          void show() {cout <<"n = " << n << endl; }
    friend class Other ;
    friend void show( const Test& t);
    friend void show(const Test* t){cout<<"t value = "<<t->n<<endl; }
    };
    void show(const Test& t){cout<<"V = " <<t.n<<endl; }

    class Other {
    public:
        static void show(const Test t) {
           cout << "vaue of n in Test class: "<< t.n << endl;
        }
    };

    int main()
    {
       Test t(199,200);// Test(199);
       t.show();
       Test{100, 200}.show();
       Test(200,300).show();
//         Other::show(*new Test(1000)) ;
//         show(*new Test(10));
//         show(new Test(200));
    }
