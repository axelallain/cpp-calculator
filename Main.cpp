#include <iostream>

int main() {
	std::cout << "Première valeur" << std::endl;
	int input1;
	std::cin >> input1;

	std::cout << "Deuxième valeur" << std::endl;
	int input2;
	std::cin >> input2;
	
	std::string operateur;

	while(operateur != "+" || operateur != "-" || operateur != "*") {
		std::cerr << "Choisissez un opérateur" << std::endl;
		std::cin >> operateur;
		
		if(operateur == "+" || operateur == "-" || operateur == "*") {
			break;
		}
	}

	int resultat;

	if(operateur == "+") {
		resultat = input1 + input2;
	} else if(operateur == "-") {
		resultat = input1 - input2;
	} else if(operateur == "*") {
		resultat = input1 * input2;
	}

	std::cout << "Le résultat de " << input1 << " " << operateur << " " << input2 << " est " << resultat << std::endl;

	return 0;
}
