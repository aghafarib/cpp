#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int add(int a , int b){
   return 0 ;
}
int main() {
    cout << add<char>(100, -3) << endl;
    cout << add<char>(60 , 5) <<endl;
    return 0 ;
    cout << add<double>((float)'a', 3) << endl;// Outputs: 5
    cout << add<double>(2.1, 3.5) << endl; // Outputs: 6.0
    cout << add<int>('a', 1) << endl;
    cout << add<int>(10.1 , 'c');
    return 0;
}
