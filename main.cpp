#include <iostream>

int main()
{
	std::cout << "Vous croisez un gros chat blanc.\n";
	std::cout << "Combien de carresses vous lui faites?\n";
	int ronronnement;
	std::cin >> ronronnement;
	if (ronronnement < 5)
	{
		std::cout << "Le chat blanc vous snob\n";\

		if ("Le chat blanc vous snob\n")
		{
			std::cout << "Essayez vous encore?\n";
			std::cout << "Oui 1\n";
			std::cout << "Non 2\n";

			int ronronnement2;
			std::cin >> ronronnement2;
			if (ronronnement2 == 1)
			{
				std::cout << "Le chat blanc vous aime. Fin 1.\n";
			}
			else if (ronronnement2 == 2)
			{
				std::cout << "Le chat blanc part. Mauvaise fin 1.\n";
			}
			else
			{
				std::cout << "Petit batard, le monde explose. Bravo. J'espere que tu es fier de toi. Fin secrete\n";
			}
		}
	}
	if (ronronnement >= 5)
	{
		std::cout << "Le chat blanc vous adopte.\n"; \

			if ("Le chat blanc vous adopte.\n")
				std::cout << "Un chat roux arrive.\n";
				std::cout << "Que faites-vous?\n";
				std::cout << "Je le caresse. 1\n";
				std::cout << "Je l'ignore. 2\n";
				std::cout << "Je lui donne a manger. 3\n";

				int ronronnement3;
				std::cin >> ronronnement3;

				{
					if (ronronnement3 == 1)
					{
						std::cout << "Les ronronnements du chat roux ressemblent a des grincements. Il vous aime bien. Fin 2\n";
					}
					else if (ronronnement3 == 2)
					{
						std::cout << "Le chat roux n'apprecie pas. Il vous saute a la gorge. Vous etes mort. Mauvaise fin 2\n";
					}
					else if (ronronnement3 == 3)
					{
						std::cout << "Le chat roux devore la viande et se retourne vers vous.\n";
					}
					else {
						std::cout << "Petit batard, le monde explose. Bravo. J'espere que tu es fier de toi. Fin secrete \n";
					}

				}
	}
	

}
