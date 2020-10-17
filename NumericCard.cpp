#include <iostream>
#include <vector>

#include "Player.h"
#include "Deck.h"
#include "Card.h"

NumericCard::NumericCard(int val, char shape) {
    this->number = val;
    this->setShape(shape);
}

string NumericCard::toString() {
    string s="";
    switch(getShape()) {
        case Club:
            s="C";
            break;
        case Diamond:
            s="D";
            break;
        case Heart:
            s="H";
            break;
        case Spade:
            s="S";
            break;
    }
    return to_string(number)+s;
}

