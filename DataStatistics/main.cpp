#include <iostream>
#include <fstream>
using namespace std;

bool isEven(int n){return (n%2 ==0)? true : false ; }


int main()
{
  ifstream InpFile("Data.txt");
  if(!InpFile){
    cerr<<"Error open file: "<< endl;
    return 1;
  }
  string line;
  int Counter = 0 ;
  int sum = 0;
  int N ;
  int EvenCount = 0 ;
  while(getline(InpFile , line)){
    Counter ++ ;
    N = stoi(line);
    sum += N;
    if(isEven(N)) EvenCount ++ ;
  }
  InpFile.close() ;
  double Average = (double)sum / Counter;

  //Write Statistics to file
  ofstream outFile("DataAnalysis.txt");
  outFile <<"Total Number : "<< Counter <<endl;
  outFile <<"Even : "<< EvenCount << endl;
  outFile <<"Odd : "<<Counter -EvenCount <<endl;
  outFile <<"Average : "<< Average <<endl;

  outFile.close() ;
}
