#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n < 0) {
        cout << "Wczytana liczba jest ujemna. Program zakończony." << endl;
        return 0;
    }
    cout << "Wczytana liczba: " << n << endl;
    return 0;
}

