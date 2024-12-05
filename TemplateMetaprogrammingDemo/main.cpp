    #include <iostream>
    using namespace std;

    // Template meta program to compute factorial at compile time
    template<int N>
    struct Factorial {
        static const int value = N * Factorial<N - 1>::value; // Recursive definition
    };

    // Base case specialization
    template<>
    struct Factorial<0> {
        static const  int value = 1; // 0! = 1
    };



        int main() {
            cout << "Factorial of 5: " << Factorial<5>::value << endl; // Outputs 120
            cout << "Factorial of 0: " << Factorial<0>::value << endl; // Outputs 1
        return 0;
    }
