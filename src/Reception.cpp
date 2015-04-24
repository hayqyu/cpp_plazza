#include <iostream>
#include "Reception.hh"

Reception::Reception(int cookTime, int nbCook, int stockTime) :
    _cookTime(cookTime), _nbCook(nbCook), _stockTime(stockTime)
{
}

Reception::~Reception()
{
}

void	Reception::print()
{
	std::cout << "Msg from recep: " << _cookTime << ", " << _nbCook
	<< ", " << _stockTime
	<< std::endl;
}