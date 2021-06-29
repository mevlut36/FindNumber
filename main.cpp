#include <ctime>
#include <iostream>

int main() {
	std::cout << "Cherche le nombre a trouver entre 0 et 100 !";
	std::srand(time(nullptr));

	int essai = 0;
	std::cout << "Combien d'essai souhaites-tu ? ";
	std::cin >> essai;
	std::cin.ignore();

	int nombre_mystere = std::rand() % 101;
	for (int i = 0; i < essai; ++i) {
		std::cout << "Entrer un nombre entre 0 et 100: ";
		int nombre = 0;
		std::cin >> nombre;
		std::cin.ignore();

		if (nombre_mystere == nombre) {
			std::cout << "Gagne" << std::endl;
			break;
		}
		else if (nombre > nombre_mystere) {
			std::cout << "Trop grand" << std::endl;
		}
		else if (nombre < nombre_mystere) {
			std::cout << "Trop petit" << std::endl;
		}

		if (i == essai - 1) {
			std::cout << "Perdu" << std::endl;
		}
		
	}
	std::cin.ignore();
	return 0;
}
