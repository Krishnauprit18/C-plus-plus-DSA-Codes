#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int s, e;
    cout << "Enter start of interval: ";
    cin >> s;
    cout << "Enter end of interval: ";
    cin >> e;

    cout << "Armstrong numbers between " << s << " and " << e<< ": " << endl;
    for (int i = s; i <= e; i++) {
        int n = i;
        int sum = 0;
        int d = 0;
        while (n > 0) {
            d++;
            n/= 10;
        }
        n= i;
        while (n > 0) {
            sum += pow(n % 10, d);
            n/= 10;
        }
        if (sum == i) {
            cout << i << endl;
        }
    }

    return 0;
}
