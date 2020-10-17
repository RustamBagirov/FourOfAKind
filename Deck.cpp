#include <iostream>
#include <queue>
#include "Card.h"
#include "Deck.h"


void Deck::init(const string &s){
    deckPos=0;
    //cout << s << endl;
    vector<string> splitStringVec;

    string modified_s=s;
    cout << s.length() << endl;
    while(modified_s.length()!=0){
        if(modified_s.at(0)==' '){
            modified_s = modified_s.substr(1,modified_s.length()-1);
            continue;
        }
        else{
            int pos= modified_s.find(" ");
            if (pos<0){ // last card in string
                splitStringVec.push_back(modified_s);
                modified_s= "";
            } else { // not last
                splitStringVec.push_back(modified_s.substr(0,pos));
                modified_s= modified_s.substr(pos,modified_s.length()-pos);
            }
        }
    }
   /* cout << "vector size = " << splitStringVec.size() << endl;
    cout << "{ " ;
    for (string x : splitStringVec)
        cout << ", " << x ;
    cout << " }";*/
    for (string x : splitStringVec){
        if(x.at(0)=='J' || x.at(0)=='Q' || x.at(0)=='K' || x.at(0)=='A')
            deck.push_back(new FigureCard(x.at(0),x.at(1)));
        else deck.push_back(new NumericCard(stoi(x.substr(0,x.length()-1)),x.at(x.length()-1)));
    }

}
Card* Deck::fetchCard() {
    return deck.at(deckPos++);
}
int Deck::getNumberOfCards() {
    return this->deck.size()-deckPos;
}
string Deck::toString() {
    string res="";
    cout << deck.size() << endl;
    for(int i=deckPos; i<deck.size(); i++)
        res += " " + deck[i]->toString();
    return res;
}