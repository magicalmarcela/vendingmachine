/***Marcela Echavarria
**4-19-17
**header for MiniVend Class***/


#include<iostream>

#include <cmath>

#include "VendSlot.hpp"

using namespace std;

#ifndef MINIVEND_H

#define MINIVEND_H


// MiniVend class declaration
class MiniVend

{

private:

     VendSlot vs0;

     VendSlot vs1;

     VendSlot vs2;

     VendSlot vs3;

     double money;

public:

     MiniVend (VendSlot, VendSlot, VendSlot, VendSlot, double amount);


     double getMoney();

     int  numEmptySlots ();

     double valueOfSnacks ();

     void buySnack (int );

};

#endif
