#include <iostream>
#include <vector>

#include "Player.h"
#include "Deck.h"
#include "Card.h"

Card::~Card() noexcept {}
void Card::setShape(char shape) {
    switch(shape){
        case 'C':
            this->shape= Club;
            break;
        case 'D':
            this->shape= Diamond;
            break;
        case 'H':
            this->shape= Heart;
            break;
        case 'S':
            this->shape= Spade;
            break;
    }
}
