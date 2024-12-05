#include <iostream>
using namespace std;

template <typename ... Args>
void print(Args ... args) {
    (cout << ... << args )<< endl; // C++17 fold expression
}

int main() {
    print(1," ", 2.5," ", "Hello"," ", 'A'); // Outputs: 12.5HelloA

}
