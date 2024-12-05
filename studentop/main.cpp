#include <iostream>

using namespace std;
class Student {
private:
    string name,family;
public:
    friend istream& operator>>(istream& in, Student& st){
       in>> st.name >> st.name ;
       return in;
    }
    friend ostream& operator<<(ostream& out, const Student& st){
      out<<"Student: Name: "<<st.name<<", Family: "<<st.family ;
    }
};

Complex
int main()
{
    Student st;
    cout <<"Enter Student ?" << endl;
    cin >> st ;
    cout << st << endl;
    return 0;
}
