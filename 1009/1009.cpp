#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  char nome[15];
  double salario{};
  double vendas{};

  cin >> nome;
  cin >> salario;
  cin >> vendas;

  cout << "TOTAL = R$ " << fixed << setprecision(2) << salario + (vendas * 0.15)
       << endl;

  return 0;
}
