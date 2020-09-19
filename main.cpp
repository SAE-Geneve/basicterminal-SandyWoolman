#include <iostream>
#include <string>
#include <array>
using namespace std;

enum class State {
	INTRO,
	DEHORS,
	FIN,
	AUBERGE,
	AUBERGISTE,
	CHAMBRE,
};
State CurrentState = State::INTRO;
string PlayerName;

State Intro() {
	cout << "Bien le bonjour, cher aventurier. Quel est votre nom?\n";
	cin >> PlayerName;
	cout << "Ravi de vous rencontrer, " << PlayerName << ".\n "
		<< "Vous avez perdu l'amulette de la prophecie dans votre chambre de l'auberge hier soir.\n"
		<< "Vos compagnions attendent que vous alliez la recuperer.\n"
		<< "Vous etes dehors."; 
	return State::DEHORS;
}
State Chambre() {	
	cout << "Vous etes dans la chambre. Vous voyez le lit (1) et la fenetre (2).\n";
	cout << "Que faites-vous?\n";
	string chambre;
	int amulette;
	cin >> amulette;
	switch (amulette) {
		case 1:
			cout << "Vous retrouvez l'amulette. Les Hommes-Patates pourront etre battu.\n FIN";
			return State::FIN;
			break;
		case 2:
			cout << "Vous sautez par la fenetre et mourrez. Oups!";
			return State::FIN;
			break;
		default:
			cout << "L'amulette est perdue a jamais. Le seigneur des Hommes-Patates pourra dominer le monde sans probleme a cause de " << PlayerName << ".";
			break;
	}
}
State Aubergiste() {
	int etage;
	cin >> etage;
	switch (etage){
		case 1:
			cout << "L'aubergiste vous remercie de vous etre annoncer. Vous allez dans votre chambre.\n";
			return State::CHAMBRE;
			break;
		case 2:
			cout << "Vous etes malpoli et vous allez dans votre chambre.\n";
			return State::CHAMBRE;
			break;
		default:
		return State::FIN;
		break;
	}
}
State Dehors() {
	cout << "Vous etes dehors de l'auberge. \n"
		<< "Que faites-vous?\n "
		<< "Je rentre dans l'auberge. 1\n "
		<< "Je n'ai pas envie d'aller chercher l'amulette. Les prophecies sont pour les idiots. 2\n";
	int Choice;
	cin >> Choice;
	switch(Choice) {
		case 1:			
			cout << "Vous rentrez dans l'auberge. Vous voyez le proprietaire en train de parlez avec un homme, la charmante serveuse d'hier soir balaye le sol.\n Que faites-vous? \n Je m'anonce à l'aubergiste. (1)\n Je monte dans la chambre ou j'ai dormi hier soir. (2)\n";
			return State::AUBERGE;
			break;
		default:
			cout << "L'amulette est perdue a jamais. Le seigneur des Hommes-Patates pourra dominer le monde sans probleme a cause de " << PlayerName << ".";
			return State::FIN;
			break;
	}
}
int main()
{
	while (true) {
		switch (CurrentState) {
		case State::INTRO:
			CurrentState = Intro();
			break;
		case State::DEHORS:
			CurrentState = Dehors();
			break;
		case State::AUBERGE:
			CurrentState = Aubergiste();
			break;
		case State::CHAMBRE:
			CurrentState = Chambre();
			break;
		}
	}
}