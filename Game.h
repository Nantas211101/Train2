#pragma once
#include <SFML/Graphics.hpp>

class Game{
    public:
                        Game();
        void            run();

    // main function
    private:
        void            processEvents();
        void            update();
        void            render();

    // addition function
    private:
        void            handlePlayerInput(sf::Keyboard::Key key, bool isPressed);

    // Big variable
    private:
        sf::RenderWindow mWindow;
        sf::CircleShape mPlayer;

    // Small variable
    private:
        bool mIsMoveUp, mIsMoveDown, mIsMoveLeft, mIsMoveRight;
        
};

