#include <iostream>
using namespace std;

class allInOne{
    public:
    void oddOrEven(int n){
        if(n % 2 == 0){
            cout << n << " is an even number." << endl;
        } else {
            cout << n << " is an odd number." << endl;
        }
    }

    void fibinacci(int n){
        int a = 0, b = 1, c;
        cout << "Fibonacci series: ";
        for(int i = 0; i < n; i++){
            cout << a << " ";
            c = a + b;
            a = b;
            b = c;
        }
        cout << endl;
    }

    void factorial(int n){
        int fact = 1;
        for(int i = 1; i <= n; i++){
            fact *= i;
        }
        cout << "Factorial of " << n << " is " << fact << endl;
    }




};

int main(){ 
    allInOne obj;
    int n = 10;
    
            obj.oddOrEven(n);
            obj.fibinacci(n);
            obj.factorial(n);

    return 0;

}