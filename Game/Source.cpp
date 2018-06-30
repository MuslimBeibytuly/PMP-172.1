#include <SFML\Graphics.hpp>

void main() 
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "SFML works!");

	std::vector<sf::RectangleShape> shapes;
	for (size_t i = 0; i < 10; i++)
	{
		sf::RectangleShape shape(sf::Vector2f(10, 10));
		shape.setPosition(sf::Vector2f(10 * i, 10));
		shape.setFillColor(sf::Color::Blue);
		shapes.push_back(shape);
	}
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
				if (event.key.code == sf::Keyboard::Down) {
					for (auto & shape : shapes) {
						shape.move(sf::Vector2f(0, -40));
					}
				}
			}
		}
		window.clear();
		for (auto & shape : shapes) {
			shape.move(sf::Vector2f(1, 1));
			window.draw(shape);
		}
		window.display();
	}
	system("exit");
}
