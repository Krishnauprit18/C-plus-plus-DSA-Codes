#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of Vihāṅkānka numbers to generate: ";
    cin >> n;

    cout << "Generated Vihāṅkānka numbers:" << endl;

    int count = 0;
    int num = 1;
    while (count < n) {
        bool is_prime = true;
        if (num > 1) {
            for (int i = 2; i <= num / 2; ++i) {
                if (num % i == 0) {
                    is_prime = false;
                    break;
                }
            }
        }
        else {
            is_prime = false;
        }

        if(is_prime || num == 1) {
            int temp = num;
            bool is_vihanka = true;

            while (temp > 0) {
                if (temp % 10 != 1 && temp % 10 != 0) {
                    is_vihanka = false;
                    break;
                }
                temp /= 10;
            }

            if(is_vihanka) {
                cout << num << " ";
                count++;
            }
        }

        num++;
    }

    cout << endl;

    return 0;
}
