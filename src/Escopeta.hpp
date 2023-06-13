#ifndef ESCOPETA_HPP
#define ESCOPETA_HPP

#include "Arma.hpp"
#include <string>

class Escopeta: public Arma
{
public:
	Escopeta();
	~Escopeta();
	std::string disparar();
};

#endif