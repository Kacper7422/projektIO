#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n;
    cin >> n;

    if (n < 0) {
        cout << "Wczytana liczba jest ujemna. Program zakończony." << endl;
        return 0;
    }

    cout << "Wczytana liczba: " << n << endl;
    cout << "Fibonacci: " << fibonacci(n) << endl;

    return 0;
}

