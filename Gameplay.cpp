#include "Gameplay.h"

Gameplay::Gameplay(){
}

void Gameplay::cmd(){
	i.cmd();
}

void Gameplay::update(sf::RenderWindow& window){
	
	i.update();
	switch (i.get_opcion())
	{
	case NuevaPartida:

		break;

	case PartidaGuardada:

		break;
	case ComoJugar:

		break;

	case Salir:
		window.close();
		break;

	}

}

void Gameplay::draw(sf::RenderWindow& window){
	sf::Text* vec= i.getdrawtext();
	window.draw(i.getdrawfondo());
	for (int f = 0; f < 4; f++) {
		vec[f];
	}

}
