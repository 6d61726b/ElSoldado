#include "Revolver.hpp"
#include <string>

Revolver::Revolver()
{
	this->nombre = "Revolver";
}

Revolver::~Revolver()
{
}

std::string Revolver::disparar()
{
	return "Púm";
}