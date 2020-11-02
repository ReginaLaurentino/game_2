#include <SFML/Graphics.hpp>
#include "Gameplay.h"


int main() {
    sf::RenderWindow window(sf::VideoMode(900, 500), "War of Survival");

    window.setFramerateLimit(60);
    Gameplay gp;


    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event))
        {

            if (event.type == sf::Event::Closed) {
                window.close();
                exit(1);
            }

            gp.cmd();
            gp.update(window);



            window.clear();
            gp.draw(window);
            window.display();
        }

    }

    return 0;

}
