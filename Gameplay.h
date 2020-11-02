#pragma once
#include "Interfaz.h"

enum Estado_Gameplay{

	Ejecutando,
	Pausa
};


class Gameplay{
private:
	Interfaz i;
public:
	Gameplay();
	void cmd();
	void update(sf::RenderWindow&);
	void draw(sf::RenderWindow &);
};

