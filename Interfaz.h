#pragma once
#include <SFML/Graphics.hpp>

enum opcion_menu {
	NuevaPartida,
	PartidaGuardada,
	ComoJugar,
	Salir
};

class Interfaz{

private:
	sf::Texture _texturafondo ;
	sf::Sprite _spfondo;
	sf::Font _fuente;
	sf::Text*  _text;
	opcion_menu _opcion;
	int _flechita;
	int _flechita_anterior;
public:
	void cargar_textura(std::string);
	void cargar_fuente(std::string);
	Interfaz();
	opcion_menu get_opcion();
	void cmd();
	void update();
	sf::Sprite& getdrawfondo();
	sf::Text* getdrawtext();
	
	

};

