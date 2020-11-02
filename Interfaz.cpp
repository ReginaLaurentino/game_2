#include "Interfaz.h"

void Interfaz::cargar_textura(std::string texto)
{
	_texturafondo.loadFromFile(texto);
}

void Interfaz::cargar_fuente(std::string texto)
{
	_fuente.loadFromFile(texto);
}

Interfaz::Interfaz(){
	_opcion = NuevaPartida;
	cargar_textura("imagenes/Interfaz/fondo.jpg");
	cargar_fuente("fuente/fuente.ttf");
	_text= new sf::Text;
	_text[0].setFont(_fuente);
	_text[1].setFont(_fuente);
	_text[2].setFont(_fuente);
	_text[3].setFont(_fuente);

	_text[0].setString("NUEVA PARTIDA");
	_text[0].setPosition(325,100);
	_text[1].setString("PARTIDA GUARDADA");
	_text[1].setPosition(300,150);
	_text[2].setString("COMO JUGAR");
	_text[2].setPosition(350,200);
	_text[3].setString("SALIR");
	_text[3].setPosition(400,250);
	_spfondo.setTexture(_texturafondo);
	_spfondo.setScale(2, 2);
	_flechita = 1;
}

opcion_menu Interfaz::get_opcion(){
	return _opcion;
}


sf::Sprite& Interfaz::getdrawfondo(){
	return _spfondo;// TODO: Insertar una instrucción "return" aquí
}

sf::Text* Interfaz::getdrawtext(){
	return  _text;// TODO: Insertar una instrucción "return" aquí
}


void Interfaz::cmd(){
		
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) ){
		if (_flechita > 1) {
			 _flechita_anterior= _flechita;
			_flechita--;
		}
		else _flechita=3;		
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
		if (_flechita < 3) {
			_flechita_anterior = _flechita;
			_flechita++; }
		else _flechita = 0;
	}


}

void Interfaz::update(){
		_text[_flechita].setFillColor(sf::Color::Magenta);	
		_text[_flechita_anterior].setFillColor(sf::Color::White);
}
