#ifndef RECEPTION_HH
# define RECEPTION_HH


class Reception
{
private:
    int     _cookTime;
    int     _nbCook;
    int     _stockTime;
public:
    Reception(int ,int ,int);
    ~Reception();
    void 	print();
};

#endif //RECEPTION_HH
