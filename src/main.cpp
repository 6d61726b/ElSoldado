#include <iostream>
#include "Soldado.hpp"
#include "Arma.hpp"
#include "Revolver.hpp"
#include "Rifle.hpp"
#include "Escopeta.hpp"

void menu(std::string& opcion);

void subMenu(std::string& opcion);

int main()
{
	Soldado soldado = Soldado {};

	std::string opcion = "0";
	do
	{
		menu(opcion); 

		if (opcion == "1")
		{
			opcion = "0";
			subMenu(opcion);

			if (opcion == "1")
			{
				Revolver* arma = new Revolver {};
				soldado.recogerArma(arma);
			}
			else if (opcion == "2")
			{
				Rifle* arma = new Rifle {};
				soldado.recogerArma(arma);
			}
			else if (opcion == "3")
			{
				Escopeta* arma = new Escopeta {};
				soldado.recogerArma(arma);
			}
			else if (opcion != "x" || opcion != "X")
			{
				opcion = "0";
			}
		}
		else if (opcion == "2")
		{
			soldado.dejarArma();
		}
		else if (opcion == "3")
		{
			soldado.disparar();
		}
		else if (opcion == "4")
		{
			soldado.verArma();
		}
		else if (opcion == "x" || opcion == "X")
		{
			opcion = "0";
		}
	} while(opcion != "0");

	return 0;
}

void menu(std::string& opcion)
{
	std::cout << "-== Bienvenido al campo de entrenamiento, Soldado ==-\n\n";
	std::cout << "¿Qué desea hacer?\n";
	std::cout << "(presione el número correspondiente a la opción del menú)\n\n";
	std::cout << "1- Recoger arma\n";
	std::cout << "2- Dejar arma\n";
	std::cout << "3- Disparar\n";
	std::cout << "4- Ver arma en uso\n";
	std::cout << "X- Salir\n";
	std::cout << ">> ";
	std::cin >> opcion;
	std::cout << std::endl;
}

void subMenu(std::string& opcion)
{
	std::cout << "Por favor, escoja el arma que desea utilizar:\n\n";
	std::cout << "1- Revolver\n";
	std::cout << "2- Rifle\n";
	std::cout << "3- Escopeta\n";
	std::cout << "X- Volver atrás\n";
	std::cout << ">> ";
	std::cin >> opcion;
	std::cout << std::endl;
}