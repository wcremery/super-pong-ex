#include <SFML/Graphics.hpp>
#include "Human.h"
#include "Bot.h"
#include "Ball.h"

int main()
{   
    const int WINDOW_WIDTH = 800;
    const int WINDOW_HEIGHT = 600;
    sf::RenderWindow* window = new sf::RenderWindow(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "SUPER Pong EX");

    Human* player1 = new Human("P1", sf::Color::Green);
    sf::RectangleShape* p1Paddle = player1->GetPaddle();

    Bot* IA = new Bot(sf::Color::Red);
    sf::RectangleShape* IAPaddle = IA->GetPaddle();
    Ball* ball = new Ball();
    sf::CircleShape ballShape{ ball->GetShape() };

    sf::Clock clock;
    sf::Time deltaTime;

    while (window->isOpen())
    {
        deltaTime = clock.restart();

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) window->close();

        sf::Event event;
        while (window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window->close();
        }

        player1->Move(deltaTime, window);
        IA->Move(deltaTime, window);

        window->clear();
        window->draw(*p1Paddle);
        window->draw(*IAPaddle);
        window->draw(ballShape);
        window->display();
    }

    return EXIT_SUCCESS;
}