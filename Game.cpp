#include "Game.h"

//===================================================================//
// Main function

Game::Game():
    mWindow(sf::VideoMode(640, 480), "SFML Application"), 
    mPlayer(){
    ////////ma
    mPlayer.setRadius(40.f);
    mPlayer.setPosition(100.f, 100.f);
    mPlayer.setFillColor(sf::Color::Cyan);
}

void Game::run(){
    while(mWindow.isOpen()){
        processEvents();
        update();
        render();
    }
}

void Game::processEvents(){
    sf::Event event;
    while(mWindow.pollEvent(event)){
        switch(event.type){
            case sf::Event::KeyPressed:
                handlePlayerInput(event.key.code, true);
                break;
            case sf::Event::KeyReleased:
                handlePlayerInput(event.key.code, false);
                break;
            case sf::Event::Closed:
                mWindow.close();
                break;
        }
    }
}

void Game::update(){
    // sf::Vector2f movement(0.f, 0.f);
    // if(mIsMoveUp)
    //     movement.y -= 1.f;
    // if(mIsMoveDown)
    //     movement.y += 1.f;
    // if(mIsMoveLeft)
    //     movement.x -= 1.f;
    // if(mIsMoveRight)
    //     movement.x += 1.f;

    // mPlayer.move(movement);
}

void Game::render(){
    mWindow.clear();
    mWindow.draw(mPlayer);
    mWindow.display();
}
//===================================================//




// Additional function

void Game::handlePlayerInput(sf::Keyboard::Key key, bool isPressed){
    if(key == sf::Keyboard::W)
        mIsMoveUp = isPressed;
    else if(key == sf::Keyboard::S)
        mIsMoveDown = isPressed;
    else if(key == sf::Keyboard::A)
        mIsMoveLeft = isPressed;
    else if(key == sf::Keyboard::D)
        mIsMoveRight = isPressed;
}
//=========================================================//