#include <iostream>
using namespace std;

int main(){
   int numList[10]= {10,20,30,40,50,60,70,80,90,100};
   string persons[]={"Ali","Reza","Javad","Arash"};

   for(string person : persons)
    cout<< person << endl;
   return 0 ;
   //Read Array
//   for(int i = 0; i < 10 ; i ++)
//    numList[i] = i +10  ;
   //show array
   for(int i = 0; i < 10 ; i ++)
    cout<< "numList["<<i<<"] ="<<numList[i]<<endl;
}
