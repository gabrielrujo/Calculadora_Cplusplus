#include <cmath>
#include <iostream>
#include <limits>
#include <string>

using namespace std;

int main() {
  double num1, num2;
  string operacao;

  while (true) {
    cout << "Digite o primeiro número: ";

    if (!(cin >> num1)) {
      cout << "error valor digitado não é valido." << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      continue;
    }

    cout << "Digite o segundo número: ";

    if (!(cin >> num2)) {
      cout << "error valor digitado não é valido." << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      continue;
    }

    break;
  }

  cout << "\n ‼️ AVISO: Caso escolha raiz quadrada(sqrt) o segundo numero é "
          "ignorado. ‼️ \n"
       << endl;
  cout << "escolha a operação: + , -, *, /, **, sqrt(para raiz quadrada).";
  cin >> operacao;

  if (operacao == "+") {
    cout << num1 + num2 << endl;
  } else if (operacao == "-") {
    cout << num1 - num2 << endl;
  } else if (operacao == "*") {
    cout << num1 * num2 << endl;
  } else if (operacao == "/") {
    if (num2 != 0) {
      cout << num1 / num2 << endl;
    } else {
      cout << "indefinido" << endl;
    }
  } else if (operacao == "**") {
    cout << pow(num1, num2) << endl;
  } else if (operacao == "sqrt") {
    if (num1 >= 0) {
      cout << sqrt(num1) << endl;
    } else {
      cout << "error: raiz quadrada de número negativo não é real." << endl;
    }
  } else {
    cout << "Operação invalida escolha entre +, -, *, /, **, sqrt." << endl;
  }

  return 0;
}