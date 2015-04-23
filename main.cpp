#include <iostream>
#include <sstream>
#include "Reception.hh"
#include "Error.hh"

Reception               *getParam(char **av)
{
  int                 cookTime;
  int                 nbCook;
  int                 stockTime;
  std::stringstream   ss;
  
  ss << av[1];
  ss >> cookTime;
  if (cookTime <= 0){
    throw Error("cook time is too small");
  }
  ss << av[2];
  ss >> nbCook;
  if (nbCook <= 0){
    throw Error("number of cooks/kitchen is too small");
  }
  ss << av[3];
  ss >> stockTime;
  if (stockTime <= 0){
    throw Error("stock time is too small");
  }
  return (new Reception(cookTime, nbCook, stockTime));
}

int		main(int ac, char **av)
{
  Reception	rec;
  
  if (ac != 4){
    std::cerr << "Usage: "
	      << av[0]
	      << " <cook time> <nb cooks/kitchen> <stock timer>"
	      << std::endl;
    return (-1);
  }
  try{
    rec = getParam(av);
  }
  catch (Error &err) {
    std::cerr << err.errorName() << ": " << err.what() << std::endl;
    return (-1);
  }
}
