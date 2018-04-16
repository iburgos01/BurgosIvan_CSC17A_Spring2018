/* 
 * File:   main.cpp
 * Author: Ivan Burgos
 * Created on April 15th, 2018, 8:29 PM
 * Purpose: War Card Game Project V1
 */

//System Libraries
#include <iostream>  //Input/output Stream Library
#include <cstdlib>   //Random and srand Library
#include <ctime>     //Time library

using namespace std; //Standard Name-space under which system Libraries Reside

//User Libraries
#include "Card.h"   //Card class
#include "Deck.h"   //Deck class

//Global Constants - No variables only Math/Science/Conversion constants


//Function Prototypes
void prntHnd(int *,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Create a deck of cards
    int nCards=52;
    Deck deck(nCards);
    
    //Deal a Hand
    int nDelt=26;
    deck.shuffle();
    int *hand=deck.deal(nDelt);
    
    //Process or map the inputs to the outputs
    prntHnd(hand,nDelt);
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}

void prntHnd(int *hand,int n){
    for(int i=0;i<n;i++){
        Card c(hand[i]);
        cout<<c.name()<<c.suit()<<endl;
    }
    delete []hand; 
}