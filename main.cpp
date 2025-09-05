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
// Author: Ch Naga Uday kiran
// ====================================
// TODO: Implement fibonacci function here
// int fibonacci(int n) { ... }
int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

