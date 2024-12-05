#include <iostream>

using namespace std;

int main()
{
    int numArray[] = {10 ,20 , 30, 40 , 50 };
    const int SIZE = 5; // Size of Array

    // show array
    for(int index = 0 ; index < SIZE ; index ++)
        cout << "index:"<<index<<" = "<< numArray[index] << endl;
}
