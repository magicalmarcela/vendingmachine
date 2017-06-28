/***Marcela Echavarria
**4-19-17
**header for VendSlot Class***/

#include<iostream>
using namespace std;
#include "snack.hpp"

#ifndef VENDSLOT_H
#define VENDSLOT_H

//VendSlot class declaration
class VendSlot

{

private:

     Snack snack;

     int snackAmount;


public:

     VendSlot(Snack snack1, int amount);

     VendSlot();

      Snack getSnack();

      int getSnackAmount();

      void decrementAmount();

};

#endif
