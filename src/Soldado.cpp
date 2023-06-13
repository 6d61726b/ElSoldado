#include "Soldado.hpp"
#include <iostream>

Soldado::Soldado()
{
	this->arma = nullptr;
}

Soldado::~Soldado()
{
	delete this->arma;
}

void Soldado::recogerArma(Arma* arma)
{
    if (this->arma == nullptr)
    {
	    this->arma = arma;
    }
    else
    {
        std::cout << "Parece que el soldado ya está equipado con otra arma.\n\n";
    }
}

void Soldado::dejarArma()
{
    if (this->arma == nullptr)
    {
        std::cout << "Parece que el soldado no está equipado con ningun arma.\n\n";
    }
    else
    {
        delete this->arma;
        this->arma = nullptr;
    }
}

void Soldado::disparar()
{
    if (this->arma == nullptr)
    {
        std::cout << "Parece que el soldado no tiene ningún arma en sus manos.\n\n";
    }
    else
    {
        std::cout << this->arma->disparar() << "\n\n";
    }
}

void Soldado::verArma()
{
    if (this->arma == nullptr)
    {
        //El soldado no tiene un arma asignada.
        std::cout << "Parece que el soldado no tiene ningún arma en sus manos.\n\n";     
    }
    else
    {
        std::cout << this->arma->getArma() << "\n\n";
    }
}
