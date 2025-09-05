#include <iostream>
using namespace std;

// Import factorial function from your code
long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    cout << "Testing Factorial Function" << endl;
    
    cout << "factorial(0) = " << factorial(0) << " (Expected: 1)" << endl;
    cout << "factorial(1) = " << factorial(1) << " (Expected: 1)" << endl;
    cout << "factorial(5) = " << factorial(5) << " (Expected: 120)" << endl;
    cout << "factorial(10) = " << factorial(10) << " (Expected: 3628800)" << endl;

    return 0;
}
