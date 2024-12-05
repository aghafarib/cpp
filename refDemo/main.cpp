#include <iostream>

using namespace std;

void setNum(int& a){
   a = 100 ;
}
 class Message {
public:
    static void say() {cout <<"Hello by static method!"<<endl; }
};
template<class T>
void setString( T& text){
   text.say() ;
}

int main()
{
    Message msg ;
    setString(msg) ;

}
