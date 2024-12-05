#include <iostream>
#include <fstream>

using namespace std;

  int sumArray(int nums[], int Size ){
      int sum = 0  ;
    for(int i = 0 ; i < Size ; i ++)
        sum += nums[i];
    return sum ;

  }


int main()
{
    int numList[10]= {1,2,3,4,5,7,8};
    ofstream File("Data.txt");


    for(auto item : numList )
        File << item << endl;
    File.close() ;




}
