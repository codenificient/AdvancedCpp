#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(auto n) {
    auto limit = static_cast<decltype(n)>(sqrt(n));
    for (decltype(n) i = 2; i <= limit; i++) {
        if (n % i == 0) return false;
        return true;
    }
}

int main() {
    cout << "Is 17 prime? " << isPrime(17) << endl;
    cout << "Is 21 prime? " << isPrime(21) << endl;
    cout << "Is 12 prime? " << isPrime(12) << endl;
}
