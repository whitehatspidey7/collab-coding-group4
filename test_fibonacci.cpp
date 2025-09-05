#include <iostream>
using namespace std;

//function declaration
int fibonacci(int n);

int main() {
    //Testing the fibonacci function
    cout << "Testing Fibonacci Function" << endl;
    
    cout << "fibonacci(0) = " << fibonacci(0) << " (Expected: 0)" << endl;
    cout << "fibonacci(1) = " << fibonacci(1) << " (Expected: 1)" << endl;
    cout << "fibonacci(5) = " << fibonacci(5) << " (Expected: 5)" << endl;
    cout << "fibonacci(10) = " << fibonacci(10) << " (Expected: 55)" << endl;

    return 0;
}
