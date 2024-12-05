#include <iostream>

using namespace std;

class Complex{
private:
    double R , I ;
public:
    Complex(double r= 0 , double i=0 ):R(r),I(i) {}
    friend ostream& operator<<(ostream& out,  Complex& other){
       out<<"("<<other.R<<","<<other.I<<")"<<endl;
       return out ;
    }
    friend istream& operator>>(istream& inp ,  Complex& other ){
       inp >> other.R >> other.I ;
       return inp;
    }
};

int main()
{
    Complex c;
    cout<<"Enter complex number?"<<endl;
    cin >> c ;
    cout << c ;
}
