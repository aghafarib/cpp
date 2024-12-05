
//
//    template <typename T, typename U>
//    class Number {
//        public:
//             void func(T a, U b) {
//                std::cout << a << " " << b;
//        }
//    };
//
////    template <typename T>
////    T sum(T a , T b){
////        return a+ b ;
////    }
////    int sum(int a , int b){
////       return a + b ;
////    }
//
//    template<typename T>
//        void print(T list ){
//            for(auto& item : list)
//           cout << item << endl;
//   }
//
//    template<>
//        void print<>(int value){
//        cout << value << endl;
//    }
//    template<>
//        void print<>(double value){
//        cout << value << endl;
//    }
//    template<>
//        void print<>(const char* value) {
//       cout << "Const Char* = " << value << endl;
//    }
//    template<>
//        void print<>(string value) {
//       cout << "string = " << value << endl;
//    }

   #include <iostream>
#include <memory>
using namespace std;

   class A{};


int main() {

    unique_ptr<int> ptr(new int(100)); // Create a unique_ptr

    cout <<"Before .... " <<endl;
    cout << "ptr = " << ptr.get() << endl; // Safe to use ptr2

    unique_ptr<int> ptr2 = move(ptr);
    cout <<"After move..." << endl;

    cout <<"ptr = " << ptr.get() << endl;
    cout <<"ptr2 = " << ptr2.get() << endl;





}
