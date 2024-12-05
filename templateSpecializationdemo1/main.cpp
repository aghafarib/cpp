    #include <iostream>
    #include <string>
    using namespace std;
    // Generic function template
    template<typename T>
    void print(T value) {
        cout << "Generic: " << value << endl;
    }

    // Specialized function template for int
    template<>
    void print<int>(int value) {
        cout << "Specialized for int: " << value << endl;
    }

    void print(string value) {
        cout << "not template:My Specialized for string: " << value << endl;
    }
    // Specialized function template for std::string
    template<>
    void print<string>(string value) {
        cout << "Specialized for string: " << value << endl;
    }

    int main() {
    //    print(42);               // Calls the specialized version for int
        string text = "Hello!";
        const char textSample[] = "text sample";
        print(textSample);
        print(text); // Calls the specialized version for string
        print(text);
    //    print(3.14);            // Calls the generic version

        return 0;
    }
