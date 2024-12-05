#include <iostream>

using namespace std;
class SuperTest{
  private:
      int n ;
  public:
    SuperTest() {
       cout<<"In SuperTest Class:" << endl;
       cout <<"Address of n = "<< &n <<" Value of n = "<< n<< endl;
       cout<<"this = " << this << endl;


    }
};
class Test:public SuperTest {
private:
    double n ;
    double m  ;
public:
    Test() {
        cout<<"in Test Class : "<<endl;
        cout<<"Address of n "<< &n <<" value of n = " << n <<endl;
        cout<<"Address of m "<<&m <<" Value of m = " << m << endl;
        cout <<"This = " <<this <<endl; }
};



int main()
{
    Test test;
}
