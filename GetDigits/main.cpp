    #include <iostream>
    #include <vector>

    using namespace std;

    vector<int> getDigits(int N){
        vector<int> digits ;
        if( N==0 ){
            digits.push_back(0);
            return digits;
        }
        while( N > 0 ) {
            digits.push_back(N%10);
            N /= 10 ;
        }
        return digits;
    }

    int main()
    {
        int N;
       vector<int> digits ;
       cout <<"N?" <<endl;
       cin >> N ;
       digits = getDigits(N);

       //show digits of number
       cout<<N<<" digits are :"<<endl;
       for(int digit : digits )
        cout<< digit << endl;
    }
