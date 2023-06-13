#ifndef REVOLVER_HPP
#define REVOLVER_HPP

#include "Arma.hpp"
#include <string>

class Revolver: public Arma
{
public:
	Revolver();
	~Revolver();
	std::string disparar();
};

#endif