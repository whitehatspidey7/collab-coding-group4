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
// Author: H Shri Harsha
// ====================================
// TODO: Implement prime check function here
// bool isPrime(int n) { ... }

bool isPrime(int n) {
    if (n <= 1) return false;          // 0 and 1 are not prime
    if (n <= 3) return true;           // 2 and 3 are prime
    if (n % 2 == 0 || n % 3 == 0) return false; // eliminate multiples of 2 and 3

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) 
            return false;
    }
    return true;
}

// ====================================
// Function 3 - Fibonacci
// Author: Ch Naga Uday kiran
// ====================================
// TODO: Implement fibonacci function here
// int fibonacci(int n) { ... }
//<<<<<<< uday_branch
int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
=======


int main() {
    cout << "Driver Program - Math Utilities" << endl;
    
    // Factorial Demo (Nikhilesh’s function)
    cout<<"enter a number: "<<endl;
    int x;
    cin>>x;
    cout << "Factorial(x): " << factorial(x) << endl;

    // Prime Check Demo (Harsha’s function)
    cout << "Is 13 prime? " << (isPrime(13) ? "Yes" : "No") << endl;

    // Fibonacci Demo (Uday’s function)
    // cout << "Fibonacci(7): " << fibonacci(7) << endl;

    return 0;
//>>>>>>> main
}

int main() {
    cout << "Driver Program - Math Utilities" << endl;
    
    // Factorial Demo (Admin’s function)
    cout<<"enter a number: "<<endl;
    int x;
    cin>>x;
    cout << "Factorial(x): " << factorial(x) << endl;

    // Prime Check Demo (Member B’s function)
    // cout << "Is 13 prime? " << (isPrime(13) ? "Yes" : "No") << endl;

    // Fibonacci Demo (’s function)
    cout << "Fibonacci(7): " << fibonacci(7) << endl;

    return 0;
}
