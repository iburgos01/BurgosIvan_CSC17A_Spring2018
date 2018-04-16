/* 
 * File:   Deck.h
 * Author: Ivan Burgos
 * Created on April 15th, 2018, 8:29 PM
 * Purpose: War Card Game Project V1
 */

#ifndef DECK_H
#define DECK_H

#include "Card.h"

class Deck{
    private:
        Card **card;
        int *index;
        int nCards;
        int nDelt;
    public:
        Deck(int);
        ~Deck(){
            for(int i=0;i<nCards;i++){delete card[i];}
            delete []card;
        }
        void shuffle();
        int *deal(int);
};

#endif /* DECK_H */

