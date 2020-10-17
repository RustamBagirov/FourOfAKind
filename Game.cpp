#include <iostream>
#include <vector>
#include <fstream>

#include "Player.h"
#include "Deck.h"
#include "Game.h"

Game::Game(char *configurationFile) : deck(), players() {
    ParseInputFile(initVec,configurationFile);
}

void Game::ParseInputFile(vector<string> &input_vec,char *configurationFile) {
    ifstream readFromFile;
    string pathStr="", txtFromFile="";
    // retreiving a string from the argument
    char* c= configurationFile;
    while((*c)!='\0'){ // '\0' at arg end
        pathStr.push_back((*c));
        c += 0x01;
    }
    pathStr = "../"+pathStr;
    cout << "file path: " << pathStr <<  endl;
    readFromFile.open(pathStr,ios_base::in);
    if (readFromFile.is_open()) {
        //good() Returns true if none of the stream's error state flags (eof, fail and bad) is set.
        while (readFromFile.good()) {
            getline(readFromFile, txtFromFile);
            if (txtFromFile != "" && txtFromFile[0]!='#')
                input_vec.push_back(txtFromFile);
        }

    }
    readFromFile.close();
}

void Game::init() {
    deck.init(initVec[2]);
    cout << "deck toString() - " << endl;
    cout << deck.toString() << endl;
}

Shape Card::getShape() {
    return shape;
}