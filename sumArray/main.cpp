    #include <iostream>

    using namespace std;
      int sumArray(int array[] , const int Size){
       int sum = 0 ;
       for(int i = 0 ; i < Size; i ++)
         sum += array[i];
       return sum ;
      }

    int main()
    {
        int nums[]= {10, 20 , 30 , 40};// Size = 4 ;
        const int Size = 4;

        cout << "Sum Array = "<<sumArray(nums,Size) << endl;

    }
