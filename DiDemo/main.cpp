    #include <iostream>
    // Dependency Injection Demo
    // Constructor Injection
    // Setter Method Injection
    // Uses Polymorphism

    using namespace std;

    class IService {
    public:
        virtual void service() = 0;
    };

    class AService : public IService {
    public:
        void service() override {
            cout << "AService is executed...." << endl;
        }
    };

    class BService : public IService {
    public:
        void service() override {
            cout << "BService is executed...." << endl;
        }
    };

    class MyClass {
    private:
        IService* aService; // Use pointer instead of reference
    public:
        MyClass(IService* aService) : aService(aService) { }

        void setService(IService* aService) {
            this->aService = aService; // Now we can change the service
        }

        void process() {
            if (aService) {
                aService->service(); // Use pointer dereference
            }
        }
    };

    int main() {
        AService aservice;
        MyClass myClass(&aservice); // Pass address of AService
        myClass.process();

        BService bservice;
        myClass.setService(&bservice); // Pass address of BService
        myClass.process();

    }
