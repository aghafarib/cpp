    #include <iostream>

    using namespace std;
    bool isPrime(int n){
        if( n < 2) return false;
        for(int i = 2 ; i < n ; i ++)
            if(n% i == 0 ) return false;
        return true;
    }
    int numOfPrimeInArray(int array[], int Size){
        int PrimeCount = 0 ;
       for(int i = 0 ; i < Size ; i ++)
          if(isPrime(array[i]))
              PrimeCount ++ ;
       return PrimeCount;
     }
    int main()
    {
       int numArray[] = {2,20,41,66,90,37};//2,41,37 are prime

        cout << "Prime# = "<<numOfPrimeInArray(numArray,6) << endl;

    }
