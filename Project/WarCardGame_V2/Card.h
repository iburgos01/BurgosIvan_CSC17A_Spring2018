/* 
 * File:   Card.h
 * Author: Ivan Burgos
 * Created on April 15th, 2018, 8:29 PM
 * Purpose: War Card Game Project V1
 */

#ifndef CARD_H
#define CARD_H

class Card{
    private:
        char number;
    public:
        Card(int);
        char suit();
        char name();
        char value();
        char getNumber(){return number;}
     
};

#endif /* CARD_H */

