#include <SFML/Graphics.hpp>

int main()
{
    const int WINDOW_WIDTH = 800;
    const int WINDOW_HEIGHT = 600;

    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "SUPER Pong EX");
    sf::RectangleShape shape(sf::Vector2f(25.f, 100.f));
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        shape.setPosition(sf::Vector2f(.0f, sf::Mouse::getPosition(window).y));
        if (shape.getPosition().y < 0) shape.setPosition(sf::Vector2f(0.f, 0.f));
        if (shape.getPosition().y > WINDOW_HEIGHT - shape.getGlobalBounds().height) shape.setPosition(sf::Vector2f(0.f, WINDOW_HEIGHT - shape.getGlobalBounds().height));

        window.clear();
        window.draw(shape);
        window.display();
    }

    return EXIT_SUCCESS;
}