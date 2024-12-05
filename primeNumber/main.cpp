    #include <iostream>

    using namespace std;

    bool isPrime(int n){
        if (n < 2 ) return false;
        for(int i = 2 ; i < n ; i ++)
            if( n % i == 0 ) return false;
        return true;
    }

    int sumDigit(int n ){

        int sum = 0 ;
        while( n > 0 ){
            sum += n % 10 ;
            n /= 10 ;
        }
         return sum ;
    }

    int main()
    {
        for(int i = 10; i <= 99 ; i ++)
           if(isPrime(i) && isPrime(sumDigit(i)))
              cout << i << endl;


    }
