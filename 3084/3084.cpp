#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int hora{}, min{};

    while (cin >> hora >> min) {
        cout << setw(2) << setfill('0') << hora/30 << ":"
             << setw(2) << setfill('0') << min/6 << endl;
    }
}
