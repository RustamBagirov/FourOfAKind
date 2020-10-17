#include <iostream>
#include <vector>

#include "Player.h"
#include "Deck.h"
#include "Card.h"

FigureCard::FigureCard(char fig, char shape) {
    switch(fig){
        case 'J':
            this->figure= Jack;
            break;
        case 'Q':
            this->figure= Queen;
            break;
        case 'K':
            this->figure= King;
            break;
        case 'A':
            this->figure= Ace;
            break;
    }
    this->setShape(shape);
}

string FigureCard::toString() {
    string s="";
    switch(figure) {
        case Jack:
            s="J";
            break;
        case Queen:
            s="Q";
            break;
        case King:
            s="K";
            break;
        case Ace:
            s="A";
            break;
    }
    switch(getShape()) {
        case Club:
            s+="C";
            break;
        case Diamond:
            s+="D";
            break;
        case Heart:
            s+="H";
            break;
        case Spade:
            s+="S";
            break;
    }
    return s;
}