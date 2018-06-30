#include <SFML\Graphics.hpp>

void main() 
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "SFML works!");
	sf::Texture texture;
	texture.loadFromFile("doodlejump.jpg");
	sf::Sprite sprite;
	sprite.setTexture(texture);
	sprite.setPosition(350, 600);
	window.setFramerateLimit(60);
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			else if (event.type == sf::Event::KeyPressed)
			{
				if (event.key.code == sf::Keyboard::Right) {
					sprite.move(10, 0);
				}
				if (event.key.code == sf::Keyboard::Left) {
					sprite.move(-10, 0);
				}
				if (event.key.code == sf::Keyboard::Space) {
					sprite.move(0, -80);
				}
			}
		}
		sprite.move(0, 5);
		window.clear();
		window.draw(sprite);
		window.display();
	}
	system("exit");
}
