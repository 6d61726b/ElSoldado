#ifndef RIFLE_HPP
#define RIFLE_HPP

#include "Arma.hpp"
#include <string>

class Rifle: public Arma
{
public:
	Rifle();
	~Rifle();
	std::string disparar();
};

#endif