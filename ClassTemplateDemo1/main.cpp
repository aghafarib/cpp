#include <iostream>
using namespace std;

template <typename T, int size>
class Test {
private:
    T ar[size]; // Declare the array without initialization

public:
    // Constructor to initialize the array
    Test(double Value) {
        for (int i = 0; i < size; ++i) {
            ar[i] = Value; // Initialize each element to Value
        }
    }

    void set(int index, T value) { ar[index] = value; }
    T get(int index) { return ar[index]; }
};

int main() {
    const int Size = 100 ;
    Test<double, Size> sampleArray(100.1232); // Create an instance of Test
    for (int i = 0; i < Size; i++)
        cout <<"["<<i<<"] = "<< sampleArray.get(i) << endl; // Outputs 100.1 for each element
}
