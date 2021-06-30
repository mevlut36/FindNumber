#include <ctime>
#include <iostream>

int main() {
	std::cout << "Cherche le nombre a trouver entre 0 et 100 !";
	std::srand(time(nullptr));

	int essai = 0; // crée la variable essai pour trouver le nombre

	std::cout << "Combien d'essai souhaites-tu ? ";
	std::cin >> essai; // ton nombre d'essai choisi
	std::cin.ignore(); // pause la console pour taper un chiffre

	int nombre_mystere = std::rand() % 101; // La console choisi un chiffre au hasard

	for (int i = 0; i < essai; ++i) { // tant que ton nombre d'essai est inférieur tu continu la boucle
		std::cout << "Entrer un nombre entre 0 et 100: ";
		int nombre = 0; //création de la variable "ton nombre"
		std::cin >> nombre; // permet de taper un résultat
		std::cin.ignore(); // pause la console pour taper un chiffre

		if (nombre_mystere == nombre) { // Si le nombre mystere est le meme que ton nombre, alors tu as gagné
			std::cout << "Gagne" << std::endl;
			break;
		}
		else if (nombre > nombre_mystere) { // Si ton nombre est supérieur au nombre mystère, tu dois réessayer
			std::cout << "Trop grand" << std::endl;
		}
		else if (nombre < nombre_mystere) { // Si ton nombre est inférieur au nombre mystère, tu dois réessayer
			std::cout << "Trop petit" << std::endl;
		}

		if (i == essai - 1) { // Si tu n'as pas trouver le nombre mystère avec ton nombre total d'essai, tu as perdu.
			std::cout << "Perdu" << std::endl;
		}
		
	}
	std::cin.ignore(); // pause la console pour taper un chiffre
	return 0;
}
