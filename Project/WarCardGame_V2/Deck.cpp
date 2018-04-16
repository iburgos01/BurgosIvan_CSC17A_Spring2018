/* 
 * File:   Deck.cpp
 * Author: Ivan Burgos
 * Created on April 15th, 2018, 8:29 PM
 * Purpose: War Card Game Project V1
 */

#include "Deck.h"

#include <cstdlib>
using namespace std;

Deck::Deck(int numCards){
    //Create the array of 52 Cards
    nCards=numCards;
    card=new Card*[nCards];
    //Allocate index
    index=new int[nCards];
    //Check out all cards
    for(int i=0;i<nCards;i++){
        card[i]=new Card(i%52);
        index[i]=i;
    }
    nDelt=0;
}

void Deck::shuffle(){
    for (int shfl=0;shfl<7;shfl++){
        for(int nCard=0;nCard<nCards;nCard++){
            int random=rand()%nCards; //[0,nCards-1]
            int temp=index[nCard];
            index[nCard]=index[random];
            index[random]=temp;
        }
    }
}

int *Deck::deal(int n){
    int *hand=new int[n];
    for(int i=nDelt;i<nDelt+n;i++){
        hand[i]=index[i];
    }
    nDelt+=n;
    return hand;
}