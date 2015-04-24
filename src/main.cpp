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
        std::cout << cookTime << std::endl;
        throw ArgError("Cook time must be biggest than 0");
    }
    ss.clear();
    ss << av[2];
    ss >> nbCook;
    if (nbCook <= 0){
        std::cout << nbCook << std::endl;
        throw ArgError("Number of cook must be biggest than 0");
    }
    ss.clear();
    ss << av[3];
    ss >> stockTime;
    if (stockTime <= 0){
        std::cout << stockTime << std::endl;
        throw ArgError("Stock timer must be biggest than 0");
    }
    return (new Reception(cookTime, nbCook, stockTime));
}

int main(int ac, char **av)
{
    Reception   *recep;
    if (ac != 4){
        std::cerr << "Usage: "
        << av[0]
        << " <cook time> <nb cook/kitchen> <stock timer>"
        << std::endl;
        return (-1);
    }
    try{
        recep = getParam(av);
    }
    catch (Error &err) {
        std::cerr << err.errorName() << ": " << err.what() << std::endl;
        return (-1);
    }
    recep->print();
}