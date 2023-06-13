#ifndef SOLDADO_HPP
#define SOLDADO_HPP

#include "Arma.hpp"

class Soldado
{
	Arma* arma;

public:
	Soldado();
	~Soldado();
	void recogerArma(Arma* arma);
	void dejarArma();
	void disparar();
	void verArma();
};

#endif