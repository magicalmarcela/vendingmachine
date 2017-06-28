/*** Marcela Echavarria
** 4-19-17
** A class that returns the number of snacks in the machine, the snack object
**from the Snack class and decrease the amount of snacks in the machine***/


#include <iostream>

#include "VendSlot.hpp"

using namespace std;

//constructor to initialize variables
VendSlot::VendSlot(Snack snack1, int amount)

{

     snack = snack1;

     snackAmount = amount;

}


//default constructor
VendSlot::VendSlot()

{
    snack = Snack();
    snackAmount = 5;


}

//get method for each data member
Snack VendSlot::getSnack()

{

     return snack;

}

int VendSlot::getSnackAmount()

{

     return snackAmount;

}

//decrement function that reduces the snack amount by 1
void VendSlot::decrementAmount()

{

     snackAmount = snackAmount - 1 ;

}
