#include <iostream>
using namespace std;

// ====================================
// Function 1 - Factorial
// Author: Admin (Nikhilesh)
// ====================================
long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}



// ====================================
// Function 2 - Prime Check
// Author: Member B
// ====================================
// TODO: Implement prime check function here
// bool isPrime(int n) { ... }



// ====================================
// Function 3 - Fibonacci
// Author: Member C
// ====================================
// TODO: Implement fibonacci function here
// int fibonacci(int n) { ... }


int main() {
    cout << "Driver Program - Math Utilities" << endl;
    
    // Factorial Demo (Admin’s function)
    cout<<"enter a number: "<<endl;
    int x;
    cin>>x;
    cout << "Factorial(x): " << factorial(x) << endl;

    // Prime Check Demo (Member B’s function)
    // cout << "Is 13 prime? " << (isPrime(13) ? "Yes" : "No") << endl;

    // Fibonacci Demo (Member C’s function)
    // cout << "Fibonacci(7): " << fibonacci(7) << endl;

    return 0;
}
