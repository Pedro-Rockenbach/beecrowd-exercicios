#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int a, b;

    while (cin >> a >> b) {

      string s = to_string(a);
      string inteiro_formatado = "";

      int count = 0;

      for (int i = s.size() - 1; i >= 0; i--) {
        inteiro_formatado = s[i] + inteiro_formatado;
        count++;

        if (count == 3 && i != 0) {
          inteiro_formatado = "," + inteiro_formatado;
          count = 0;
        }
      }

      cout << "$" << inteiro_formatado << "."
            << setw(2) << setfill('0') << b << endl;
    }

    return 0;
}
