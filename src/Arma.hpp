#ifndef ARMA_HPP
#define ARMA_HPP

#include <string>

class Arma
{
protected:
	std::string nombre;

public:
	Arma();
	virtual ~Arma();
	virtual std::string disparar() = 0;
	std::string getArma();
};

#endif