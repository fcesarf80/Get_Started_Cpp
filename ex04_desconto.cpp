#include <iostream> 
using namespace std; 
int main()
{  
	double precoPeca_01, precoPeca_02, precoPeca_03;
	double desconto_01 = 0.10, desconto_02 = 0.20;
	double vlrApagar_01, vlrApagar_02, vlrApagar_03, vlrTotal;

	std::cout << "Digite o valor da 1' peca : ";
	std::cin >> precoPeca_01;
	std::cout << "Digite o valor da 2' peca: ";
	std::cin >> precoPeca_02;
	std::cout << "Digite o valor da 3' peca: ";
	std::cin >> precoPeca_03;

	vlrApagar_01 = precoPeca_01 - (precoPeca_01 * 0.10);
	vlrApagar_02 = precoPeca_02 - (precoPeca_02 * 0.20);
	vlrApagar_03 = precoPeca_03;

	vlrTotal = vlrApagar_01 + vlrApagar_02 + vlrApagar_03;

	std::cout << "O valor a pagar pela 1' peca de roupa com desconto: " << vlrApagar_01 << std::endl;
	std::cout << "O valor a pagar pela 2' peca de roupa com desconto: " << vlrApagar_02 << std::endl;
	std::cout << "O valor a pagar pela 3' peca de roupa: " << vlrApagar_03 << std::endl;
	std::cout << "O valor total a apagar pelas tres pecas de roupa: " << vlrTotal << std::endl;


	return 0;
}
