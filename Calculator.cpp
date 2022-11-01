

#include "Calculator.h"
#include "SetProject.h"

Calculator::Calculator() : window(sf::VideoMode(WIDTH_W, HEIGHT_W), "Calculator")
{

	btn = new Button(100, 50, "+", sf::Color(100, 100, 100, 255), sf::Color(255, 255, 255, 255), 20);


}

void Calculator::run()
{
	while (window.isOpen()) {
		processEvents();
		update();
		render();
	}
}

void Calculator::processEvents()
{
	while (window.pollEvent(event)) {
		if (event.type == sf::Event::Closed) {
			window.close();
		}
	}
}

void Calculator::update()
{
}

void Calculator::render()
{
	window.clear();
	btn->draw(window);
	window.display();
}
