#include <iostream>
#include <sstream>
#include "Reception.hh"
#include "Error.hh"

Reception               getParam(char **av)
{
    int                 cookTime;
    int                 nbCook;
    int                 stockTime;
    std::stringstream   ss;

    ss << av[0];
    ss >> cookTime;
    if (cookTime <= 0){
        throw Error("");
    }
}

int main(int ac, char **av)
{
    if (ac != 4){
        std::cerr << "Usage: "
        << av[0]
        << " <cook time> <nb cook/kitchen> <stock timer>"
        << std::endl;
        return (-1);
    }
    try{
        getParam(av);
    }
    catch (Error &err) {
        std::cerr << err.errorName() << ": " << err.what() << std::endl;
        return (-1);
    }
}