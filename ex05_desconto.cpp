#include <iostream>
using namespace std;

int main() {
    double prod_01, prod_02, prod_03, prod_04;
    double desc_01 = 0.30, desc_02 = 0.20, desc_03 = 0.10;
    double vlrApagar_01, vlrApagar_02, vlrApagar_03, vlrApagar_04, vlrFinal;

    std::cout << "Digito o valor do produto 1: ";
    std::cin >> prod_01;
    std::cout << "Digito o valor do produto 2: ";
    std::cin >> prod_02;
    std::cout << "Digito o valor do produto 3: ";
    std::cin >> prod_03;
    std::cout << "Digito o valor do produto 4: ";
    std::cin >> prod_04;

    vlrApagar_01 = prod_01 - (prod_01 * 0.30);
    vlrApagar_02 = prod_02 - (prod_02 * 0.20);
    vlrApagar_03 = prod_03 - (prod_03 * 0.10);
    vlrApagar_04 = prod_04;

    vlrFinal = vlrApagar_01 + vlrApagar_02 + vlrApagar_03 + vlrApagar_04;

    std::cout << "O valor a pagar pelo produto 1: " << vlrApagar_01 << std::endl;
    std::cout << "O valor a pagar pelo produto 2: " << vlrApagar_02 << std::endl;
    std::cout << "O valor a pagar pelo produto 3: " << vlrApagar_03 << std::endl;
    std::cout << "O valor a pagar pelo produto 4: " << vlrApagar_04 << std::endl;
    std::cout << "O valor total a pagar é: " << vlrFinal << std::endl;

	return 0;
}