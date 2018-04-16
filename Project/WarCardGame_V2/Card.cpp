/* 
 * File:   Card.cpp
 * Author: Ivan Burgos
 * Created on April 15th, 2018, 8:29 PM
 * Purpose: War Card Game Project V1
 */

#include "Card.h"
using namespace std;

Card::Card(int num){
    if(num<0)num=0;
    if(num>51)num%=52;
    number=static_cast<char>(num);
}

char Card::suit(){
    if(number<13)return 'S';
    if(number<26)return 'H';
    if(number<39)return 'C';
    return 'D';
}

char Card::name(){
    char aName[]={'A','2','3','4','5','6','7','8','9','T','J','Q','K'};
    return aName[number%13];
}

char Card::value(){
    char n=number%13+1;
    if(n>10)return 10;
    return n;
}