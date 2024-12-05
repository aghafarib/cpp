#include <iostream>

using namespace std;
int n = 100 ;//global varaible

void Add(int amount){//function definition
   n += amount;
 }
int main()
{
    int n = 200;// local variable
    Add(20); // function call
    cout <<"n = "<< ::n << endl;
    return 0;
}
