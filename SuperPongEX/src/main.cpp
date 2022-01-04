#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Ball.h"

int main()
{   
    const int WINDOW_WIDTH = 800;
    const int WINDOW_HEIGHT = 600;
    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "SUPER Pong EX");

    Player* p1 = new Player("P1", sf::Color::Cyan);
    sf::RectangleShape p1Paddle = p1->GetPaddle();

    while (window.isOpen())
    {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) window.close();

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        p1Paddle.setPosition(sf::Vector2f(.0f, sf::Mouse::getPosition(window).y));
        if (p1Paddle.getPosition().y < 0) p1Paddle.setPosition(sf::Vector2f(0.f, 0.f));
        if (p1Paddle.getPosition().y > WINDOW_HEIGHT - p1Paddle.getGlobalBounds().height) p1Paddle.setPosition(sf::Vector2f(0.f, WINDOW_HEIGHT - p1Paddle.getGlobalBounds().height));

        window.clear();
        window.draw(p1Paddle);
        window.display();
    }

    return EXIT_SUCCESS;
}