#include <iostream>

using namespace std;

template<typename T>
void func(T a){
   cout <<"generic Template"<<endl;
}

void func(int a){
   cout <<"Called: non-Template:specialize function" <<endl;
}

template<>
void func<int>(int a) {
   cout <<"specialize template function" <<endl;
}

//template<typename T>
//T Max(T a , T b ){
//  return (a > b )? a: b ;
//}

template<typename T>
T Max(vector<T> List){
    T MAX = List.at(0);
  for(auto& item : List){
    if(item > MAX) MAX = item;
  }
  return MAX;

}

int main()
{
    func<int>(100);
    func(1.333);
    func(100);
//    cout <<"Max = " <<Max<int>(100.89, 200)<<endl;
}
