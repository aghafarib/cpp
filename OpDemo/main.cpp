    #include <iostream>

    using namespace std;

    class Complex {
    private:
        double real, image;
    public:
        Complex operator=(const Complex& other){
            real = other.real; image = other.image;
            return *this;
        }
        Complex operator+(const Complex& other){
            return Complex{real+other.real,image + other.image} ;
        }
        Complex operator-(const Complex& other){
        return Complex{real - other.real,image -other.image};
        }
         Complex operator++(){//prefix
             real++; image++ ;
           return *this;
        }
        Complex operator++(int){//postfix
            Complex Temp(real, image);
            real++ ,image++ ;
           return Temp;
        }

        Complex operator*(const Complex& other){
        return Complex(real*other.real-image*other.image,real*other.image+image*other.real);
        }

        friend ostream& operator<<(ostream& out , const Complex& other){
           out<<"("<< other.real << "," <<other.image <<")";
           return out ;
        }
        friend istream& operator>>(istream& inp , Complex& other){
           inp >> other.real >> other.image;
           return inp;
        }
        Complex(double real=0 , double image=0): real(real),image(image){}
    };

    int main()
    {
        Complex c1(0,3);
        Complex c2(2,5);

        Complex c3 = c2;
        cout << c1 <<endl;
        cout << c2 <<endl ;
        cout << c3<<endl;

    }
