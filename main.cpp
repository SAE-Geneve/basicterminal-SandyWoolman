#include <iostream>

int main()
{
	std::cout << "vous croisez un gros chat blanc\n";
	std::cout << "combien de carresses vous lui faites?\n";
	int ronronnement;
	std::cin >> ronronnement;
	if (ronronnement < 5)
	{
		std::cout << "le chat vous snob";
	}
	if (ronronnement >= 5)
	{
		std::cout << "le chat vous adopte";
	}

}
