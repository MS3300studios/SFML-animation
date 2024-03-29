#ifndef ANIMATION_H
#define ANIMATION_H
#pragma once
#include <SFML/Graphics.hpp>

class Animation
{
    public:
        Animation(sf::Texture* texture, sf::Vector2u imageCount, float switchTime);
        virtual ~Animation();

        sf::IntRect uvRect;
        void Update(int row, float deltaTime);

    protected:

    private:
        sf::Vector2u imageCount;
        sf::Vector2u currentImage;

        float totalTime;
        float switchTime;
};

#endif // ANIMATION_H
