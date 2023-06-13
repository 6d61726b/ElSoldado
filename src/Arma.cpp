#include "Arma.hpp"

Arma::Arma()
{
	this->nombre = "Arma genérica";
}

Arma::~Arma()
{
}

std::string Arma::getArma()
{
	return this->nombre;
}