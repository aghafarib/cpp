#include <iostream>
#include <vector>
#include <fstream>

using namespace std;


int main()
{
//     ofstream File("Data.txt");
//     for(int i = 0 ; i <= 100 ; i ++)
//        File << i <<endl;
//     File.close();
     string filePath = "C:/Users/Ali/Desktop/New folder/Data.txt" ;
     ifstream myFile(filePath) ;
     if(!myFile){
        cerr <<"Error opening file :"<<filePath<<endl;
        return 1;
     }
     string line;
     int sum =0 ;
     while(getline(myFile , line)){
        cout<< line << endl;
        try{
        sum += stoi(line) ;
        }
        catch(const invalid_argument& e){
           cerr <<"invalid number: "<< line << endl;
        }
        catch(const out_of_range& e){
           cerr<<"Number out of range : "<< line << endl;
        }

     }
     cout <<"Sum = " << sum << endl;
     myFile.close() ;
}
