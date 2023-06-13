#include "Rifle.hpp"
#include <string>

Rifle::Rifle()
{
	this->nombre = "Rifle";
}

Rifle::~Rifle()
{
	
}

std::string Rifle::disparar()
{
	return "Púm púm púm!";
}